#include <iostream>
#include "List.h"
#include <fstream>
#include <string>

using namespace std;

int toInt(char ch);
List createListFromFile(string);

int main() {
	setlocale(LC_ALL, "rus");
	List arr[5];

	
	
	for (int i = 0; i < 5; i++) {
		arr[i] = createListFromFile("Text.txt");
	};
	arr[1].Show();
	system("pause");
	return 0;
}

//Переводит char в int
int toInt(char ch) {
	return (int)ch - 48;
}

List createListFromFile(string fileName) {
	ifstream fin(fileName);
	List tmpList;
	char buff;
	do {
		fin.get(buff);
		if (buff != ' ' && buff != '\n')
			tmpList.Add(toInt(buff));
	} while (buff != '\n');

	return tmpList;
}