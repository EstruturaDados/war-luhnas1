#include <stdio.h>
#include <string.h>


// Definição da estrutura (struct) para armazenar os dados de um território
struct Territorio {
    char nome[30];  // Nome do território
    char cor[15];   // Cor do exército
    int tropas;     // Quantidade de tropas
};

int main() {
    // Criação de um vetor estático com 5 territórios
    struct Territorio territorios[5];

    printf("🗺️ DESAFIO WAR ESTRUTURADO – NIVEL NOVATO\n");
    printf("=========================================\n\n");
    printf("Cadastro dos Territórios:\n\n");

    // Loop para entrada dos dados
    for (int i = 0; i < 5; i++) {
        printf("Território %d\n", i + 1);

        // Limpeza do buffer de entrada (evita pular leituras)
        fflush(stdin);

        // Leitura do nome do território
        printf("Nome do território: ");
        fgets(territorios[i].nome, 30, stdin);
        territorios[i].nome[strcspn(territorios[i].nome, "\n")] = '\0';

        // Leitura da cor do exército
        printf("Cor do exército: ");
        fgets(territorios[i].cor, 15, stdin);
        territorios[i].cor[strcspn(territorios[i].cor, "\n")] = '\0';

        // Leitura do número de tropas
        printf("Número de tropas: ");
        scanf("%d", &territorios[i].tropas);
        getchar(); // Limpa o ENTER pendente no buffer

        printf("-----------------------------------------\n");
    }

    // Exibição do estado atual do mapa (dados cadastrados)
    printf("\n🌍 ESTADO ATUAL DO MAPA\n");
    printf("=========================================\n");

    for (int i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome.............: %s\n", territorios[i].nome);
        printf("Cor do Exército..: %s\n", territorios[i].cor);
        printf("Número de Tropas.: %d\n", territorios[i].tropas);
        printf("-----------------------------------------\n");
    }

    printf("✅ Cadastro concluído com sucesso!\n");
    return 0;
}

