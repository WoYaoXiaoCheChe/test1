//������С��,�ֱ���5��ѧ����10��ѧ��,��������ǵĳɼ�,����aver����������С���ƽ����
#include<stdio.h> 
int main ()
{
	float aver( float a [] , int n ) ;
	float team1 [5] , team2 [10] ;
	int i ;
	printf ( " �������һ��ѧ���ĳɼ�:\n" ) ;
	for ( i = 0 ; i <= 4 ; i ++ )
	{
		scanf ( "%f" , & team1 [i]  ) ; 
	}
	printf ( " ������ڶ���ѧ���ĳɼ�:\n" ) ;
	for ( i = 0 ; i <= 9 ; i ++ ) 
	{
		scanf ( "%f" , & team2 [i] ) ;
	}
	printf ( "��һ���ƽ������%f \n " , aver ( team1 , 5  ) ) ;
	printf ( "�ڶ����ƽ������%f \n " , aver ( team2 , 10 ) ) ;
	return 0 ; 
}

float aver ( float a [] , int n ) 
{
	int i ;
	float pingjunshu , sum = a [0] ; 
    for ( i = 1 ; i <= n ; i ++ ) 
	{
		sum = sum + a [i] ;
		pingjunshu = sum/n ;
    }  	
	return ( pingjunshu ) ;
} 
