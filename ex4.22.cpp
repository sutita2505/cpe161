#include<stdio.h>
#include<math.h>
main() /* display a floating.point number with several different precisions */
{
	float x=123.456;
	printf("%7f %7.3f %7.1f \n\n",x ,x ,x );
	printf("%12e %12.5e %12.3e",x,x,x);
	return 0 ;
}
