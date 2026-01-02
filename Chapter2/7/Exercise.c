#include <stdio.h>

int main(void)
{
    int amount, bills;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    
    bills = amount / 20;
    amount = amount - (bills * 20);
    printf("$20 bills: %d\n", bills);

    bills = amount / 10;
    amount = amount - (bills * 10);
    printf("$10 bills: %d\n", bills);
    
    bills = amount / 5;
    amount = amount - (bills * 5);
    printf(" $5 bills: %d\n", bills);

    printf(" $1 bills: %d\n", amount); //rest of dollars

    return 0;
}