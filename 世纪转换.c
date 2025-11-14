#include <stdio.h>
int main()
{
    int YEAR;
    int CENTURY;

    printf("please enter the YEAR: \n");
    scanf("%d", &YEAR);
    if(YEAR <= 0)
    {
        printf("The year cannot be 0 or negative.");
    }
    else if(YEAR > 0)
    {
        CENTURY = (YEAR + 99) / 100;
        printf("It is the %d century\n", CENTURY);
    }
    
    return 0;
    
}

