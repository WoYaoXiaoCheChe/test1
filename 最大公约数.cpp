#include <stdio.h>
int main ()
{
	int i , j , k , s , a , b , u ;
	scanf ( "%d %d" , &a , &b ) ;
	int m [a] , n [b] , q [1000] , p [1000] , o [1000] ;
	for  ( i = 0 , j = 0 ; i <= a - 1; i ++ )
	{
		m [i] = i + 1 ;
		if ( a % m [i] == 0 )
		{
			q [j] = i + 1 ;
			j ++ ;
		}
	}
	for  ( i = 0 , k = 0 ; i <= b - 1; i ++ )
	{
		n [i] = i + 1 ;
		if ( b % n [i] == 0 )
		{
			p [k] = i + 1 ;
			k ++ ;
		}
	}
	for ( i = 0 , u = 0 ; i <= j - 1 ; i ++ )
	{
		for ( s = 0 ; s <= k - 1 ; s ++ )
		{
			if ( q [i] == p [s] )
			{
				o [u] = q [i] ;
				u ++ ; 
			}
		}
	}
	printf ( "%d" , o [ u - 1 ]  ) ;
	return 0 ;
}
