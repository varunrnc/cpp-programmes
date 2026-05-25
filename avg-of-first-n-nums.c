#include <stdio.h>

int main(void)
{
    int n;
    puts("Enter n:");
    if (scanf("%d", &n) != 1 || n < 0) {
        puts("Invalid input");
        return 1;
    }
    long sum = (long)n * (n + 1) / 2; /* formula for 1..n */
    printf("Sum = %ld\nAverage = %.2f\n", sum, n ? (double)sum / n : 0.0);
    return 0;
}