//��֪����a={{1,2,3},{9,8,7},{-10,10,-5}},������ֵ���Ǹ�Ԫ�� 
#include <stdio.h>
int main ()
{
	int a [3][3] = { {1,2,3} , {9,8,7} , {-10,10,-5} } ; 
	int max = 0 , i , j ;
	for ( i = 0 ; i <= 2 ; i ++ )
	{
		for ( j = 0 ; j <= 2 ; j ++ )
		{ 
	  		if ( a [i][j] > max )
	  		{ 
	  			max = a [i][j] ;
	  		}	
	  	} 
	}  
	printf ( " �����Ǹ�Ԫ��Ϊ:%d ", max ); 
	return 0 ; 
} 


