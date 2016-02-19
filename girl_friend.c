#include <stdio.h> 
#include <string.h>
main ()
{
    char ans [200]; 
    char city;
    int hours; 
    int money;
    char love;
    char name [20]; 


    puts("\nLet's talk!\n");
    scanf(" %s", ans); 
    puts("\nI do not care, do you agree or not. I command here. Go!");
    puts("What's your name?\n");
    scanf(" %s", name); 
    
    do 
    {
        puts("\nYou live with her in the same city? (Y/N)\n"); 
        scanf(" %c", &city); 
        
        if (city == 'N')
        {
            puts("\nIf you live in different cities, what do you want, bitch?\n");
            break;
        }

    } while (city != 'Y');
    
    puts("\nOk, let's go then\n"); 
    
    do 
    {
        puts("How many hours a day do you spend talking with her?\n"); 
        scanf (" %d", &hours); 
        
    } while (hours <= 0); 
    
    puts("\nGo ahead.\n"); 
    
    do
    {
        puts("How many have you spent on her already?"); 
        scanf(" %d", &money); 
        
        if (money <= 20)
        {
            puts("\nDude, even the whores on Kamenka cheaper. Do not bullshit me, and bring an objective amount!!\n");
        }

    } while (money <= 20);

    puts ("\nAnd the last...\n");
    
    do 
    {
        puts("Are you sure she is - your destiny?(Y/N)\n");
        scanf(" %c", &love);
        
        if (love == 'N')
        {
            printf ("\nSo if you're not sure what you want from me, ueba?\n"); 
            break;
        }

    } while (love != 'Y');

    puts ("\nSo, let's sum up\n");

    if (city == 'Y' && hours < 2 && money < 100 && love == 'Y')
    
    {
        printf ("Ok, try\n\n");
    }
    else 
    {
        printf("\n%s, bro, and why do you need it?\n\n", name);
    }
    return 0;
}
