#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() 
{
    int randomNum = rand() % 25;

    char character = 'a' + randomNum;

    return character;
}