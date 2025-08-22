#include <stdio.h>
#include <cs50.h>

int main(void)
// {
  //  char c1 = 'h';
  //  char c2 = 'i';
  //  char c3 = '!';

    // printf("%c %c %c\n", c1, c2, c3);
// }
{
    // string t = "Hi!";
    // string b = "BYE!";
    string words[2];
    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%s\n", words[0]);
    printf("%c%c\n", words[0] [0], words[0] [1]);
    printf("%c%c\n", words[0] [0], words[0] [0]);
    printf("%s\n", words[1]);
}
