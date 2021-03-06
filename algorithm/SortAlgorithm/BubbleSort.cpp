
#include "stdafx.h"
#include "iostream"
#include <cstring>
using namespace std;

void BubbleSort1(int *a, int size)
{
	int changeCnt = 0;
	bool isChange = false;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			int temp = a[j];
			if (a[j] > a[j + 1])
			{
				isChange = true;
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
		if (!isChange)
			break;
		changeCnt++;
	}
	cout << "BubbleSort1 changeCnt:" << changeCnt << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

//节约比较次数
void BubbleSort2(int *a, int size)
{
	int changeCnt = 0;
	bool isChange = false;
	while (true)
	{
		bool isChange = false;
		for (int j = 0; j < size - 1; j++)
		{
			int temp = a[j];
			if (a[j] > a[j + 1])
			{
				isChange = true;
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}

		if (!isChange)
			break;
		changeCnt++;
	}
	cout << "BubbleSort2 changeCnt:" << changeCnt << endl;
	for (int i = 0; i < 6; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int main()
{
	int a[] = { 2,2,2,2,2,2 };
	int len = 6;
	BubbleSort1(a, 6);
	int b[] = { 2,2,2,2,2,2 };
	BubbleSort2(b, 6);
    return 0;
}

