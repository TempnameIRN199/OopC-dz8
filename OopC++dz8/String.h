#pragma once
#include "Header.h"




class String
{
private:
	char* str;
	int len;
public:
	String() {
		str = new char[80];
		len = 80;
	}

	String(int n) {
		str = new char[n];
		len = n;
	}

	String(const char* s) {
		len = strlen(s);
		str = new char[len];
		strcpy(str, s);
	}

	String(const String& s) {
		len = s.len;
		str = new char[len];
		strcpy(str, s.str);
	}

	~String() {
		delete[] str;
	}

	void input() {
		cout << "Enter string: ";
		cin >> str;
	}

	void output() {
		cout << "String: " << str << endl;
	}

	void SetString(const char* s) {
		len = strlen(s);
		str = new char[len];
		strcpy(str, s);
	}

	void SetString(const String& s) {
		len = s.len;
		str = new char[len];
		strcpy(str, s.str);
	}

	int operator[](int index) {
		if (index < 0 || index >= len) {
			cout << "Error! Index out of range!" << endl;
			return 0;
		}
		else {
			return str[index];
		}
	}

	int operator()(char symbol) {
		int count = 0;
		for (int i = 0; i < len; i++) {
			if (str[i] == symbol) {
				count++;
			}
		}
		return count;
	}

	operator int() {
		return len;
	}

	/*¬ ранее созданный класс String добавьте перегрузку[], (), преобразовани€ типа к int:
	Х[] Ч возвращает элемент по указанному индексу;
	Х() Ч ищет символ в строке, если символ есть возвращает индекс, если нет Ц1.
	ѕреобразование к int возвращает длину строки.*/
};