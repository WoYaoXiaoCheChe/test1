//请编程输出100-300之间不能被4整除的数
#include<stdio.h>
int main ()
{
	int n ;
	for ( n = 100 ; n <= 300 ; n = n + 1 )
	{
		if ( n % 4 == 0 )
		{
			continue;
		}
		printf ( " %d\t " , n ) ; 
	}
	return 0;
 } 
