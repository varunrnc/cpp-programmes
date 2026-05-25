#include <stdio.h>

int main()
{
    int n, i = 0, sum = 0;
    float avg = 0.0;
    printf("\nEnter the value of n : ");
    scanf("%d", &n);

    if(n < 0){
        printf("\nPlease enter a positive number.");
        return 0;
    }

    do {
        sum = sum + i;
        i = i + 1;
    }while(i<=n);
    avg = (float)sum/n;
    printf("\nThe sum of first %d numbers: %d", n, sum);
    printf("\nThe average of first %d numbers: %.2f", n, avg);
    return 0;
}