//My Cs50 Final Project
//Morse Code Converter
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Morse code lookup table
const char *morse_code[] = {
    ".-",   "-...", "-.-.", "-..",  ".",   "..-.", "--.",  "....", "..",    ".---", // A-J
    "-.-",  ".-..", "--",   "-.",   "---", ".--.", "--.-", ".-.",  "...",   "-",    // K-T
    "..-",  "...-", ".--",  "-..-", "-.--", "--..", // U-Z
    "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", // 0-9
    ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "---...", ".-..-.",  //.,? ' ! / ()
    " " //space
};

// Corresponding characters
const char characters[] = {
    'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
    'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
    'U', 'V', 'W', 'X', 'Y', 'Z',
    '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
    '.', ',', '?', '\'', '!', '/', '(', ')', '"',
    ' '
};

// Function to convert English to Morse code
void englishToMorse(char *english) {
    char *word = strtok(english, " "); //split by space
    while (word != NULL) {
        for (int i = 0; i < strlen(word); i++) {
            char c = toupper(word[i]); // Convert to uppercase for lookup
            int found = 0;
            for (int j = 0; j < sizeof(characters) / sizeof(characters[0]); j++) {
                if (characters[j] == c) {
                    printf("%s ", morse_code[j]);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("? "); // Indicate unknown character
            }
        }
        printf("/ "); // Word separator
        word = strtok(NULL, " ");
    }
    printf("\n");
}

// Function to convert Morse code to English
void morseToEnglish(char *morse) {
    char *word = strtok(morse, "/"); //split by / for word
    while(word != NULL){
        char *token = strtok(word, " "); //split by space for character
        while (token != NULL) {
            int found = 0;
            for (int i = 0; i < sizeof(morse_code) / sizeof(morse_code[0]); i++) {
                if (strcmp(morse_code[i], token) == 0) {
                    printf("%c", characters[i]);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("?"); // Indicate unknown Morse code
            }
            token = strtok(NULL, " ");
        }
        printf(" "); //space between words.
        word = strtok(NULL, "/");
    }
    printf("\n");
}

int main() {
    int choice;
    char input[1000];

    printf("Choose conversion:\n");
    printf("1. English to Morse\n");
    printf("2. Morse to English\n");
    scanf("%d", &choice);
    getchar(); // Consume newline character

    printf("Enter text to convert:\n");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; // Remove trailing newline

    if (choice == 1) {
        printf("English Text to Morse Code:\n");
        englishToMorse(input);
    } else if (choice == 2) {
        printf("Morse Code to English Text:\n");
        morseToEnglish(input);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
