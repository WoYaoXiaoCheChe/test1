//����ʮ�����������,��������С����������������� (ð�ݷ�)
#include<stdio.h>
int main()
{
	int a[10];
	int i,j,t;
	printf ("����ʮ�����������:\n");
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
	printf("�к��˳��Ϊ:\n"); 
	for (i = 0 ; i <= 9 ; i ++)
	{
		printf ("%d\t",a[i]);
	}
	return 0;
 } 
