#include <iostream>
//#include <stdlib.h>

using namespace std;

void quick_sort(int *arr, int m, int n)
{
	if(m >= n)
		return;
	int key = arr[m];
	int pre = m, rare = n;
	while(pre < rare)
	{
		while(pre < rare && arr[rare] >= key)
			rare--;
		arr[pre] = arr[rare];
		while(pre < rare && arr[pre] <= key)
			pre++;
		arr[rare] = arr[pre];
	}
	arr[pre] = key;
	quick_sort(arr, m, pre-1);
	quick_sort(arr, pre+1, n);
}

int main()
{
	int n;
	int ele;
	cin >> n;
	int *arr = new int[n];
	for(int i = 0; i < n; i++)
	{
		cin >> ele;
		arr[i] = ele;
	}
	quick_sort(arr, 0, n-1);
	for(int i = 0; i < n; i++)
		cout << arr[i] << " ";
	//system("pause");
	return 0;
}
