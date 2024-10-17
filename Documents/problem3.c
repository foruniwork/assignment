#include<stdio.h>
int main()
{
	float celsius, fahrenheit;
	printf("enter temperature in celsius:");
	scanf("%d",&celsius);
	fahrenheit=(celsius*9/5)+32;
	printf("%.2f degrees celsius isequal to%.2f degree fahrenheit\n",celsius,fahrenheit);
	getch();
}
