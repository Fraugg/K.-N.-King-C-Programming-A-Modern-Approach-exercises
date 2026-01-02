#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_rate, monthly_payment;

    /*
    Entering data
    */
    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &monthly_payment);

    /*
    Calculation 
    */
    monthly_rate = interest_rate / 12 / 100; // by division of 12 we calculate month rate, by division of 100 we converted it in percent

    loan = ((monthly_rate * loan) + loan) - monthly_payment;
    printf("Balance remaining after first payment: $%.2f\n", loan);

    loan = ((monthly_rate * loan) + loan) - monthly_payment;
    printf("Balance remaining after second payment: $%.2f\n", loan);
    
    loan = ((monthly_rate * loan) + loan) - monthly_payment;
    printf("Balance remaining after third payment: $%.2f\n", loan);

    return 0;
}