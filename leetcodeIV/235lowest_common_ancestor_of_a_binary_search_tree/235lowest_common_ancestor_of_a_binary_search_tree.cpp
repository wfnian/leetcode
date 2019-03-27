#include <iostream>
#include <vector>

using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int _val) :val(_val), left(nullptr), right(nullptr) {}
};

class Solution {
public:
	inline int m_max(const int &a, const int &b) {
		if (a > b)
			return a;
		return b;
	}
	inline int m_min(const int &a, const int &b) {
		if (a < b)
			return a;
		return b;
	}
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

		if (root == nullptr || root == p || root == q)
			return root;
		
		if (m_max(p->val, q->val) < root->val)
			return lowestCommonAncestor(root->left, p, q);

		else if (m_min(p->val, q->val) > root->val)
			return lowestCommonAncestor(root->right, p, q);

		else
			return root;

	}
};