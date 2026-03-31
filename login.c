# Sistema de Login em C

Aplicação desenvolvida em linguagem C que simula um sistema de autenticação de usuário.

## Funcionalidades
- Validação de usuário e senha
- Controle de tentativas de acesso
- Bloqueio após múltiplas tentativas incorretas

## Tecnologias
- Linguagem C

## Como executar

Compile:
gcc login.c -o login

Execute:
./login

## Autor
Esther Caetano


------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



#include <stdio.h>
#include <string.h>

int main() {
    char usuario[20];
    char senha[20];

    // Dados corretos
    char usuario_correto[] = "admin";
    char senha_correta[] = "1234";

    int tentativas = 3;

    while (tentativas > 0) {
        printf("Usuario: ");
        scanf("%s", usuario);

        printf("Senha: ");
        scanf("%s", senha);

        if (strcmp(usuario, usuario_correto) == 0 && strcmp(senha, senha_correta) == 0) {
            printf("\nAcesso liberado!\n");
            break;
        } else {
            tentativas--;
            printf("\nDados incorretos! Tentativas restantes: %d\n\n", tentativas);
        }
    }

    if (tentativas == 3) {
        printf("Acesso bloqueado!\n");
    }

    return 0;
}

