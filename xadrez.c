#include <stdio.h>

//TORRE
void movertorre(int casas){
  if (casas > 0){
    printf("Direita\n");
    movertorre(casas - 1);
  }
}

//BISPO RECURSIVO
void moverbisporecursivo(int casas){
  if (casas > 0){
    printf("Cima, Direita\n");
    moverbisporecursivo(casas - 1);
  }
}

//BISPO ANINHADO
void moverbispoaninhado(int casas){ 
for(int i = 0; i < casas ; i++){      
  for(int j = 0; j < casas; j++){
    if (i == j) {
      printf("Cima, Direita\n");
   }
  }
 }
}

//RAINHA
void moverrainha(int casas){
  if (casas > 0){
    printf("Esquerda\n");
    moverrainha(casas - 1);
  }
}
 
int main() {

    // MOVER A TORRE 5 CASAS PARA A DIREITA
    printf("\nTorre:\n");
    movertorre(5);

    // MOVER O BISPO CINCO CASAS NA DIAGONAL PARA CIMA E À DIREITA - RECURSIVO
    printf("\nBispo Recursivo:\n");
    moverbisporecursivo(5);

    // MOVER O BISPO CINCO CASAS NA DIAGONAL PARA CIMA E À DIREITA - ANINHADO
    printf("\nBispo Aninhado:\n");
    moverbispoaninhado(5);

    // MOVER A RAINHA OITO CASAS PARA A ESQUERDA
    printf("\nRainha:\n");
    moverrainha(8);

    // MOVER O CAVALO 2 CASAS PARA CIMA E UMA PARA DIREITA - LOOPS COMPLEXOS
    printf("\nCavalo:\n");
    int total_passos = 3; 
    
    for (int passo = 1; passo <= total_passos; passo++) {
        if (passo == 3) {
            continue;  
        }
        if (passo <= 2) {
            printf("Cima\n");
        }               
        if (passo == 2) {
            printf("Direita\n");
            break;  
        }
    }
  return 0;
}     
     
