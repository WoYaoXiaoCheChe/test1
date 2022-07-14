//         * 
//输出一个* *的图案 
//         * 
#include <stdio.h>
int main ()
{
	int i , j ;
	char a [3][3] = { {' ' , '*' , ' '} , { '*' , ' ' , '*' } , {' ' , '*' , ' '} } ;
	for ( i = 0 ; i <= 2 ; i ++ )
	{
		for ( j = 0 ; j <=2 ; j ++ )
		{
			printf ( "%c" , a [i][j]  ) ;
		}
		printf ( "\n" ) ;
	}
	return 0 ;
}
