#include<stdio.h>
void main()
{
	float temprature;
	printf("enter the temperature in fahrenheit");
	scanf("%f,&temprature");
	printf("%f celcius is converted into %f celcius",temprature,((temprature-32)*5/9));
getch();
}
