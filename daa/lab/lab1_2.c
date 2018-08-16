// Binary Search by Recursion

#include<stdio.h>
int arr[100], n, test,result, i;


int bin(int first1, int last1, int mid1,int n1){

	if (test == arr[mid1]){
		result = mid1;
		return result+1;
	}
	else if(test > arr[mid1]){
		first1 = mid1+1;
		mid1 = (first1+last1)/2;
		result = bin(first1, last1,mid1,n1);
	}
	else if(test < arr[mid1]){
		last1 = mid1-1;
		mid1 = (first1+last1)/2;
		result = bin(first1, last1,mid1,n1);
	}
	//return result;
}

void main(){
	
	int mid, first, last;
	printf("N\n");
	scanf("%d", &n);
	printf("Array\n");
	for (i = 0; i < n; ++i)
	{
		/* code */
		scanf("%d", &arr[i]);
	}
	printf("Test\n");
	scanf("%d", &test);
	first = 0; 
	last = n-1;
	mid = (first+last)/2;
	result = bin(first, last,mid,n);
	printf("%d is in %dth position\n", test, result);
}