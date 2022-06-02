#include <stdio.h>
#include <ctype.h> /* toupper, isalpha */
#include <stdbool.h>


int main(void) {
    
    int i,
        same = 1,
        letters[26] = {0};
    char c;
    int *point_i = &i;
    char *point_c = &c;
    
    bool is_anagram(int occurrences1[26], int occurrences2[26]);

    void scan_word(int occurrences[26]);
    int occurences1[26] = {0};
    printf("Enter first word: ");
    while ((*point_c = getchar()) != '\n') {
        if (isalpha(*point_c)){
            letters[toupper(*point_c) - 'A']++;
        }
    }
    void scan_word(int occurrences[26]);
    int occurences2[26] = {0};
    printf("Enter second word: ");
    while ((c = getchar()) != '\n') {
        if (isalpha(*point_c)){
            letters[toupper(*point_c) - 'A']--;
        }
    }

    for (i = 0; *point_i < 26; (*point_i)++) {
        if (letters[*point_i] != 0) {
            same = 0;
            break;
        }
    }
    
    if (same) {
        printf("The words are anagrams.\n");
        return true;
    }
    printf("The words are not anagrams.\n");
    return false;
}

