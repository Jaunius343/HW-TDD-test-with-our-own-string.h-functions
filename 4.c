#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *find_char_in_string(char *string, char c);

int string_length(char *string)
{
    int len = 0;
    char sym;
    int i = 0;
    sym = string[i];
    while (sym != '\0'){
        ++len;
        sym = string[++i];
    }
    return len;
}

int main()
{
    char *string = "labas";

    char *char_place;
    char_place = find_char_in_string(string, 'a');
    assert(char_place == (string + 1));

    char_place = find_char_in_string(string, 'l');
    assert(char_place == (string));

    char_place = find_char_in_string(string, 'k');
    assert(char_place == NULL);

    printf("\nfinished\n");
    return 0;
}


char *find_char_in_string(char *string, char c)
{
    for(int i = 0; i < string_length(string); ++i){
        if (string[i] == c){
            return &string[i];
        }
    }
    return NULL;
}
