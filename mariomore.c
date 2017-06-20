#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int spaces;
    int hashes; 
    int rows;
    
    do
    {
        printf("Please enter a number between 1 and 6\n");
        height = get_int();
    }
    
    while (height >= 6 && height <= 0);
    
    for (rows = 0; rows <= height; rows++)
    
    {
        for (spaces = (height - rows); spaces > 0; spaces--)
        {
            printf(" ");
        }
        for (hashes = 1; hashes <= (rows + 1); hashes++)
        {
            printf("#");
            
        }
        
        {
        printf("  ");
        }
        
        for (hashes = 1; hashes <= (rows + 1); hashes++)
        {
            printf("#");
        }
        printf("\n");
        }
}