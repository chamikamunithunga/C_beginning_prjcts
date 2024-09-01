#include<stdio.h>
int main()
{
	int A,M,H;
	
	
	
	printf("Enter the   minutes :");
	scanf("%d",&A);
	
	
	H = A/60;
	M = A%60;
	

	printf(" hours   : %d" ,H);
	printf(" ");
	printf(" hours and minutes  : %d" ,M);
	
	
	
	
	
	return 0;
	
}
