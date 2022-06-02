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
/* Output
Enter any two numbers 5 10
sum is 15
sub is -5
mult is 50
div is 0.500000
mod is 5
  */
