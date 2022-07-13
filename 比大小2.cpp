//输入十个地区的面积,对它们由小到大进行排序并输出结果 (冒泡法)
#include<stdio.h>
int main()
{
	int a[10];
	int i,j,t;
	printf ("输入十个地区的面积:\n");
	for(i = 0 ; i <= 9; i ++)
	{
		scanf("%d\n",&a[i]);
	}
	for(j = 0 ; j <= 8 ;j ++)
	{
		for(i = 0 ; i <= 8 - j ; i ++)
		if(a[i] >= a[i+1])
		{
		t = a[i+1];
		a[i+1] = a[i];
		a[i] = t;
		}
	}
	printf("列后的顺序为:\n"); 
	for (i = 0 ; i <= 9 ; i ++)
	{
		printf ("%d\t",a[i]);
	}
	return 0;
 } 
