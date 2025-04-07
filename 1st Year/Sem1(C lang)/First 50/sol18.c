// Enter a character and display if it is a vowel or consonant
#include <stdio.h> 

int main () {

    char letter;
    printf ("Enter your letter: ");
    scanf ("%c", &letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'
        || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
        printf ("%c is a vowel", letter);
    }else if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter >= 'Z'))
    {
        printf ("%c is a consonant", letter);
    }else
        printf ("%c is not a alphabet", letter);
    
    return 0;
}