#include <stdio.h>
#include <stdlib.h>

int main(void) {

    //  1. Movimento da Torre (Usando 'for') 

    // A estrutura 'for' é ideal aqui, pois sabemos exatamente
    // o número de repetições (5 casas).
    // O 'for' inicializa, testa a condição e incrementa em uma única linha.
    int casas_torre = 5;
    printf(" Movimento da Torre (%d casas para Direita) \n", casas_torre);

    // i = 1: Inicializa o contador (passo 1)
    // i <= casas_torre: Condição (executa enquanto 'i' for menor ou igual a 5)
    // i++: Incremento (move para o próximo passo)
    for (int i = 1; i <= casas_torre; i++) {
        // Imprime a direção a cada passo
        printf("Passo %d: Direita\n", i);
    }


    //  2. Movimento do Bispo (Usando 'while') 

    // A estrutura 'while' testa a condição ANTES de executar o bloco.
    // É ótima para quando o número de passos é conhecido, mas
    // queremos controlar o contador externamente.
    int casas_bispo = 5;
    int passo_bispo = 1; // O contador deve ser inicializado fora do loop.

    printf("\n Movimento do Bispo (%d casas na Diagonal Cima-Direita) \n", casas_bispo);

    // Testa a condição: "enquanto o passo atual for menor ou igual a 5"
    while (passo_bispo <= casas_bispo) {
        // Imprime a combinação de duas direções
        printf("Passo %d: Cima, Direita\n", passo_bispo);
        
        // O incremento deve ser feito manualmente dentro do loop.
        // Se esquecermos esta linha, teremos um loop infinito!
        passo_bispo++;
    }


    //  3. Movimento da Rainha (Usando 'do-while') 

    // A estrutura 'do-while' executa o bloco de código PELO MENOS UMA VEZ
    // e só testa a condição no FINAL.
    int casas_rainha = 8;
    int passo_rainha = 1; // Inicializa o contador

    printf("\n Movimento da Rainha (%d casas para Esquerda) \n", casas_rainha);

    do {
        // Este bloco é executado primeiro (para o passo 1)
        printf("Passo %d: Esquerda\n", passo_rainha);
        
        // Incrementa o contador
        passo_rainha++;

    } while (passo_rainha <= casas_rainha); // A condição é testada no final.
    // O loop continuará enquanto a condição for verdadeira.

    return 0; // Indica que o programa terminou com sucesso
}
