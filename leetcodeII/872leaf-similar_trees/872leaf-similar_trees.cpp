// 872leaf-similar_trees.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) :val(x), left(NULL), right(NULL) {}
};

void CreatTree(TreeNode *&T) {
	int a;
	cin >> a;
	if (a == -1)
		T = NULL;
	else {
		T = new TreeNode(a);
		CreatTree(T->left);
		CreatTree(T->right);
	}
}

class Solution {
public:
	bool leafSimilar(TreeNode* root1, TreeNode* root2) {
		vector<int> s1, s2;
		PreOrder(root1, s1);
		PreOrder(root2, s2);
		return s1 == s2;
	}
	void PreOrder(TreeNode *T, vector<int> &arr) {
		if (T != NULL)
		{
			if (T->left == NULL && T->right == NULL)
			{
				arr.push_back(T->val);
			}

			PreOrder(T->left, arr);
			PreOrder(T->right, arr);
		}
	}
};
int main()
{
	TreeNode *T1, *T2;
	CreatTree(T1);
	CreatTree(T2);
	// 3 5 6 -1 -1 2 7 -1 -1 4 -1 -1 1 9 -1 -1 8 -1 -1
	cout << Solution().leafSimilar(T1, T2);
    std::cout << "Hello World!\n"; 
}

