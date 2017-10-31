#include "ListNode.h"
#include <iostream>

void ListNode_Init(ListNode* node)
{
	node->value = 0;

	node->next = nullptr;
	node->prev = nullptr;
}

void ListNode_Destroy(ListNode * node)
{
	node->value = poison;
}

void ListNode_Dump(ListNode * node)
{
	std::cout << "===============Node=DUMP==============" << std::endl;

	std::cout << "Node address: " << node        << std::endl;

	std::cout << "Node->value:  " << node->value << std::endl;
	std::cout << "Node->prev:   " << node->prev  << std::endl;
	std::cout << "Node->next:   " << node->next  << std::endl;

	std::cout << "===========End=of=Node=DUMP===========" << std::endl;
}

bool ListNode_OK(ListNode * node)
{
	return true;
}
