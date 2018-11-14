#include<stdio.h>
#include <string.h>
#include <stdlib.h>
/*Gera a fórmula que garante que em cada casa exista ao menos um dígito*/
#define QntCarac 16279

char * inttostring(int a); /*Converte um inteiro para string*/

int main(){
  char url[]="formula1.txt";
	char *ch = (char *) malloc (sizeof(char)*QntCarac);
  *ch = "";
	FILE *arq;
  int i, j, k, z;

  for(i=0; i<9; i++){
    for(j=0; j<9; j++){
      strcat(ch, "(");
      for(k=0; k<9; k++){
        strcat(ch, "matrix_prop[");
        strcat(ch,inttostring(i));
        strcat(ch, "][");
        strcat(ch,inttostring(j));
        strcat(ch, "][");
        strcat(ch,inttostring(k));
        if(k<8){
          strcat(ch, "]||");
        }else{
          strcat(ch, "]");
        }
      }
      if(j<8){
        strcat(ch, ")\n&&");
      }
    }
    if(i<8){
      strcat(ch, ")\n&&");
    }else{
      strcat(ch, ")");
    }
  }



	arq = fopen(url, "w");
	if(arq == NULL)
		printf("Erro, nao foi possivel abrir o arquivo\n");
	else{
    for(z=1; z<QntCarac; z++){
		    fputc(ch[z], arq);
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
