#include<stdio.h>
int main ()
{
	int n , i = 0 ;
	scanf ( "%d" , &n ) ;
	int a [n] ;
	for ( i = 0 ; i <= n - 3 ; i ++ )
	{
		a [i] = i + 2 ;
	}
	for ( i = 0 ; i <= n - 3 && n % a [i] != 0 ; i ++ )
	{
	}
	i = i - 1 ;	
	if ( n == 2 ) 
	{
		printf ( "yes" ) ;
	}
	else 
	{	
		if ( i == n - 3 )
		{
			printf ( "yes" ) ;
		}
		else
		{
			printf ( "no" ) ;
		}
	}  
	return 0 ;
} 
