#include<iostream>
#include<Windows.h>
using namespace std;

int string_length(const char str[]);
void to_upper(char str[]);
void to_lower(char str[]);


void main()
{
	setlocale(LC_ALL, "Rus");

	cout << (int)'a' << endl;
	cout << (int)'A' << endl;
	cout << 'A' - 'a'<< endl;

	const int n = 256;
	
	char str[n] = {};
	cout << " ";

	SetConsoleCP(1251);
	//cin >> str;
	//cin.getline(str, n);
	SetConsoleCP(866);

	cout << str << endl;
	cout << "Вы ввели строку длиной: " << strlen(str)/*встроенная ф-ия*/ << " символов\n"; //string_length(str)

	to_upper(str);
	cout << str << endl;
	
	

	
}

int string_length(const char str[]) //ф-я считает количество элементов в строке
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}


void to_upper(char str[]) 
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')str[i] -= ' '; //str[i] = toupper(str)[i] - ф-я возвращает большие буквы
		if (str[i] >= 'à' && str[i] <= 'ÿ')str[i] -= ' ';
	}
}


void to_lower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		str[i] = tolower(str[i]); //tolower - ф-я возвращает вместо большой маленькую
	}
	
}








