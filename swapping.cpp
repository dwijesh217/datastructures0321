#include<stdio.h>
int main()
{
	double first,second,temp;
	printf("enter the first : ");
	scanf("%1f",&first);
	printf("enter the second:");
	scanf("%1f",&second);
	
	temp=first;
	first=second;
	second=temp;
	printf("\nAfter swapping, first number = %.2lf\n", first);
  printf("After swapping, second number = %.2lf", second);
  return 0;
}
	

