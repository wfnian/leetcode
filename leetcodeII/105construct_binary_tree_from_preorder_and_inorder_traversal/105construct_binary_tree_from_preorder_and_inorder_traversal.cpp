// 105construct_binary_tree_from_preorder_and_inorder_traversal.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <queue>

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
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

		TreeNode *t = nullptr;
		if (preorder.size() > 0) {
			t = new TreeNode(preorder[0]);
			int tmp;
			for (int i(0); i < inorder.size(); i++) {
				if (inorder[i] == preorder[0]) 
					tmp = i;
					break;
				}
			
			vector<int>a(inorder.begin(), inorder.begin() + tmp);
			vector<int>b(inorder.begin() + tmp + 1, inorder.end());
			vector<int>c(preorder.begin() + 1, preorder.begin() + tmp+1);
			vector<int>d(preorder.begin() + tmp + 1, preorder.end());
			t->left = buildTree(c,a);
			t->right = buildTree(d,b);
		}
		return t;
	}
};

int main()
{
	//TreeNode *t;
	//m_tree tree;
	//tree.creatTree(t);
	//1 2 4 -1 -1 5 8 -1 -1 -1 3 6 -1 9 10 -1 -1 11 -1 -1 7 -1 -1
	vector<int>pre{ 1,2,4,5,8,3,6,9,10,11,7 };
	vector<int>in{ 4,2,8,5,1,6,10,9,11,3,7 };
	Solution().buildTree(pre, in);

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
