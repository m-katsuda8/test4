#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897932  /* 円周率 */
#define HEIGHT 495.0           /* レーダー基地 */

int main(void)
{
	double angle;       /* 角度 */
	double distance;    /* 直線距離 */
	double horizon;     /* 水平距離 */
	double height;      /* 高さ */

	distance = 10000.0;
	angle = 22.5 * PI / 180.0;

        horizon = distance * cos(angle);
        height = distance * sin(angle) + HEIGHT;
        printf("飛行物体１の水平距離は%.0fm,高度は%.0Fmです。\n", horizon, height);

        return 0;
}

