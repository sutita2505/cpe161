#include<stdio.h>
#include<conio.h>
int year;
float salary;
main()
{
	printf("Insert your experience and salary : \n");
	scanf("%d %f",&year,&salary);
	printf("You worked for %d years.\n",year);
	printf("You salary is %.2f now.\n",salary);
	return 0;
}
