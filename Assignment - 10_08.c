/*Assignment - 10 C Language LIVE Community Classes MySirG*/
/*8. Write a program to print the cubes of first N natural numbers*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int num, i = 1;
	
	printf("Enter Value Of Num : ");
	scanf("%d",&num);
	
	while(i <= num)
	{
		int cube = pow(i,3);
		
		printf("%d\n",cube);
		
		i++;		
	}
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/