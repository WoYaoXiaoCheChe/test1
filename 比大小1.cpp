//����ʮ�����������,��������С����������������� 
#include<stdio.h>
int main()
{
	int j,i,t;
	int a[10];
	printf("������10�������������\n");
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
	printf("���к��˳��Ϊ\n");
	for(i = 0 ; i <= 9; i ++)
	{printf("%d\t",a[i]);
	}
	return 0;
}
