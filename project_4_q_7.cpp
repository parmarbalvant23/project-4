#include <stdio.h>

int main() 
{
    int i, j;
    int pattern[] = {5, 2, 5, 1, 1}; 

    
    for(i = 0; i < sizeof(pattern) / sizeof(pattern[0]); i++) 
	{
        
        for(j = 0; j < pattern[i]; j++) 
		{
            printf("* ");
        }
       
        printf("\n");
    }

}
