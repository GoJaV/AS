// GT6_N1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stack>
using namespace std;
stack <int> qq;

int main()
{
	int a ;
	cout << "Enter some number: ";
	cin >> a;
	while (a > 1)
	{
		qq.push(a % 2);
		a = int(a / 2);
	}
	qq.push(a);
	cout << "\n" << "Binary record: ";
	while (!qq.empty())
	{
		cout << qq.top();
		qq.pop();
	}

	getchar();
	getchar();

	return 0;
}

