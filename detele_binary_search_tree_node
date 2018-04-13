/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
       if(root==NULL)
		   return root;
	   if(root->val>key)
		   root->left = deleteNode(root->left, key);
	   else if(root->val < key)
		   root->right = deleteNode(root->right, key);
	   else
       {
			if(root->left == NULL)
				return root->right;
			if(root->right == NULL)
				return root->left;
			TreeNode *cur = root->right;
			while(cur->left)
				cur = cur->left;
			root->val = cur->val;
			root->right = deleteNode(root->right, root->val);
	   }
	   return root;
    }

	TreeNode* deleteNode1(TreeNode* root, int key) {
       if(root==NULL)
		   return root;
	   if(root->val == key)
	   {
			if(root->right == NULL)
				return root->left;
			else
		    {
				TreeNode *cur = root->right;
				while(cur->left)
					cur = cur->left;
				swap(root->val, cur->val);	//此处是交换
			}
	   }
	   deleteNode1(root->left, key);
	   deleteNode2(root->right, key);
    }
};
