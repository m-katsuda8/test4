#include <stdio.h>
#include <math.h>

int main(void)
{
        printf("９９の９乗は    %fです。\n",pow(99.0, 9.0));
        printf("９の９９乗は    %fです。\n",pow(9.0, 99.0));
        printf("(９の９乗)の９乗は。%fです。\n",pow(pow(9.0, 9.0), 9.0));

        printf("log10(９９の９乗は)     %fです。\n", log10(pow(99.0, 9.0)));
        printf("log10(９の９９乗は)     %fです。\n", log10(pow(9.0, 99.0)));
        printf("log10((９の９乗)の９乗)は%fです。\n",
                        log10(pow(pow(9.0, 9.0), 9.0)));
        return 0;
}

