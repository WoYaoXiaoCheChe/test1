//输入十个地区的面积,对它们由小到大进行排序并输出结果 
#include<stdio.h>
int main()
{
	int j,i,t;
	int a[10];
	printf("请输入10个地区的面积：\n");
	for(i = 0 ; i <= 9 ; i ++)
	{
	scanf("%d",&a[i]);
	}
	for(i = 0 ; i <= 8 ; i ++)
	{
		for (j = i + 1 ;j <= 9;j ++)
		{
			if(a[i] >= a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("排列后的顺序为\n");
	for(i = 0 ; i <= 9; i ++)
	{printf("%d\t",a[i]);
	}
	return 0;
}
