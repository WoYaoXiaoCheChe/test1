// ĳ�n�ɿ�ԭΪ�ٷ��ƣ��FҪ����װ�ɵȼ���Ҏ�t��: 90���� ��ΪA��80~89��Ϊ B�� 70~79��ΪC��60~69��ΪD��60������ΪE������- -����,�������I��ݔ�ˣ�ݔ���ȼ���
#include<stdio.h>
int main ()
{
	double fenshu ;
	printf ( " ����������� " ) ; 
	scanf ( "%lf" , &fenshu ) ; 
	switch(  ( int )( fenshu/10 ) )
	{
		case 10 : printf(" �����ĵȼ�ΪA ") ; break; 
		case  9 : printf(" �����ĵȼ�ΪA ") ; break; 
		case  8 : printf(" �����ĵȼ�ΪB ") ; break; 
		case  7 : printf(" �����ĵȼ�ΪC ") ; break; 
		case  6 : printf(" �����ĵȼ�ΪD ") ; break; 
		case  5 : printf(" �����ĵȼ�ΪD ") ; break; 
		case  4 : printf(" �����ĵȼ�ΪD ") ; break; 
		case  3 : printf(" �����ĵȼ�ΪD ") ; break; 
		case  2 : printf(" �����ĵȼ�ΪD ") ; break; 
		case  1 : printf(" �����ĵȼ�ΪD ") ; break; 
		case  0 : printf(" �����ĵȼ�ΪE ") ; break; 
		default : printf(" �������ǳɼ�? ") ; break; 
	}
	return 0;
 } 
