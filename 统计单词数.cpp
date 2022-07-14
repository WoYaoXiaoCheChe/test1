//输入一行由空格和单词组成的字符(字符数在80字以内),统计有多少单词数
#include <stdio.h>
int main ()
{
	int dancishu = 1 , i ;
	char c [81] ;
	printf ( " 请用英文输入一句话:\n " ) ; 
	gets ( c );
	if ( c[0] ==  ' ' )
	{
		dancishu = 0 ;
	}
	for ( i = 0 ; c [i] != '\0' ; i ++ )
	{
		if ( c [i] == ' ' && c [i + 1] != ' ' && c [i + 1] != '\0' )
		{
			dancishu = dancishu + 1 ;
		}
	}
	printf ( "有%d个单词数",dancishu ) ; 
	return 0 ;
}
 
