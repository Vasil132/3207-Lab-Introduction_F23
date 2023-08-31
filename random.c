#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// int main()
// {
// for (int i=0;i<3;i++) {

//     char letter = randChar(); //call to functions
//     printf("%c",letter);
// }
//     return 0;
// }

char randchar() {

int randomValue = rand() % 26;
char randomLetter = 'a' + randomValue;  //creates random letter

    return randomLetter;
}
