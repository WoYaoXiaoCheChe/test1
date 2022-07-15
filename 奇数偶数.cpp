#include<stdio.h>
int main()
{
	int i , t , m;
	int a [30];
	scanf ( "%d" , &t );
	for(i = 0 ; i <= t-1 ; i ++)
	{
	scanf( "%d" , & a[i] );
	}
	for( m = 0 ; m <= t - 1 ; m ++ )
	 {
    	for ( i = 0 ; i <= a[m] ; i ++ )
    	{
    		if( i % 2 != 0 )
    		{
    			printf ( "%d", i ) ;
    			printf ( " " ) ;
			}
		}                                                         
		printf ( "\n" ) ;
		for ( i = 2 ; i <= a[m] ; i ++ )
    	{
    	if( i % 2 == 0 )
    		{
    			printf ( "%d" , i ) ;
    			printf ( " " ) ;
			}
		}
		printf ( "\n" ) ;
	}
	
	return 0;
}






























