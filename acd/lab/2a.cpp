#include<stdio.h>
#include<string.h>

int main()
{
	int i=0,j=0,n;
	char v[100],a,b;
	printf("Enter the string over the alphabet {a,b} : ");
	gets(v);
	n=strlen(v);
	printf("\nThe string length is : %d",n);
	do
	{
		switch(j)
		{
			case 0: if(v[i]=='a')
					{
						j=1;
						printf("\nThe state is changed to state 1 - Final State.");
						i++;
					}
					else if(v[i]=='b')
					{
						j=2;
						printf("\nThe state is changed to state 2 - Dead State.");
						i++;
					}
					break;
					
			case 1: if(v[i]=='a')
					{
						j=1;
						printf("\nThe state is changed to state 1 - Final State.");
						i++;
					}
					else if(v[i]=='b')
					{
						j=3;
						printf("\nThe state is changed to state 3.");
						i++;
					}
					break;
					
		case 2: 	printf("\nIt is in state 2 - The Dead State.");
					i++;
					break;
		
		case 3: if(v[i]=='a')
					{
						j=1;
						printf("\nThe state is changed to state 1 - Final State.");
						i++;
					}
					else if(v[i]=='b')
					{
						j=3;
						printf("\nThe state is changed to state 3.");
						i++;
					}
					break;
		}
	}while(i<n);
	printf("\nIt is in the %d state in the end.",j);
	if(j==1)
	{
		printf("\nHence the string is selected.");
	}
	return 0;
}
