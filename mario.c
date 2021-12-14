#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    
    // ask user height of Pyromid
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // drow Pyromid
    for (int i = 0; i < height; i++)
    {
        
        // drow one string
        for (int dot = height - 1; dot > i; dot--)
        {
            printf(" ");
        }
        
        // drow hash
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}