#include <stdio.h>
#include <string.h>

char v[1000], t[1000];
int point = 0;

void push(a){
	t[point] = a;
	point++;
}

char pop() {
	char a;
	a = t[point];
	point--;
	return a;
}

int main()
{
	/* code */
	char po;
	int i=0, j=0, n;
	printf("Enter the string over the brackets\n");
	gets(v);
	n=strlen(v);
	printf("The string length is %d\n", n);
	if (v[0] == ')' || v[0] == '}' || v[0] == ']')
	{
		/* code */
		j = 3;
		printf("The state is Changed to state 3\n");
	}
		do{
			switch(j){
				case 0: if (v[i] == '(' || v[i] == '{' || v[i] == '[')
				{
					/* code */
					push(v[i]);
					j=0;
					printf("The state remains in state 0\n");
					i++;
				} else if (v[i] == ')' || v[i] == '}' || v[i] == ']')
				{
					/* code */
					j = 1;
					po = pop();
					printf("%c\n", po );
					if (v[i] == ')' && po == '(')
					{
						/* code */
						j = 1;
						printf("The state is changed to state 1\n");
					} else if (v[i] == '}' && po == '{')
					{
						/* code */
						j = 1;
						printf("The state is changed to state 1\n");
					}else if (v[i] == ']' && po == '[')
					{
						/* code */
						j = 1;
						printf("The state is changed to state 1\n");
					}else{
						j = 3;
						printf("The state is changed to state 1\n");
					}
					i++;
				}
				break;

				case 1: if (v[i] == ')' || v[i] == '}' || v[i] == ']')
				{
					/* code */
					j = 1;
					po = pop();
					printf("%c\n", po );
					if (v[i] == ')' && po == '(')
					{
						/* code */
						j = 1;
						printf("The state remains in state 1\n");
					}else if (v[i] == '}' && po == '{')
					{
						/* code */
						j = 1;
						printf("The state remains in state 1\n");
					}else if (v[i] == ']' && po == '[')
					{
						/* code */
						j = 1;
						printf("The state remains in state 1\n");
					}else{
						j = 3;
						printf("The state is changed to state 1\n");
					}
					i++;
				} else if (v[i] == '(' || v[i] == '{' || v[i] == '['){
					j=3;
					printf("The state is changed to state 3\n");
					i++;
				}
				break;

				case 3: printf("This is dead state\n");
				j=3;
				i++;
			}
		}while(i<n);

		if (point != 0)
		{
			/* code */
			printf("The state is changed to state 3\n");
			printf("This is dead state\n");
		}else {
			printf("The state is changed to state 2 -Final State\n");
		}
	
	return 0;
}