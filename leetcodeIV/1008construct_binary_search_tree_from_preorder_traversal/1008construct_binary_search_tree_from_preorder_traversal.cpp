// 1008construct_binary_search_tree_from_preorder_traversal.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>

using namespace std;

#define valType int

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int _val) :val(_val), left(nullptr), right(nullptr) {}
};

class m_Tree
{
public:
	void creatTree(TreeNode *&T) {
		valType _val;
		cin >> _val;
		if (_val != -1)
		{
			T = new TreeNode(_val);
			creatTree(T->left);
			creatTree(T->right);
		}
	}
	void preOrder(TreeNode *&T) {
		if (T!=nullptr)
		{
			cout << T->val << " ";
			preOrder(T->left);
			preOrder(T->right);
		}
	}

};


class Solution_ {
public:
	TreeNode* bstFromPreorder(vector<int>& preorder) {
		TreeNode *t = new TreeNode(preorder[0]);
		for (size_t i = 0; i < preorder.size(); i++)
		{
			this->go(t, preorder[i]);
		}
		return t;

	}

	void creatBst(TreeNode *T, int data) {

			if (data > T->val)
			{
				if (T->left!=nullptr)
				{
				T = new TreeNode(data);
				}
				else creatBst(T->right, data);
			}
			if (data < T->val)
			{
				if(T->right!=nullptr)
				T = new TreeNode(data);
				else creatBst(T->left, data);
			}
		
	}
	void go(TreeNode* root, int x)
	{
		if (x < root->val) {
			if (!root->left)
				root->left = new TreeNode(x);
			else
				go(root->left, x);
		}
		if (x > root->val) {
			if (!root->right)
				root->right = new TreeNode(x);
			else
				go(root->right, x);
		}
	}
};

class Solution {//高级解法，思路清晰无比
public:
	TreeNode* bstFromPreorder(vector<int>& preorder) {
		int len = preorder.size();
		if (len == 0)return NULL;
		int rootVal = preorder[0];
		vector<int> left;
		vector<int> right;
		for (auto x : preorder)
		{
			if (x < rootVal)
				left.push_back(x);
			if (x > rootVal)
				right.push_back(x);
		}
		TreeNode* root = new TreeNode(rootVal);
		root->left = bstFromPreorder(left);
		root->right = bstFromPreorder(right);
		return root;
	}
};

int main()
{
	TreeNode *t;
	m_Tree().creatTree(t);
	//1 2 -1 -1 3 4 -1 -1 -1
	m_Tree().preOrder(t);

	vector<valType> preorder{ 8,5,1,7,10,12 };
	TreeNode *T = Solution().bstFromPreorder(preorder);

	std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
