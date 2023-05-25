// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com
// PVS.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.


#include <iostream>
using namespace std;
int funt(int a)
{
	for (int i = 0; i < a; i++)
		a += i;
	return a; // Добавлено возвращаемое значение a
}
int funt1(int b)
{
	for (int i = 0; i < b; i++)
		b -= i;
	return b; // Добавлено возвращаемое значение b
}
int funt2(int c)
{
	for (int i = 0; i < c; i++)
		c *= i;
	return c; // Добавлено возвращаемое значение c
}
int main()
{
	int a = 0;
	int b = 0;
	int e = 0; // Инициализирована переменная e
	cin >> a;
	cin >> b;
	cin >> e;
	int c = a + b + e; // Использована переменная e
}