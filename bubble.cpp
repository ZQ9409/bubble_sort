#include "pch.h"
#include "bubble.h"

using namespace std;

bubble::bubble()
{
	cout << "bubble sort " << endl;
}

bubble::~bubble()
{
	cout << "~bubble sort " << endl;
}

vector<int> bubble::sort(vector<int> arr)
{
	int i, j, n;
	n = arr.size();
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
	return arr;
}
vector<int> bubble::sort1(vector<int> arr)
{
	int i, j, n;
	n = arr.size();
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				int tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}
	return arr;
}