#include <stdio.h>

int main(void)
{
        int dividend;            /*割られる数*/
        int divisor;             /*割る数    */
        int quotient;            /*整数の商  */
        int residue;             /*割った余り*/
        double real_quotient;    /*実数の商  */

        printf("割り算をします。割られる数と割る数を入力してください:");
        scanf("%d%d", &dividend, &divisor);
        quotient = dividend / divisor;
        residue = dividend % divisor;
        real_quotient = (double) dividend / divisor;
        printf("整数計算: %d÷%d=%d ... %d\n", dividend, divisor, quotient,
        residue);
        printf("実数計算: %d÷%d=%.20lf\n", dividend, divisor, real_quotient);

        return 0;
}

