// Selection Sort

#include <stdio.h>

void main(){
	int arr[100],n, min, diff, temp;
	printf("Number\n");
	scanf("%d", &n);
	printf("--------------------------------------------------------------------------------\n");
	printf("Array\n");
	for (int i = 0; i < n; ++i)
	{
		/* code */
		scanf("%d", &arr[i]);
	}
	printf("--------------------------------------------------------------------------------\n");
	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = i; j < n; ++j)
		{
			/* code */
			if(arr[i] > arr[j]){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	printf("--------------------------------------------------------------------------------\n");
	printf("Result\n");
	printf("--------------------------------------------------------------------------------\n");
	for (int i = 0; i < n; ++i)
	{
		/* code */
		printf("%d\n", arr[i]);
	}
}