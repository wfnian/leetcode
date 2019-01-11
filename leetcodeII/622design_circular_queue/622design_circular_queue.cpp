// 622design_circular_queue.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <algorithm>
using namespace std;

class MyCircularQueue {
private:
	int *q;
	int front, rear, size, tag;

public:
	/** Initialize your data structure here. Set the size of the queue to be k. */
	MyCircularQueue(int k) {
		size = k;
		q = new int[size];
		front = 0;
		rear = 0;
		tag = 0;
	}

	/** Insert an element into the circular queue. Return true if the operation is successful. */
	bool enQueue(int value) {
		if (rear == front && tag) return false;
		q[rear] = value;
		rear = (rear + 1) % size;
		if (rear == front) tag = 1;
		return true;
	}

	/** Delete an element from the circular queue. Return true if the operation is successful. */
	bool deQueue() {
		if (front == rear && !tag) return false;
		front = (front + 1) % size;
		if (front == rear) tag = 0;
		return true;
	}

	/** Get the front item from the queue. */
	int Front() {
		if (front == rear && !tag) return -1;
		else return q[front];
	}

	/** Get the last item from the queue. */
	int Rear() {
		if (front == rear && !tag) return -1;
		else return rear == 0 ? q[size - 1] : q[rear - 1];
	}

	/** Checks whether the circular queue is empty or not. */
	bool isEmpty() {
		return front == rear && !tag;
	}

	/** Checks whether the circular queue is full or not. */
	bool isFull() {
		return front == rear && tag;
	}
}; 
int main()
{
	/*
	["MyQ","enQu","Rear","Rear","deQu","enQu","Rear","deQu","Front","deQu","deQu","deQu"]
	[[6],  [6],    [],    [],    [],     [5],   [],    [],    [],     [],   [],     []  ]
	*/
	MyCircularQueue que(6);
	cout << que.enQueue(6) << endl;
	cout << que.Rear() << endl;
	cout << que.Rear() << endl;
	cout << que.deQueue() << endl;
	cout << que.enQueue(5) << endl;
	cout << que.Rear() << endl;
	cout << que.deQueue() << endl;
	cout << que.Front() << endl;
	cout << que.deQueue() << endl;
	cout << que.deQueue() << endl;
	cout << que.deQueue() << endl;


	return 0;
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
