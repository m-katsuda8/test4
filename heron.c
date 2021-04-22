#include <stdio.h>
#include <math.h>

int main(void)
{
	double S, a, b, c, s;

	a = 5;
	b = 5;
	c = 6;

	s = (a + b + c) / 2.0;
	S = sqrt(s * (s - a) * (s - b) * (s - c));
	printf("３辺の長さが(%f, %f, %f)の三角形の面積は%fです。\n",a,b,c,S);

	return 0;
}	
		 
