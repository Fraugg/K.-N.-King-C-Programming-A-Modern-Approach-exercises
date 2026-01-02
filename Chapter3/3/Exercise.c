#include <stdio.h>

int main(void)
{
    int GS1_Prefix, Group_Identifier, Publisher_Code, Item_Number, Check_Digit;
    
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GS1_Prefix, &Group_Identifier, &Publisher_Code, &Item_Number, &Check_Digit);

    printf("GS1 prefix: %d\n", GS1_Prefix);
    printf("Group identifier: %d\n", Group_Identifier);
    printf("Publisher code: %d\n", Publisher_Code);
    printf("Item number: %d\n", Item_Number);
    printf("Check digit: %d\n", Check_Digit);

    return 0;
}