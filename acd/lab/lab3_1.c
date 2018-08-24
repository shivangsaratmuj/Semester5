#include <stdio.h>
#include <string.h>

int main()
{
	/* code */
	int i=0, j=0, n, counta=0, countb=0;
	char v[1000];
	printf("Enter the string over the alphabet{a,b}\n");
	gets(v);
	n = strlen(v);
	printf("The string length is %d\n", n);
	if (v[0] == 'b')
	{
		/* code */
		j = 3;
		printf("The state is Changed to state 3\n");
	}
	do{
		switch(j)
		{
			case 0: if (v[i] == 'b')
			{
				/* code */
				j=1;
				countb++;
				printf("\nThe state is changed to state 1");
				i++;
			}
			else if (v[i] == 'a')
			{
				/* code */
				j=0;
				counta++;
				printf("The state remains to state 0\n");
				i++;

			}
			break;

			case 1: if (v[i] == 'a')
			{
				/* code */
				j=3;
				printf("The state is Changed to state 3\n");
				i++;
			}
			if (v[i] == 'b')
			{
				/* code */
				j=1;
				countb++;
				printf("The state remains to state 1\n");
				i++;
			}
			break;

			case 3: printf("It is in state 3 - Dead State\n");
					i++;
					break;
		}
	}while(i<n);

	if (counta==countb)
	{
		/* code */
		j = 2;
		printf("The state is Changed to state 2\n");
	}else{
		j=3;
		printf("The state is Changed to state 3\n");
		printf("It is in state 3 - Dead State\n");
	}

	printf("\nIt is in the %d state in the end.\n",j);

	return 0;
}