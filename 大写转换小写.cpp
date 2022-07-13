//输入一个字符，判断它是否为大写字母，若是则将其转换成小写字母，若不是则不转换，然后输出最后得到的字符。
 
#include<stdio.h>
int main ()
{
	char ch;
	printf("请输入一个字母\n");
	scanf ("%c",&ch);
	if( ch >= 'A' && ch <= 'Z')
	{
		ch = ch + 32;
	}
	printf ("%c\n",ch);
	return 0;
 } 
