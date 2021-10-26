/*
    Project : Grading system
    Author  : O. Butuba
    Date    : Oct 26, 2021
    Compiler : GCC
    Language : C99
    License  : MIT
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaration
    int grade;

    printf("Enter grade:");
    scanf("%d", &grade);

    if(grade >= 70)
    {
        puts("Grade: A");
    }
    else
        if(grade >= 60)
        {
            puts("Grade: B");
        }
        else
            if(grade >=50)
            {
                puts("Grade: C");
            }
            else
                if(grade >= 40)
                {
                    puts("Grade: D");
                }
                else
                    {
                    puts("Grade: E");
                    }
    return 0;
}
