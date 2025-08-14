#include <stdio.h>

int main() {
    char str[200], longest[200];
    int i = 0, wordLen = 0, maxLen = 0, wordCount = 0;
    
    printf("Enter a sentence: ");
    scanf("%[^\n]", str);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            wordLen++;
        } else {
            if (wordLen > 0) {
                wordCount++;
                if (wordLen > maxLen) {
                    maxLen = wordLen;
                    int start = i - wordLen;
                    for (int j = 0; j < wordLen; j++) {
                        longest[j] = str[start + j];
                    }
                    longest[wordLen] = '\0';
                }
                wordLen = 0;
            }
        }
        if (str[i] == '\0') break;
        i++;
    }

    printf("Word Count: %d\n", wordCount);
    printf("Longest Word: %s\n", longest);

    return 0;
}
