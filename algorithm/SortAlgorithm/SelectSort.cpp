// SelectSort.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	int a[] = { 1,2,90,12,9,10 };
	for (int i = 0; i < 6; i++)
	{
		int temp = a[i];
		for (int j = i + 1; j < 6; j++)
		{
			if (temp > a[j])
			{
				a[i] = a[j];
				a[j] = temp;
				temp = a[i];
			}
		}
		cout << a[i] << " ";
	}
	cout << endl;
    return 0;
}

