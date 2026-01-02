#include <stdio.h> 

int main(void)
{
    int r = 10;
    float p = 3.14159f, v;

    v = (4.0f / 3.0f) * p * (r * r * r); // 4/3 give us result 1, not 1,333
    
    printf("Volume of the sphere is: %.3fm^3\n", v);

    return 0;
}


