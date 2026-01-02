#include <stdio.h>

int main(void)
{
    int item, month, day, year;
    float price;

    /*
    Entering data
    */
    
    printf("Enter item number: ");
    scanf("%d", &item);

    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    /*
    Output data
    */

    printf("\n");
    printf("Item\tUnit\t\tPurchase\n");
    printf("\tPrice\t\tDate\n");
    printf("%d\t$%7.2f\t%.2d/%.2d/%.4d\n", item, price, month, day, year);

    return 0;
}