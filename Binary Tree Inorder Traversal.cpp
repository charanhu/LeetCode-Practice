// /Method 1
class Solution
{
public:
    void help(TreeNode *root, vector<int> &ans)
    {
        if (root == NULL)
        {
            return;
        }
        help(root->left, ans);
        ans.push_back(root->val);
        help(root->right, ans);
    }

    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        help(root, ans);
        return ans;
    }
};

// Method 2
class Solution
{
public:
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> ans;
        stack<TreeNode *> s;
        s.push(root);
        while (!s.empty())
        {
            if (root == NULL)
                return ans;

            TreeNode *x = s.top();
            if (x->left != NULL)
            {
                s.push(x->left);
                x->left = NULL;
            }
            else
            {
                ans.push_back(x->val);
                s.pop();
                if (x->right != NULL)
                {
                    s.push(x->right);
                }
            }
        }
        return ans;
    }
};
