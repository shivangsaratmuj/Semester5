#include<stdio.h>
#include<string.h>

int main()
{
	int i=0,j=0,n;
	char v[100];
	printf("Enter the string over the alphabet {1,0} : ");
	gets(v);
	n=strlen(v);
	printf("\nThe string length is : %d",n);
	do
	{
		switch(j)
		{
			case 0: if(v[i]=='1')
					{
						j=1;
						printf("\nThe state is changed to state 1.");
						i++;
					}
					else if(v[i]=='0')
					{
						j=3;
						printf("\nThe state is changed to state 3 - Dead State.");
						i++;
					}
					break;
					
			case 1: if(v[i]=='1')
					{
						j=3;
						printf("\nThe state is changed to state 3 - Dead State.");
						i++;
					}
					else if(v[i]=='0')
					{
						j=2;
						printf("\nThe state is changed to state 2 - Final State.");
						i++;
					}
					break;
					
			case 3: printf("\nIt is in state 3 - The Dead State.");
					i++;
					break;
		
			case 2: if(v[i]=='1')
					{
						j=3;
						printf("\nThe state is changed to state 3 - Dead State.");
						i++;
					}
					else if(v[i]=='0')
					{
						j=3;
						printf("\nThe state is changed to state 3 - Dead State.");
						i++;
					}
					break;
		}
	}while(i<n);
	printf("\nIt is in the %d state in the end.",j);
	if(j==2)
	{
		printf("\nHence the string is selected.");
	}
	return 0;
}
