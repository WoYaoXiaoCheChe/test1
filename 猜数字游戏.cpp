#include<stdio.h>
#include<stdlib.h> //����� 
#include<time.h>   //ʱ��� 
void menu ()
{
	printf( "****************************\n" ) ;
	printf( "****************************\n" ) ;
	printf( "****1.��ʼ********0.����****\n" ) ;
	printf( "****************************\n" ) ;
	printf( "****************************\n" ) ;
}


void game ()
{
	int suijishu = 0 ; 
	int guess = 0 ;
	suijishu = rand () ; //����һ�������
	suijishu = suijishu % 100 + 1  ;
	while (1)
	{
		printf ( "�������:>" ) ;
		scanf ( "%d" , &guess ) ;
		if ( guess > suijishu )
		{
			printf ( "�´���\n" ) ;
		} 
		else
		{
			if ( guess < suijishu )
			{
				printf ( "��С��\n" ) ;
			}
			else
			{
				printf ( "��ϲ��¶���\n" ) ;
				break; 
			} 
		} 
	}
}


int main ()
{
	int input = 0 ;
	srand ( ( unsigned int ) time ( NULL ) ) ; //��ʱ����������������������� 
	do
	{
		menu () ;
		printf ( "��ѡ��>:" ) ;
		scanf ( "%d" , & input ) ;
		switch ( input )
		{
			case 1 :
				game () ;
				break ;
			case 0 :
				printf ( "�˳���Ϸ\n" ) ; 
				break ;
			default :
				printf ( "�������\n" ) ;
				break ;
		}
	}
	while ( input != 0 ) ;
	return 0 ;
}
