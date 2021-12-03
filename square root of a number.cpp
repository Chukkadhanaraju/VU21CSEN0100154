#include<stdio.h>
#include<math.h>
int main()
{
	float a,b;
	printf("enter the number whose square you want to find: ");
	scanf("%f",&a);
	b=pow(a,0.5);
	printf("square root of %.0f=%.1f",a,b);
	return 0;
}
