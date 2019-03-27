#include <iostream>
#include <vector>

using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};

class m_tree
{
public:
	void creatTree(TreeNode* &root) {
		int data;
		cin >> data;
		if (data != -1)
		{
			root = new TreeNode(data);
			creatTree(root->left);
			creatTree(root->right);
		}
	}
	void postOrder(TreeNode *&root) {
		if (root != nullptr)
		{
			postOrder(root->left);
			postOrder(root->right);
			cout << root->val << " ";
		}
	}
	void midOrder(TreeNode *&root) {
		if (root != nullptr)
		{
			midOrder(root->left);
			cout << root->val << " ";
			midOrder(root->right);
		}
	}
};

class Solution {
public:
	TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (root==p || root==q || root==nullptr)
			return root;
		TreeNode *l = lowestCommonAncestor(root->left, p, q);
		TreeNode *r = lowestCommonAncestor(root->right, p, q);

		if (l!=nullptr&&r!=nullptr)
			return root;
		else
		{
			if (l!=nullptr)
				return l;
			return r;
		}
	}

	
};

int main() {


	TreeNode *root;
	m_tree().creatTree(root);
	//1 2 -1 -1 3 4 6 -1 -1 -1 5 -1 -1
	/*m_tree().postOrder(root); cout << endl;
	m_tree().midOrder(root); cout << endl;*/



	system("pause");
	return 0;

}