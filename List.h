#pragma once
class List
{
	struct Node {
		int val;
		Node *next;
	};
	Node *Head;
	int size;
public:
	List() :Head(nullptr), size(0) {}; //Инициализация значений с помощью конструктора
	List(const List &obj) : Head(obj.Head), size(obj.size) {};
	~List();
	void Add(const int x); //Дописано слово const
	void Show();
	void Pop(const int N); //Объявлена функция извлечения элемента
	int Count() { return size; }; //Внутри класса описана функция-счетчик
};