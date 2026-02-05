#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int carta1, carta2;
    int resultado1, resultado2;
    char primeiroatributo, segundoatributo;
    int ataque1, ataque2, defesa1, defesa2, recuo1,recuo2;

    // Gerar cartas aleatorias
    srand(time(0));
    carta1 = rand() % 100 + 1;  // Cartas entre 1 e 100
    carta2 = rand() % 100 + 1; // Cartas entre 1 e 100
    ataque1 = rand() % 100 + 1;  // Atributos entre 1 e 100
    ataque2 = rand() % 100 + 1;  // Atributos entre 1 e 100
    defesa1 = rand() % 100 + 1;  // Atributos entre 1 e 100
    defesa2 = rand() % 100 + 1;  // Atributos entre 1 e 100
    recuo1 = rand() % 100 + 1;  // Atributos entre 1 e 100
    recuo2 = rand() % 100 + 1;  // Atributos entre 1 e 100
    printf("Carta 1: %d\n", carta1);
    printf("Carta 2: %d\n", carta2);
    printf("Atributos da carta 1: Ataque=%d, Defesa=%d, Recuo=%d\n", ataque1, defesa1, recuo1);
    printf("Atributos da carta 2: Ataque=%d, Defesa=%d, Recuo=%d\n", ataque2, defesa2, recuo2);

    // Inicio do jogo 
    printf("Bem vindo ao jogo Jogo Nivel Mestre!\n");
    printf("Escolha o atributo para comparar entre as cartas:\n");
    printf("A - Ataque\n");
    printf("D - Defesa\n");
    printf("R - Recuo\n");

    printf("Escolha o atributo: ");
    scanf(" %c", &primeiroatributo);

    switch (primeiroatributo) {
        case 'A':
        case 'a':
            printf("Voce escolheu o atributo Ataque!\n");
            resultado1 = (ataque1 > ataque2) ? 1 : (ataque1 < ataque2) ? 2 : 0;
            break;
        case 'D':
        case 'd':
            printf("Voce escolheu o atributo Defesa!\n");
            resultado1 = (defesa1 > defesa2) ? 1 : (defesa1 < defesa2) ? 2 : 0;
            break;
        case 'R':
        case 'r':
            printf("Voce escolheu o atributo Recuo!\n");
            resultado1 = (recuo1 > recuo2) ? 1 : (recuo1 < recuo2) ? 2 : 0;
            break;
        default:
            printf("Atributo invalido!\n");
            break;
 }

     printf("Escolha o segundo atributo para comparar entre as cartas:\n");
     printf("Atenção: Escolha um atributo diferente do primeiro!\n"); 
     printf("A - Ataque\n");
     printf("D - Defesa\n");
     printf("R - Recuo\n");

     scanf(" %c", &segundoatributo);

     
     switch (segundoatributo) {
        case 'A':
        case 'a':
            printf("Voce escolheu o atributo Ataque!\n");
            resultado2 = (ataque1 > ataque2) ? 1 : (ataque1 < ataque2) ? 2 : 0;
            break;
        case 'D':
        case 'd':
            printf("Voce escolheu o atributo Defesa!\n");
            resultado2 = (defesa1 > defesa2) ? 1 : (defesa1 < defesa2) ? 2 : 0;
            break;
        case 'R':
        case 'r':
            printf("Voce escolheu o atributo Recuo!\n");
            resultado2 = (recuo1 > recuo2) ? 1 : (recuo1 < recuo2) ? 2 : 0;
            break;
        default:
            printf("Atributo invalido!\n");
            break;
     }

     if (resultado1 == 0 && resultado2 == 0) {
         printf("Empate em ambas as comparações!\n");
     } else if (resultado1 == 1 && resultado2 == 1) {
         printf("Voce venceu em ambas as comparações!\n");
     } else if (resultado1 == 2 && resultado2 == 2) {
         printf("Carta1 venceu em ambas as comparações!\n");
     } else {
         printf("Vencedor da rodada: ");
         if (resultado1 == 1 || resultado2 == 1) {
             printf("Carta 1\n");
         } else {
             printf("Carta 2\n");
         }
     }
    return 0;
}
