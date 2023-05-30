#pragma once

struct ListNode
{
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}	
};


class MiddleLinkedList
{
public:
	ListNode* middleNode(ListNode* head);
	ListNode* middleNode2(ListNode* head);
	ListNode* middleNode3(ListNode* head);

	MiddleLinkedList()
	{

	}
};

