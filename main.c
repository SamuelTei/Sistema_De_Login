#include <stdio.h>
#include <string.h>

#define MAX_INPUT 64

int main(void) {
    const char expectedUser[] = "admin";
    const char expectedPassword[] = "1234";
    char username[MAX_INPUT];
    char password[MAX_INPUT];

    printf("=== Sistema de Login ===\n");
    printf("Usuário: ");
    if (fgets(username, sizeof(username), stdin) == NULL) {
        return 1;
    }
    printf("Senha: ");
    if (fgets(password, sizeof(password), stdin) == NULL) {
        return 1;
    }

    // Remove newline characters
    username[strcspn(username, "\r\n")] = '\0';
    password[strcspn(password, "\r\n")] = '\0';

    if (strcmp(username, expectedUser) == 0 && strcmp(password, expectedPassword) == 0) {
        printf("Login efetuado com sucesso!\n");
        return 0;
    }

    printf("Usuário ou senha inválidos.\n");
    return 1;
}
