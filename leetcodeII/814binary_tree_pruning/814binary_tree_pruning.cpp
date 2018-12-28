// 814binary_tree_pruning.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include "pch.h"
#include <iostream>
#include <string>
#include <queue>
#include <vector>

using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};

class m_tree {//此类不属于题目，程序化建树，方便调试
public:
	void creatTree(TreeNode *&t) {
		int a;
		cin >> a;
		if (a == -1)
			t = NULL;
		else
		{
			t = new TreeNode(a);
			creatTree(t->left);
			creatTree(t->right);
		}
	}
	void preOrder(TreeNode *&t) {
		if (t != NULL)
		{
			cout << t->val << " ";
			preOrder(t->left);
			preOrder(t->right);

		}
	}

};

class Solution {
public:
	TreeNode* pruneTree(TreeNode* root) {
		prune(root);
		return root;
	}
	void prune(TreeNode *&t) {
		if (t != NULL) {
			prune(t->left);
			prune(t->right);
			if (t->left == NULL && t->right == NULL && t->val == 0)
				t = NULL;

		}
	}
};

int main()
{
	TreeNode *t;
	m_tree m_t;
	m_t.creatTree(t);
	m_t.preOrder(t);

	std::cout << "Hello World!\n";
}