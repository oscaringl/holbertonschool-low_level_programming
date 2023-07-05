#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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
    char *password = generate_password();
    char solution[] = "Holberton";
    
    if (strcmp(password, solution) == 0)
        printf("Tada! Congrats\n");
    else
        printf("Wrong password\n");

    return 0;
}
