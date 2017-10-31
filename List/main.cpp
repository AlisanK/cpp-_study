// List.cpp: определяет точку входа для консольного приложения.
//

#include "List.h"
#include "stdlib.h"
#include "iostream"

/*
В этом задании вам предлагается реализовать структуру данных - двусвязный список.

Необходимо, чтобы пользователь работал со списком исключительно через те операции,
которые описаны в List.h. Таким образом, мы изолируем пользователя от мелкой работы напрямую с
ListNode'ами. Это должен взять на себя List.

Все операции, как ни странно, должны выполняться корректно) Для демонстрации опишите в main тесты,
показывающие это.
*/

void Test_1(), Test_2(), Test_3(), Test_4(), Test_5();

int main()
{
	/*Test_1();*/
	Test_2();
	/*Test_3();
	Test_4();
	Test_5(); */ //doesn't work yet :(
	/*
	Место для вызова остальных тестов.
	*/
	system("pause");
	return 0;
}

void Test_1()
{
	List* list = new List;
	List_Init(list);

	List_Dump(list);

	List_Destroy(list);
	delete list;
}

void Test_2()
{
	int n, value;

	List* list = new List;

	List_Init(list);

	std::cout << "input number of nodes" << std::endl;
	std::cin >> n;
	std::cout << "input nodes values" << std::endl;
	for (int i = 0; i < n; i++) {
		std::cin >> value;
		List_push_front(list, value);
	}

	List_Dump(list);

	List_Destroy(list);

	delete list;
}
void Test_3()
{
	int n, value;

	List* list = new List;

	List_Init(list);

	std::cout << "input number of nodes" << std::endl;
	std::cin >> n;
	std::cout << "input nodes values" << std::endl;
	for (int i = 0; i < n; i++) {
		std::cin >> value;
		List_push_back(list, value);
	}

	List_Dump(list);

	List_Destroy(list);

	delete list;
}
void Test_4()
{
	int n, value;

	List* list = new List;

	List_Init(list);

	std::cout << "input number of nodes" << std::endl;
	std::cin >> n;
	std::cout << "input nodes values" << std::endl;
	for (int i = 0; i < n; i++) {
		std::cin >> value;
		List_push_back(list, value);
	}

	List_Dump(list);

	std::cout << "first node:" << List_pop_front(list) << std::endl;

	List_Dump(list);

	std::cout << "last node:" << List_pop_back(list) << std::endl;

	List_Dump(list);

	List_Destroy(list);

	delete list;
}
void Test_5()
{
	int n, value, index;

	List* list = new List;

	List_Init(list);

	std::cout << "input number of nodes" << std::endl;
	std::cin >> n;
	std::cout << "input nodes values" << std::endl;
	for (int i = 0; i < n; i++) {
		std::cin >> value;
		List_push_back(list, value);
	}

	List_Dump(list);

	std::cout << "input value:" << std::endl;
	std::cin >> value;
	std::cout << "input index:" << std::endl;
	std::cin >> index;

	List_insert(list, index, value);

	List_Dump(list);

	List_Destroy(list);

	delete list;
}
