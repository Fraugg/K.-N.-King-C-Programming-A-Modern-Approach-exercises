#include <stdio.h>

int main(void)
{
    float dollars, with_taxes, procents;

    printf("Enter an amount: ");
    scanf("%f", &dollars);

    procents = (dollars / 100) * 5;
    with_taxes = dollars + procents;

    printf("With tax added: $%.2f\n", with_taxes);

    return 0;
}

