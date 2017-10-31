#include "List.h"
#include "iostream"


/*
	Init должен из мусорного List, предоставленного нам 
	оператором new, сделать семантически верный пустой список.
*/
void List_Init(List * list)
{
	list->length = 0;
	list->head = nullptr;
	list->tail = nullptr;
}

/*
	Destroy должен очистить память, выделенную под все ListNode'ы,
	чтобы в следующем шаге мы смогли без каких либо страхов очистить и List.
*/
void List_Destroy(List * list)
{
	ListNode* first = list->head;
	ListNode* current;
	while (first) {
		current = first;
		first = first->next;
		ListNode_Destroy(current);
	}
	list->length = 0;
	list->head = nullptr;
	list->tail = nullptr;
}

/*
	Одна из самых важных функций в разработке.
	В Dump вы должны выводить ВСЮ информацию, которую только можно вытянуть
	из структуры данных: адреса, явки, значения внутренних полей структуры.
	Во время разработки новой функции, благодаря Dump'у вы можете посмотреть
	как именно ваши действия меняют структуру списка.
	Он должен вызывать ListNode_Dump() для всех узлов.

	На время выполнения задания Dump станет вашим лучшим другом.
*/
void List_Dump(List * list)
{
	ListNode* current = list->head;
	std::cout << "===============List=DUMP==============" << std::endl;
	std::cout << "List length:" << list->length << std::endl;
	while (current) {
		ListNode_Dump(current);
		current = current->next;
	}
	std::cout << "===========End=of=List=DUMP===========" << std::endl;
}

/*
	OK это функция, которая проверяет, что семантически ваш список незапопрчен
	и возвращает соответствующее значение.
*/
bool List_OK(List * list)
{
	return true;
}

/*
	Вставляет значение в конец списка.
*/
void List_push_back(List * list, int value)
{
	ListNode* new_node = new ListNode;

	ListNode_Init(new_node);

	new_node->value = value;

	if (list->length == 0) {
		list->head = new_node;
	}
	else {
		new_node->prev = list->tail;
		list->tail->next = new_node;
	}
	list->tail = new_node;
	list->length++;
}

/*
	Вставляет значение в начало списка.
*/
void List_push_front(List * list, int value)
{
	ListNode* new_node = new ListNode;

	ListNode_Init(new_node);

	new_node->value = value;

	if (list->length == 0) {
		list->tail = new_node;
	}
	else {
		new_node->next = list->head;
		list->head->prev = new_node;
	}
	list->head = new_node;
	list->length++;
}

/*
	Достаёт значение из конца списка.
*/
int List_pop_back(List * list)
{
	list->length--;
	int value = list->tail->value;
	ListNode_Destroy(list->tail);
	list->tail = list->tail->prev;
	delete list->tail->next;
	list->tail->next = nullptr;
	return value;
}

/*
	Достаёт значение из начала списка.
*/
int List_pop_front(List * list)
{
	list->length--;
	int value = list->head->value;
	ListNode_Destroy(list->head);
	list->head = list->head->next;
	delete list->head->prev;
	list->head->prev = nullptr;
	return value;
}

/*
	Вставляет значение в список так, что после вставки
	он оказывается под указанным индексом.

	Индексы начинаются с 0.
*/
void List_insert(List * list, int index, int value)
{
	ListNode * insert = new ListNode;
	ListNode_Init(insert);

	ListNode * current = new ListNode;
	ListNode_Init(current);

	ListNode * temp = new ListNode;
	ListNode_Init(temp);

	insert->value = value;
	if (index == 0) {
		List_push_front(list, value);
	}
	else {
		current = list->head;
		list->length++;
		for (int i = 1; i < index; i++) {
			current = current->next;
		}
		temp = current->next;
		current->next = insert;
		insert->prev = current;
		insert->next = temp;
		temp->prev = insert;
	}

}

/*
	Достаёт значение по указанному индексу.
*/
int List_get(List * list, int index)
{
	return 0;
}

/*
	Убирает значение по указанному индексу.
*/
void List_erase(List * list, int index)
{
}

/*
	Очищает список.
*/
void List_clear(List * list)
{
}

/*
	Возвращает размер списка.
*/
int List_size(List * list)
{
	return 0;
}

/*
	Меняет местами два элемента, по указанным индексам.
*/
void List_swap(List * list, int index_1, int index_2)
{
}

/*
	Сортирует список.
	Это уже серьёзно)
*/
void List_sort(List * list)
{
}
