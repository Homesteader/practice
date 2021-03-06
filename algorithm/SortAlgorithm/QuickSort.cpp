// QuickSort.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

void quickSort(int a[], int l, int r)
{
	if (l < r)
	{
		int i = l, j = r, temp = a[l];
		//挖坑
		while (i < j)
		{
			while (i < j && temp < a[j])
			{
				j--;
			}
			if (i < j)
			{
				a[i++] = a[j];
			}
			while (i < j && temp > a[i])
			{
				i++;
			}
			if (i < j)
			{
				a[j--] = a[i];
			}
		}
		a[i] = temp;

		//分治
		quickSort(a, l, i - 1);
		quickSort(a, i + 1, r);
	}
}

int main()
{
	int a[] = {2,4,1,9,0,10,23,7,9 };
	int len = 9;
	quickSort(a, 0, len - 1);
	for (int i = 0; i <len; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
    return 0;
}

