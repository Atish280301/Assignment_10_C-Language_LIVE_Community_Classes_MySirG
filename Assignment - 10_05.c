/*Assignment - 10 C Language LIVE Community Classes MySirG*/
/*5. Write a program to print the first N even natural numbers in reverse order.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int num, i= 1;
	
	printf("Enter Value Of Value : ");
	scanf("%d",&num);
	
	while(i <= num)
	{
		if(num % 2 == 0)
		{
			printf("%d\n",num);
		}
		num--;
	}
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/