// PVS.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

#include <iostream>
using namespace std;
int funt(int a)
{
	for (int i = 0; i < a; i++)
		a += i;
	
}
int funt1(int a)
{
	for (int i = 0; i < a; i++)
		a -= i;
	
}
int funt2(int a)
{
	for (int i = 0; i < a; i++)
		a *= i;
}
int main()
{
	int a = 0;
	int b = 0;
	int e; 
	cin >> a;
	cin >> b;
	int c = a + b;
	