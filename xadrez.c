#include <stdio.h>
#include <stdlib.h>


//  1. Protótipos das Funções Recursivas 
// É uma boa prática declarar as funções no início,
// antes de usá-las na 'main'.

/**
 * @brief Simula o movimento da Torre recursivamente.
 * @param passo_atual O passo atual do movimento (começa em 1).
 * @param casas_total O número total de casas a mover.
 */
void moverTorreRecursivo(int passo_atual, int casas_total);

/**
 * @brief Simula o movimento do Bispo recursivamente.
 * @param passo_atual O passo atual do movimento (começa em 1).
 * @param casas_total O número total de casas a mover.
 */
void moverBispoRecursivo(int passo_atual, int casas_total);

/**
 * @brief Simula o movimento da Rainha recursivamente.
 * @param passo_atual O passo atual do movimento (começa em 1).
 * @param casas_total O número total de casas a mover.
 */
void moverRainhaRecursivo(int passo_atual, int casas_total);


//  Função Principal 
int main(void) {

    //  1. Movimento da Torre (Usando Recursão) 
    int casas_torre = 5;
    printf(" Movimento da Torre (%d casas para Direita) [RECURSIVO] \n", casas_torre);
    // Inicia a chamada recursiva no passo 1
    moverTorreRecursivo(1, casas_torre);


    //  2. Movimento do Bispo (Usando Recursão) 
    int casas_bispo = 5;
    printf("\n Movimento do Bispo (%d casas Diagonal Cima-Direita) [RECURSIVO] \n", casas_bispo);
    // Inicia a chamada recursiva no passo 1
    moverBispoRecursivo(1, casas_bispo);


    //  3. Movimento da Rainha (Usando Recursão) 
    int casas_rainha = 8;
    printf("\n--- Movimento da Rainha (%d casas para Esquerda) [RECURSIVO] ---\n", casas_rainha);
    // Inicia a chamada recursiva no passo 1
    moverRainhaRecursivo(1, casas_rainha);


    //  4. Movimento do Bispo (Usando Loops Aninhados V/H) 
    // Implementação adicional conforme solicitado no desafio.
    printf("\n--- Movimento do Bispo (%d casas Diagonal Cima-Direita) [LOOPS ANINHADOS] ---\n", casas_bispo);
    
    // Loop externo (Vertical): controla o número de passos diagonais
    for (int v = 1; v <= casas_bispo; v++) {
        
        // Loop interno (Horizontal): executa apenas uma vez por passo vertical
        // A combinação de 1 passo 'v' e 1 passo 'h' simula
        // um único passo na diagonal.
        for (int h = 1; h <= 1; h++) {
            printf("Passo %d: Cima, Direita\n", v);
        }
    }


    //  5. Movimento do Cavalo (Usando Loops Aninhados Complexos) 
    // Novo movimento: 2 casas para Cima, 1 casa para Direita.
    int casas_vertical_cavalo = 2;
    int casas_horizontal_cavalo = 1;

    // Controla qual segmento do "L" estamos executando (1=Vertical, 2=Horizontal)
    int segmento_L = 1; 

    printf("\n Movimento do Cavalo (2 Cima, 1 Direita) [LOOPS ANINHADOS] \n");

    // Loop 'while' externo: controla os DOIS segmentos do movimento
    while (segmento_L <= 2) {
        
        // Condição que decide qual loop aninhado executar
        if (segmento_L == 1) {
            // Segmento 1: Mover para Cima
            // Loop 'for' interno: executa 'casas_vertical_cavalo' (2) vezes
            for (int passo_v = 1; passo_v <= casas_vertical_cavalo; passo_v++) {
                printf("Cima\n");
            }
        } else {
            // Segmento 2: Mover para Direita
            // Loop 'for' interno: executa 'casas_horizontal_cavalo' (1) vez
            for (int passo_h = 1; passo_h <= casas_horizontal_cavalo; passo_h++) {
                printf("Direita\n");
            }
        }
        
        // Avança para o próximo segmento do "L"
        segmento_L++; 
    }


    return 0; // Indica que o programa terminou com sucesso
}


//  Implementação das Funções Recursivas 

/**
 * @brief Corpo da função recursiva da Torre.
 */
void moverTorreRecursivo(int passo_atual, int casas_total) {
    // 1. Caso Base (Condição de Parada)
    // Se o passo atual for maior que o total, a recursão para.
    if (passo_atual > casas_total) {
        return; 
    }

    // 2. Trabalho (Ação)
    // Imprime o movimento do passo ATUAL
    printf("Passo %d: Direita\n", passo_atual);

    // 3. Chamada Recursiva (Passo)
    // Chama a si mesma, mas avançando para o próximo passo.
    moverTorreRecursivo(passo_atual + 1, casas_total);
}

/**
 * @brief Corpo da função recursiva do Bispo.
 */
void moverBispoRecursivo(int passo_atual, int casas_total) {
    // 1. Caso Base (Condição de Parada)
    if (passo_atual > casas_total) {
        return;
    }

    // 2. Trabalho (Ação)
    printf("Passo %d: Cima, Direita\n", passo_atual);

    // 3. Chamada Recursiva (Passo)
    moverBispoRecursivo(passo_atual + 1, casas_total);
}

/**
 * @brief Corpo da função recursiva da Rainha.
 */
void moverRainhaRecursivo(int passo_atual, int casas_total) {
    // 1. Caso Base (Condição de Parada)
    if (passo_atual > casas_total) {
        return;
    }

    // 2. Trabalho (Ação)
    printf("Passo %d: Esquerda\n", passo_atual);

    // 3. Chamada Recursiva (Passo)
    moverRainhaRecursivo(passo_atual + 1, casas_total);
}
