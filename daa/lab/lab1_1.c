// Binary Search by Iteration

#include<stdio.h>

void main()
{
	/* code */
	int arr[100], n, i, key, mid, test, x, first, last;
	printf("Enter Number of test array\n");
	scanf("%d", &n);
	printf("Enter Sorted test Array\n");
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter Number to Search\n");
	scanf("%d", &test);
	first = 0;
	last = n-1;
	mid = (first + last)/2;
	x = 1;
	while(x == 1 || first == last){
		if(test == arr[mid]){
			printf("%d is in %dth index\n", test, mid+1);
			x = 0;
		}
		else if(test > arr[mid]){
			first = mid;
			mid = (first + last)/2;
		}
		else if(test < arr[mid]){
			last = mid;
			mid = (first + last)/2;
		}
	}
}