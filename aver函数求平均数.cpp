//有两个小组,分别有5名学生和10名学生,请输出他们的成绩,并用aver函数求两个小组的平均分
#include<stdio.h> 
int main ()
{
	float aver( float a [] , int n ) ;
	float team1 [5] , team2 [10] ;
	int i ;
	printf ( " 请输入第一组学生的成绩:\n" ) ;
	for ( i = 0 ; i <= 4 ; i ++ )
	{
		scanf ( "%f" , & team1 [i]  ) ; 
	}
	printf ( " 请输入第二组学生的成绩:\n" ) ;
	for ( i = 0 ; i <= 9 ; i ++ ) 
	{
		scanf ( "%f" , & team2 [i] ) ;
	}
	printf ( "第一组的平均数是%f \n " , aver ( team1 , 5  ) ) ;
	printf ( "第二组的平均数是%f \n " , aver ( team2 , 10 ) ) ;
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
