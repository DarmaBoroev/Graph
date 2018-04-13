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
	List() :Head(nullptr), size(0) {}; //������������� �������� � ������� ������������
	List(const List &obj) : Head(obj.Head), size(obj.size) {};
	~List();
	void Add(const int x); //�������� ����� const
	void Show();
	void Pop(const int N); //��������� ������� ���������� ��������
	int Count() { return size; }; //������ ������ ������� �������-�������
};