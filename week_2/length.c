#include <cs50.h>
#include <stdio.h>
#include <string.h>

int final_count();
int space_count();
int main(void)
{
    string name = get_string("Name: ");
    int length = strlen(name);

    int space_count = 0;
    for (int i = 0; i < length; i++)
    {
        if (name[i] == ' ')
        {
            space_count++;
        }
    }

    int final_count = length - space_count;

    printf("%i\n", final_count);
}
