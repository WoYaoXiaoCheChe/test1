// ��֮��������������һȺ��Ů���Ŷ�һ����һ���ظ������ݲ�������ѡ�ϡ���֮���ܹ�ֻ�Ͽ�����300���ӣ�����������⿴100����Ů��
// ����ͳ����֮�����˶��ٸ���Ů���ܹ����˼����ӡ�
#include<stdio.h>
int main () 
{
	double zongshijian = 0 , shijian ;
	int n = 0 ;
	while ( zongshijian < 300 ) 
	{
     	printf ( " �������%d����Ů���ݵ�ʱ�� " , n + 1 );
		scanf ( "%lf" , &shijian );
		zongshijian = zongshijian + shijian ;
		n = n + 1 ;
		if ( n >= 100 )
		{
			break ;
		}
	}
		if ( zongshijian > 300 )
		{
			zongshijian = 300 ;
		}
	printf ( " ��֮������%d����Ů,һ������%f����\n " ,  n  , zongshijian );
	return 0;
}
