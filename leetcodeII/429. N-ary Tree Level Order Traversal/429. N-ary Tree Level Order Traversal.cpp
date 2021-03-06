// 429. N-ary Tree Level Order Traversal.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <queue>
#include <vector>

using namespace std;
class Node {
public:
	int val;
	vector<Node*> children;

	Node() {}

	Node(int _val, vector<Node*> _children) {
		val = _val;
		children = _children;
	}
};

class Solution {
public:
	vector<vector<int>> levelOrder(Node* root) {
		if (root == NULL)
			return vector<vector<int>>();
		else
		{
			queue<Node *> tNode;
			vector<vector<int>> ans;
			vector<int> temp;
			tNode.push(root);
			while (!tNode.empty())
			{
				temp.clear();
				int size = tNode.size();
				for (size_t i = 0; i < size; i++)
				{
					Node *p = tNode.front();
					tNode.pop();
					temp.push_back(p->val);
					for (size_t j = 0; j < p->children.size(); j++)
					{
						tNode.push(p->children[j]);
					}
				}
				if (!temp.empty())
					ans.push_back(temp);
			}
			return ans;
		}

	}
};

int main()
{
	queue<int> a;
	for (size_t i = 0; i < 6; i++)
	{
		a.push(i);
	}
	cout << a.front() << endl;
	a.pop();
	cout << a.front() << endl;
	std::cout << "Hello World!\n";
}
