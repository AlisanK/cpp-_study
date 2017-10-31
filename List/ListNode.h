#pragma once
const int poison = 124534;

struct ListNode {
	int value = poison;

	ListNode* next;
	ListNode* prev;
};

void ListNode_Init(ListNode* node);
void ListNode_Destroy(ListNode* node);

void ListNode_Dump(ListNode* node);
bool ListNode_OK(ListNode* node);
