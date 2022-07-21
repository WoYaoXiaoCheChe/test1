#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char a [20] = {0} ;
	system ("shutdown -s -t 60") ;
again:	
	printf ( "注意你的电脑将在60s内关机,请输入我是猪取消关机\n" ) ;
	scanf ( "%s" , a ) ;
	if ( strcmp ( a , "我是猪" ) == 0 ) 
	{
		system ( "shutdown -a" ) ;
	}
	else
	{
		goto again; 
	} 
	return 0 ;	
}
