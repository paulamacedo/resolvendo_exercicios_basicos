/* 
  Autor: Paula Macedo
  Descrição:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int jogo(int , int );
int sortear(int , int );
void mensagem (int );

int main(){
  
  int andar, resposta;
  srand(time(NULL));
  puts("Quantos andares tem seu prédio?");
  scanf("%d", &andar);
  puts("OK");
  
  int resultado = sortear(0, andar);
  int contador = jogo(resultado, andar);
  
  puts("Qual é o andar mais alto que a bola não quebra?");
  scanf("%d", &resposta);
  if(resposta == resultado){
    puts("CERTO");
  }
  else{
    puts("ERRADO");
  }
  printf("Você fez %d lançamentos", contador);
  printf("\n");

  return 0;
}

int sortear ( int num, int andar){
  return rand()% (andar - num +1) + num ; 
}

void mensagem (int tentativa){
  if(tentativa == 0){
    puts("Não quebrou");
  }
  if(tentativa == 1){
    puts("Quebrou");
  }

}

int jogo(int resultado, int andar){
  
  int escolha;
  int contador1 = 0;
  int contador2 =0;
  int contador; 
  int tentativa = 0;
  
  while(tentativa!=1){

    puts("Jogue a 1ª bola : ");
    scanf("%d", &escolha);
    
    if((escolha <= resultado) && (escolha <= andar)){
      tentativa = 0;
      mensagem(tentativa);
      contador1 ++;
    }else if((escolha > resultado) && (escolha <= andar)){
      tentativa = 1;
      mensagem(tentativa);
      contador1 ++;
    }else{
      puts("Andar inválido");
    }
   }
   tentativa = 0;   
   while(tentativa!=1){

      puts("Jogue a 2ª bola : ");
      scanf("%d", &escolha);
    
      if((escolha <= resultado) && (escolha <= andar)){
        tentativa = 0;
        mensagem(tentativa);
        contador2 ++;
      }else if((escolha > resultado) && (escolha <= andar)){
        tentativa = 1;
        mensagem(tentativa);
        contador2 ++;
      }else{
        puts("Andar inválido");
      }
   }
     
   contador = contador1 + contador2;
   return contador;   
}
