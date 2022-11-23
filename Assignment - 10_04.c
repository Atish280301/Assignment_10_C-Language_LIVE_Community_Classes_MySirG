/*Assignment - 10 C Language LIVE Community Classes MySirG*/
/*4. Write a program to print the first N even natural numbers.*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int num ;
	
	printf("Enter Value Of Num : ");
	scanf("%d",&num);
	
	for(int i = 1; i <= num; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d\n",i);
		}
	}
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/