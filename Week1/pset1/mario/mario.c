//Libraries
#include <stdio.h>
#include <cs50.h>

//Main Function
int main(void)
{
    
    int h;
    do { h = get_int("enter height: "); 
    } while (h < 1 || h > 8);
 
 for (int i = 0; i < h; i++) {
     for (int k =0; k < h-i-1; k++){
         printf(" ");
     }
     for (int j = 0; j <= i; j++) {
         
        printf("#");
    }
        printf("\n");
    }
    
}