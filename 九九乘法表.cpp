#include<stdio.h>
int main()
{
   int i , j ;
   for ( i = 1 ; i <= 9 ; i ++ )
   {
      for ( j = 1 ; j <= 9 ; j ++ )
      {
      	if ( j <= i )
		{ 
        	printf( "%d*%d=%2d " , i , j , i * j );
        	if ( j == 9 )
        	{
        		printf( "\n" );        
        	}
		}
		else
		{
			printf ( " " ) ;
			if ( j == 9 )
        	{
        		printf( "\n" );        
        	}
		}
      }
   }
   return 0;
}



