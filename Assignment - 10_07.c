/*Assignment - 10 C Language LIVE Community Classes MySirG*/
/*7. Write a program to print the squares of first N natural numbers*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int num, i=1;
	
	printf("Enter Value Of Num : ");
	scanf("%d",&num);
	
	for(int i = 1; i <= num; i++ )
	{
		int square = pow(i,2);
		
		printf("%d\n",square);	
	}
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/