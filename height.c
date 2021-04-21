#include <stdio.h>
#include <math.h>

#define HEIGHT 495.0
#define PI 3.1415926535897932 

int main(void)
{
	double angle;
	double distance;
	double horizon;	
	double height;

	distance = 10000.0;
	angle = 22.5 * PI / 180.0;
	horizon = distance * cos(angle);
	height = distance * sin(angle) + HEIGHT;
	printf("飛行物体１の水平距離は%.0fm,高度は%.0fmです。\n", horizon, height);

        distance = 10000.0;
        angle = 72.2 * PI / 180.0;
        horizon = distance * cos(angle);
	height = distance * sin(angle) + HEIGHT;
	printf("飛行物体２の水平距離は%.0fm,高度は%.0fmです。\n", horizon, height);

	distance = 150000.0;
	angle =1.2 * PI / 180.0;
	horizon = distance * cos(angle);
	height = distance * sin(angle) + HEIGHT;
        printf("飛行物体３の水平距離は%.0fm,高度は%.0fmです。\n", horizon, height);

	return 0;
}	
