//�������100-300֮�䲻�ܱ�4��������
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
