#include <stdio.h>

// #define DEBUG

int main(void)
{
	int total_change; /*お釣りの金額*/
	int change;       /*お釣り計算のためのテンポラリ変数*/
        int change100;    /*１００円玉の枚数*/
 	int change50;     /*　５０円玉の枚数*/
 	int change10;     /*  １０円玉の枚数*/

	printf("金額を入力してください:");
	scanf("%d",&change);

	total_change = change;

	change100 = change / 100;
	change -= change100 * 100;
	
	change50 = change / 50;
	change -= change50 * 50;
	
	change10 = change / 10;
	change -= change10 * 10;

	printf("お釣り%d円を硬貨で支払います。\n", total_change);
	if (change100 >= 1)
	   printf("100円玉:%d枚\n", change100);
	if (change50 >= 1)
           printf("50円玉:%d枚\n", change50);
	if (change10 >= 1)
           printf("10円玉:%d枚\n", change10);
	if (change >= 1)
           printf("%d円はそのまま返ります。\n", change);

	#ifdef DEBUG
	printf("100円玉%d枚、50円玉%d枚、10円玉%d枚、そのまま%d円\n",
		change100, change50, change10, change);
	printf("検算:%d円\n",
		change500 * 500 + change100 * 100 + change50 * 50 + 
		change10 * 10 + change);
#endif

	return 0;
}
