// 任之初今天纳妃，有一群美女排着队一个接一个地给他表演才艺以求被选上。任之初总共只肯看她们300分钟，并且最多乐意看100个美女。
// 请编程统计任之初看了多少个美女，总共看了几分钟。
#include<stdio.h>
int main () 
{
	double zongshijian = 0 , shijian ;
	int n = 0 ;
	while ( zongshijian < 300 ) 
	{
     	printf ( " 请输入第%d个美女表演的时间 " , n + 1 );
		scanf ( "%lf" , &shijian );
		zongshijian = zongshijian + shijian ;
		n = n + 1 ;
		if ( n >= 100 )
		{
			break ;
		}
	}
		if ( zongshijian > 300 )
		{
			zongshijian = 300 ;
		}
	printf ( " 任之初看了%d个美女,一共看了%f分钟\n " ,  n  , zongshijian );
	return 0;
}
