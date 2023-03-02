#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int tadd_ok(int x, int y)
{
    int sum = x + y;
    int neg_over = x < 0 && y < 0 && sum>0;
    int ops_over = x > 0 && y > 0 && sum < 0;
    return !neg_over && !ops_over;
}