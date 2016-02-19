#include <stdio.h> 
#include <stdlib.h> 
FILE *file; 
main ()
{
    char letter; 
    int alphabetSize; 
    file = fopen("/home/sanka/Desktop/letters.txt", "w+"); 
    if (file == 0)
    {
        printf ("An error occurred while opening the file!\n"); 
            exit(1); 
    }
    for (letter = 'A'; letter = 'Z'; letter++)
    {
        fputc (letter, file); 
    }
    puts("Writing completed"); 
    fseek (file, -1, SEEK_END); 
    printf ("The file data in the reverse order: \n"); 
    for (alphabetSize = 26; alphabetSize > 0; alphabetSize--)
    {
        letter = fgetc(file); 
        fseek (file, -2, SEEK_CUR); 
        printf ("The next letter is %c.\n", letter); 
    }
    fclose (file); 
    return 0; 
}
