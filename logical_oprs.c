#include<stdio.h>
int main()
{
	int a=2, b=3, c=4;
	printf("\n(a<b && a<c) = %d", (a<b && a<c));
	printf("\n(c>a && c>b) = %d", (c>a && c>b));
	return 0;
}
/* Output
(a<b && a<c) = 1
(c>a && c>b) = 1
*/
