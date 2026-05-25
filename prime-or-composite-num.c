// Write a program to determine whether a given number is a prime or a composite number.
#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) return 1;
    if (n < 2) return printf("%d is not prime\n", n), 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return printf("%d is composite\n", n), 0;
    return printf("%d is prime\n", n), 0;
}