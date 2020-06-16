//Libraries
#include <stdio.h>
#include <cs50.h>

//Main Function
int main(void)
{
    //sets varibles 
    int height, col, row, co2;
    //loops for user's input between 0-9
    do { height = get_int("enter height: ");
    } while (height < 1 || height > 8);

 for (row = 0; row < height; row++) {

    for (col = 0; col < height; col++) {
       if (col + row < height-1) 
            printf(" ");
        else 
            printf("#");
    }
        printf("  ");
    
    for (co2 = 0; co2 <= row ; co2++) {
            printf("#");
        } 
    printf("\n");

    }

}