#include<stdio.h>
int main()
{
	int a,b;
	int sum,sub,mult,mod;
	float div;
	printf("Enter any two numbers");
	scanf("%d%d",&a,&b);
	sum=a+b;
	sub=a-b;
	mult=a*b;
	div=(float)a/b;
	mod=a%b;
	printf("sum is %d\n",sum);
	printf("sub is %d\n",sub);
	printf("mult is %d\n",mult);
	printf("div is %f\n",div);
	printf("mod is %d\n",mod);
	return 0;
}
