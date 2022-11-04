#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,ans1,ans2;
	printf("a : ");
	scanf("%f",&a);
	printf("b : ");
	scanf("%f",&b);
	printf("c :");
	scanf("%f",&c);
	ans1 =(-b+sqrt(b*b-4*a*c))/(2*a);
	ans2 =(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("answer1 =%f\n",ans1);
	printf("answer2 =%f",ans2);
	return 0;
}
