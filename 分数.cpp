// 某課成績原为百分制，現要将其装成等級，規則是: 90分以 上为A、80~89分为 B、 70~79分为C、60~69分为D、60分以下为E。靖編- -程序,分数由鍵盍輸人，輸出等級。
#include<stdio.h>
int main ()
{
	double fenshu ;
	printf ( " 请输入分数： " ) ; 
	scanf ( "%lf" , &fenshu ) ; 
	switch(  ( int )( fenshu/10 ) )
	{
		case 10 : printf(" 该生的等级为A ") ; break; 
		case  9 : printf(" 该生的等级为A ") ; break; 
		case  8 : printf(" 该生的等级为B ") ; break; 
		case  7 : printf(" 该生的等级为C ") ; break; 
		case  6 : printf(" 该生的等级为D ") ; break; 
		case  5 : printf(" 该生的等级为D ") ; break; 
		case  4 : printf(" 该生的等级为D ") ; break; 
		case  3 : printf(" 该生的等级为D ") ; break; 
		case  2 : printf(" 该生的等级为D ") ; break; 
		case  1 : printf(" 该生的等级为D ") ; break; 
		case  0 : printf(" 该生的等级为E ") ; break; 
		default : printf(" 这他妈是成绩? ") ; break; 
	}
	return 0;
 } 
