//����һ���ɿո�͵�����ɵ��ַ�(�ַ�����80������),ͳ���ж��ٵ�����
#include <stdio.h>
int main ()
{
	int dancishu = 1 , i ;
	char c [81] ;
	printf ( " ����Ӣ������һ�仰:\n " ) ; 
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
	printf ( "��%d��������",dancishu ) ; 
	return 0 ;
}
 
