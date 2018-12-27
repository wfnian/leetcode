// 637average_of_levels_in_binary_tree.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <queue>

using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};

class m_tree
{
public:
	void creatTree(TreeNode *&T) {
		int a;
		cin >> a;
		if (-1 == a)
			T = NULL;
		else
		{
			T = new TreeNode(a);
			creatTree(T->left);
			creatTree(T->right);
		}
	}
	void preOrder(TreeNode *&T) {
		if (T != NULL)
		{
			cout << T->val << " ";
			preOrder(T->left);
			preOrder(T->right);
		}
	}
	int heightOfTree(TreeNode* &T) {
		if (T == NULL)
			return 0;
		else
		{
			int LT = heightOfTree(T->left);
			int RT = heightOfTree(T->right);

			if (LT > RT)
				return LT + 1;
			else return RT + 1;
		}
	}

};
class Solution {
public:
	vector<double> averageOfLevels(TreeNode* root) {
		m_tree tree;
		int height = tree.heightOfTree(root);
		vector<double> ans(height+1);
		
		return ans;
	}
	void levelOrder(TreeNode*& root) {
		queue<TreeNode *> lev;
		lev.push(root);
		while (!lev.empty())
		{
			double sum = 0.0;
			int count = 0;
			TreeNode *p;
			p = lev.front();
			sum += p->val;
			count++;
		}

	}
};

int main()
{
	TreeNode *t;
	m_tree tree;
	tree.creatTree(t);
	
	vector<double> s=Solution().averageOfLevels(t);
	
	for (auto i : s)
		cout << i<<" ";
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
