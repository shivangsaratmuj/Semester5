#include <stdio.h>
#include <stdbool.h>

void main(){
	bool state=false;
	int n, arr[100], i;
	printf("No of elements\n");
	scanf("%d", &n);
	printf("Elements\n");
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	if (arr[n-1] == arr[n-2] && (arr[n-1] == 0 || arr[n-1] == 1)){
		state = true;
		printf("Accepted\n");
	}
	else {
		printf("Rejected\n");
	}
}