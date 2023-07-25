#pragma once
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <unordered_map>
#include <stack>

namespace Log
{
	void PrintIntVector(const std::vector<int>& intVector);
	void PrintIntVectorofVector(const std::vector<std::vector<int>>& intVectors);
	void PrintStringVector(const std::vector<std::string>& stringVector);
	void PrintInt(int value);
	void PrintChar(const char* message);
	void PrintGrid(const std::vector<std::vector<int>>& grid);
	void PrintString(const std::string& word);
	void PrintBool(bool b);
};

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};