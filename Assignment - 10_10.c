/*Assignment - 10 C Language LIVE Community Classes MySirG*/
/*10. Write a program to print the cubes of the first N natural numbers in reverse order.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int num, i= 1;
	
	printf("Enter Value Of Num : ");
	scanf("%d",&num);
	
	while(i <= num)
	{
		int cube = pow(num,3);
		
		printf("%d\n",cube);
		
		num--;
	}
	
	getch();
}
/*
Atish Kumar Sahu
9937401932
kumarsahuatish280301@gmail.com
*/