// Bubble sort

#include <stdio.h>

void main(){
	int arr[100],n, min, i, j, temp;
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


	for (i = 0; i < n; i++){
		for(j = 0; j < n; j++) {
			if(arr [j] > arr [i]){
				temp = arr [j];
				arr[j]=arr[i];
				arr[i]=temp;
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