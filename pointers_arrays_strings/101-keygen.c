#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

/**
 * generate_password - Generates a random password
 *
 * Return: The generated password
 */
char *generate_password(void)
{
    static char password[PASSWORD_LENGTH + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    srand(time(0));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        password[i] = charset[rand() % (sizeof(charset) - 1)];
    }

    password[PASSWORD_LENGTH] = '\0';

    return password;
}

int main(void)
{
    printf("%s\n", generate_password());
    return 0;
}
