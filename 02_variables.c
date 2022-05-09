#include <stdio.h>

int main()
{
    /* 
    DATA TYPES:
    int = integer or number;
    char = character or string;
    float = number with decimal point;
    */
   /*
   CONSTANT TYPES:
   integer constants = 1, 2, 3, 4, 5;
   real constants = 32.6, 65.0, 12.9, 16.4, 2.5;
   charecter constants = 'Code', 'Programming', 'Hi', 'Hello', 'Good'
   */
    int number01 = 32;
    char nameOfYoutuber = "Aadi";
    float number02 = 32.65f;
        // The printf() function is used to print any data type ⬆ or variable
    /*
    %d is used to print integers;
    %f is used to print real values;
    %c is used to print character;
    */
    // \n is used to print the next value on the next line;
    
    int number = 30;
    char letter = 'A';
    float temp = 0.6;

    printf("Hello world \n");  
    printf("The value of number is %d \n", number);
    printf("The value of letter is %c \n", letter);
    printf("The value of temp is %f \n", temp);
    return 0;
}