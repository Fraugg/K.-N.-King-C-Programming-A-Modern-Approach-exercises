#include <stdio.h>

int main(void)
{
    int num1, num2;
    int denom1, denom2;
    int sum_num, sum_denom;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

    sum_denom = denom1 * denom2;

    sum_num = ((sum_denom / denom1) * num1) + ((sum_denom / denom2) * num2); // I use school formula to sum fractions

    printf("The sum is %d/%d\n", sum_num, sum_denom);

    return 0;
}