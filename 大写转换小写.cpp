//����һ���ַ����ж����Ƿ�Ϊ��д��ĸ����������ת����Сд��ĸ����������ת����Ȼ��������õ����ַ���
 
#include<stdio.h>
int main ()
{
	char ch;
	printf("������һ����ĸ\n");
	scanf ("%c",&ch);
	if( ch >= 'A' && ch <= 'Z')
	{
		ch = ch + 32;
	}
	printf ("%c\n",ch);
	return 0;
 } 
