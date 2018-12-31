// 107binary_tree_level_order_traversal_II.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <stack>

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
/*
Given a binary tree, return the bottom-up level order traversal 
of its nodes' values. (ie, from left to right, level by level from leaf to root).
*/
class Solution {
public:
	vector<vector<int>> levelOrderBottom(TreeNode* root) {
		vector<vector<int>> ans;
		queue<TreeNode *>tNode;
		if (root!=NULL)
		{
			stack<vector<int>>Nodes;
			vector<int> aRow;
			tNode.push(root);
			while (!tNode.empty())
			{
				queue<TreeNode *>tmp = tNode;
				tNode = queue<TreeNode*>();
				aRow.clear();
				while (!tmp.empty())
				{
					aRow.push_back(tmp.front()->val);
					if (tmp.front()->left != NULL)
						tNode.push(tmp.front()->left);
					if (tmp.front()->right != NULL)
						tNode.push(tmp.front()->right);
					tmp.pop();
				}
				Nodes.push(aRow);
			}
			while (!Nodes.empty())
			{
				ans.push_back(Nodes.top());
				Nodes.pop();
			}
		}

		return ans;
	}
};

int main(){
	//https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
	TreeNode *t;
	m_tree tree;
	tree.creatTree(t);
	//3 9 -1 -1 20 15 -1 -1 7 -1 -1
	vector<vector<int>> ans = Solution().levelOrderBottom(t);
	for (auto i : ans) {
		for (auto j : i)
			cout << j << " ";
		cout << endl;
	}
    std::cout << "Hello World!\n"; 
}