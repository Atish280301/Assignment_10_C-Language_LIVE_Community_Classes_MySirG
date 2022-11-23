/*Assignment - 10 C Language LIVE Community Classes MySirG*/
/*9. Write a program to print the squares of first N natural numbers in reverse order*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int num, i=1;
	
	printf("Enter Value Of Num : ");
	scanf("%d",&num);
	
	while(i <= num)
	{
		int square = pow(num,2);
		
		printf("%d\n",square);
		
		num--;
	}
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/