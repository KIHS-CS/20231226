#include <stdio.h>

int main()
{
    int times, score, i, sum=0;
    double average;
    scanf("%d", &times);
    for (i = 1 ; i <= times ; i++)
    {
        scanf("%d", &score);
        sum += score;
    }
    average = sum / times;
    if (average < 60.0)
        printf("yes");
    else
        printf("no");
    return 0;
}
