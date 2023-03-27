#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * char password - Add 1 for null terminator
 * srand - seed the random number generator
 * for loop - Generates a random password
 * printf - prints the password
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 20
#define PASSWORD "MySuperSecurePassword"

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    const char *valid_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    srand(time(NULL));

    // Generate random password until it matches the valid password
    do {
        for (i = 0; i < PASSWORD_LENGTH; i++)
        {
            password[i] = valid_chars[rand() % 62];
        }
        password[PASSWORD_LENGTH] = '\0';
    } while (strcmp(password, PASSWORD) != 0);

    printf("%s\n", password);
    return 0;
}
