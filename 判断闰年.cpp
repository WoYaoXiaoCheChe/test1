//请编一程序，判断某年是否是闰年。(注:当年份不是100的倍数且是4的倍数时，该年是闰年;当年份是100的倍数且是400的倍数时，该年也是闰年)
#include<stdio.h>
int main()
{
	int a;
	printf ("请输入年份:\n");
	scanf("%d",&a);
	if( ( a % 100 != 0 && a % 4 == 0) || a % 400 == 0 )
	{
		printf ("%d年是闰年\n",a); 
	}
	else
	{
		printf("%d年不是闰年\n",a); 
	}
	return 0;
 } 
