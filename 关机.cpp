#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a [20] = {0} ;
	system ("shutdown -s -t 60") ;
again:	
	printf ( "ע����ĵ��Խ���60s�ڹػ�,������������ȡ���ػ�\n" ) ;
	scanf ( "%s" , a ) ;
	if ( strcmp ( a , "������" ) == 0 ) 
	{
		system ( "shutdown -a" ) ;
	}
	else
	{
		goto again; 
	} 
	return 0 ;	
}
