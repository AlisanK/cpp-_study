#pragma once

#include "ListNode.h"

struct List {
	ListNode* head; // Первый элемент
	ListNode* tail; // Последний элемент

	int length;     // Длина списка
};

/*
	Во время выполнения работы вам разрешается объявлять 
	какие-угодно другие вспомагательные функции.
	Если вы во время разработки понимаете, что код в двух разных 
	местах программы дублируется, вынесите его в отдельную функцию.

	Не заморачивайтесь пока по поводу верификации. Если пользователь говорит
	вставить в список на 5 место элемент, а у вас их всего 2, просто ничего не делайте.
*/

/*
	Первым делом вы должны реализовать функции
	List_Init, List_Destroy, List_Dump, List_OK.
*/

void List_Init(List* list);
void List_Destroy(List* list);

void List_Dump(List* list);
bool List_OK(List* list);

/*
	Вторым этапом будет описание базовых функций работы с краями списка.
*/
void List_push_back(List* list, int value);
void List_push_front(List* list, int value);

int List_pop_back(List* list);
int List_pop_front(List* list);


/*
	Третим этапом опишите функции для работы с произвольными элементами списка.
*/
void List_insert(List* list, int index, int value);
int  List_get(List* list, int index);
void List_erase(List* list, int index);


/*
	В самом конце предлагается реализовать некоторые специфические функции.
*/
void List_clear(List* list);
int List_size(List* list);

void List_swap(List* list, int index_1, int index_2);
void List_sort(List* list);
