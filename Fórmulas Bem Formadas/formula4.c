#include<stdio.h>
#include <string.h>
#include <stdlib.h>
/*Gera a fórmula que garante que não repita dígitos em cada uma das colunas do sudoku*/
#define QntCarac 1500000

char * inttostring(int a); /*Converte um inteiro para string*/

int main(){
  char url[]="formula4.txt";
	char *ch = (char *) malloc (sizeof(char)*QntCarac);
  *ch = "";
	FILE *arq;
  int i, d, j, k, z;

  for(j=0; j<9; j++){
    for(d=0; d<9; d++){
      strcat(ch, "(");
      for(i=0; i<9; i++){
        for(k=i+1; k<9; k++){

          strcat(ch, "!(matrix_prop[");
          strcat(ch,inttostring(i));
          strcat(ch, "][");
          strcat(ch,inttostring(j));
          strcat(ch, "][");
          strcat(ch,inttostring(d));
          strcat(ch, "]&&matrix_prop[");
          strcat(ch,inttostring(k));
          strcat(ch, "][");
          strcat(ch,inttostring(j));
          strcat(ch, "][");
          while((k == i) || (k<i)){
            k++;
          }
          strcat(ch,inttostring(d));
          if(i<7){
            strcat(ch, "])\n&&");
          }else{
            strcat(ch, "])");
          }
        }
      }
      if(d<8){
        strcat(ch, ")\n&&");
      }
    }
    if(j<8){
      strcat(ch, ")\n&&");
    }else{
      strcat(ch, ")");
    }
  }
  strcat(ch, "\0");


	arq = fopen(url, "w");
	if(arq == NULL)
		printf("Erro, nao foi possivel abrir o arquivo\n");
	else{
    z=1;
    while(ch[z]){
		    fputc(ch[z], arq);
        z++;
    }
		fclose(arq);
	}

	return 0;
}

char * inttostring(int a){
  char * res;
  res = (char *) malloc (sizeof(char));
  *res = a+48;
  return res;
}
