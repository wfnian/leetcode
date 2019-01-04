// 114flatten_binary_tree_to_linked_list.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <iostream>
#include <vector>
#include <queue>
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
	void preOrder(TreeNode *t) {
		if (t != NULL)
		{
			cout << t->val << " ";
			preOrder(t->left);
			preOrder(t->right);

		}
	}

	void inOrder(TreeNode *t) {
		if (t != NULL)
		{
			inOrder(t->left);
			cout << t->val << " ";
			inOrder(t->right);

		}
	}

	void postOrder(TreeNode *t) {
		if (t != NULL)
		{
			postOrder(t->left);
			postOrder(t->right);
			cout << t->val << " ";

		}
	}

	void levelOrder(TreeNode *t) {
		if (t != NULL)
		{
			queue<TreeNode *>tNode;
			tNode.push(t);
			while (!tNode.empty())
			{
				queue<TreeNode *> tmp = tNode;
				tNode = queue<TreeNode *>();
				while (!tmp.empty())
				{
					cout << tmp.front()->val << " ";
					if (tmp.front()->left != NULL)
						tNode.push(tmp.front()->left);
					if (tmp.front()->right != NULL)
						tNode.push(tmp.front()->right);
					tmp.pop();
				}
				cout << endl;
			}
		}
	}
};

class Solution {
public:
	TreeNode *prev = NULL;
	void flatten(TreeNode* root) {
		//TreeNode *first = new TreeNode(-1);
		//TreeNode *head = first;
		//TreeNode *last;
		//if (root != nullptr)
		//{
		//	stack<TreeNode *> tNode;
		//	tNode.push(root);
		//	while (!tNode.empty())
		//	{
		//		TreeNode *tmp = tNode.top();
		//		tNode.pop();
		//		last = new TreeNode(tmp->val);
		//		head->left = NULL;
		//		head->right = last;
		//		head = last;
		//		if (tmp->right!=NULL)
		//			tNode.push(tmp->right);
		//		if (tmp->left != NULL)
		//			tNode.push(tmp->left);
		//		
		//	}
		//	/*last->left = NULL;
		//	last->right = NULL;*/
		//}
		//root = first->right;
		if (root == NULL)
			return;
		flatten(root->right);
		flatten(root->left);
		root->right = prev;
		root->left = NULL;
		prev = root;

	}

};

int main()
{
	TreeNode *t;
	m_tree tree;
	tree.creatTree(t);
	//1 2 3 -1 -1 4 -1 -1 5 -1 6 -1 -1
	tree.levelOrder(t);
	Solution().flatten(t);
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
