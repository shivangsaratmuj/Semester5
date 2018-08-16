#include <stdio.h>

void main(){
	int n = 0, i = 1, stack[100], f, l, t, new[100],count;
	f = l = 0;
	t = 0;
	count = 0;
	while(i!=0){
		printf("\n\n\nFor input press 1\nFor exit press 0\n");
		scanf("%d", &i);
		if(i == 1) {
			printf("Element\n");
			scanf("%d", &n);
			count ++;

			if(n > 1) {
				printf("Invalid input\n");
			}
			else{

			switch(n){
				case 0:
					stack[l]=n;
					if(f == l){
						printf("Reject\n");
						l++;
					}
					else{
						if(stack[l] == stack[l-1]){
							printf("Accept\n");
							l++;
						}
						else{
							printf("Reject\n");
							l++;
						}
					}
					break;
				case 1:
					stack[l]=n;
					if(f == l){
						printf("Reject\n");
						l++;
					}
					else{
						if(stack[l] == stack[l-1]){
							printf("Accept\n");
							l++;
						}
						else{
							printf("Reject\n");
							l++;
						}
					}
					break;
			}
			}
		}
	}
	printf("-----------------------------------------------------------\n");
	for (int i = 0; i <count; i++){
		printf("%d\n", stack[i]);
	}
}
