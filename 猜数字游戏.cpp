#include<stdio.h>
#include<stdlib.h> //随机数 
#include<time.h>   //时间戳 
void menu ()
{
	printf( "****************************\n" ) ;
	printf( "****************************\n" ) ;
	printf( "****1.开始********0.结束****\n" ) ;
	printf( "****************************\n" ) ;
	printf( "****************************\n" ) ;
}


void game ()
{
	int suijishu = 0 ; 
	int guess = 0 ;
	suijishu = rand () ; //生成一个随机数
	suijishu = suijishu % 100 + 1  ;
	while (1)
	{
		printf ( "请猜数字:>" ) ;
		scanf ( "%d" , &guess ) ;
		if ( guess > suijishu )
		{
			printf ( "猜大了\n" ) ;
		} 
		else
		{
			if ( guess < suijishu )
			{
				printf ( "猜小了\n" ) ;
			}
			else
			{
				printf ( "恭喜你猜对了\n" ) ;
				break; 
			} 
		} 
	}
}


int main ()
{
	int input = 0 ;
	srand ( ( unsigned int ) time ( NULL ) ) ; //拿时间戳来设置随机数的生产起点 
	do
	{
		menu () ;
		printf ( "请选择>:" ) ;
		scanf ( "%d" , & input ) ;
		switch ( input )
		{
			case 1 :
				game () ;
				break ;
			case 0 :
				printf ( "退出游戏\n" ) ; 
				break ;
			default :
				printf ( "输入错误\n" ) ;
				break ;
		}
	}
	while ( input != 0 ) ;
	return 0 ;
}
