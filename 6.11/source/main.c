#include <stdio.h>

void bubbleSort(int a[], int size);
void display(int a[], int size);
int sortTimes = -1;

int main() 
{
	int a[] = { 2, 55, 0, 11, 34, 20, 11, 46, 20, 5, 4, 66, 31 };
	int size = sizeof(a) / sizeof(a[0]);//陣列的總大小除以陣列元素的大小
	
	printf("Elements before sorting:\n");
	display(a, size);

	bubbleSort(a, size);
	printf("Elements after sorting:\n");
	display(a, size);

	printf("\n");
	printf("Sort times: %d\n",sortTimes);
}

void bubbleSort(int a[], int size) 
{ 
	for (int i = 0; i < size - 1; i++) 
	{

		int flag = 0;

		for (int j = 0; j < size - i - 1; j++) 
		{

			if (a[j] > a[j + 1]) 
			{

				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				flag = 1;
			}
		}

		sortTimes += 1;
		if (flag == 0)
			break;//sort end
	}
}

void display(int a[], int size) 
{
	for (int i = 0; i < size; ++i) 
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
}