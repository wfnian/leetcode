// 706design_hashmap.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class MyHashMap {
public:
	/** Initialize your data structure here. */

	MyHashMap() {
		keys.clear();
		values.clear();
		KEY.clear();
	}

	/** value will always be non-negative. */
	void put(int key, int value) {
		int tmp = KEY.size();
		KEY.insert(key);
		if (KEY.size() != tmp)
		{
			keys.push_back(key);
			values.push_back(value);
		}
		else
			for (size_t i = 0; i < keys.size(); i++)
				if (keys[i] == key) {
					values[i] = value;
					break;
				}


	}

	/** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
	int get(int key) {
		if (KEY.find(key) == KEY.end())
			return -1;
		else
			for (size_t i = 0; i < keys.size(); i++)
				if (keys[i] == key)
					return values[i];

	}

	/** Removes the mapping of the specified value key if this map contains a mapping for the key */
	void remove(int key) {
		if (KEY.find(key) == KEY.end())
			return;
		else {
			for (size_t i = 0; i < keys.size(); i++)
				if (keys[i] == key) {
					values[i] = -1;
					break;
				}
		}

	}
private:
	vector<int>keys;
	vector<int>values;
	unordered_set<int>KEY;

};


int main()
{
	MyHashMap hashMap;
	hashMap.put(1, 1);
	hashMap.put(2, 2);
	cout << hashMap.get(1) << endl;
	cout << hashMap.get(3) << endl;
	hashMap.put(2, 1);
	cout << hashMap.get(2) << endl;
	hashMap.remove(2);
	cout << hashMap.get(2) << endl;

	std::cout << "Hello World!\n";
}

