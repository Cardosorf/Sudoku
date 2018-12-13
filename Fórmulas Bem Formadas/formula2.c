#include<stdio.h>
#include <string.h>
#include <stdlib.h>
/*Gera a fórmula que garante que em cada linha exista no máximo um dígito*/
#define QntCarac 150000

char * inttostring(int a); /*Converte um inteiro para string*/

int main(){
  char url[]="formula2.txt";
	char *ch = (char *) malloc (sizeof(char)*QntCarac);
  *ch = "";
	FILE *arq;
  int i, j, k, x, z;

  for(i=0; i<9; i++){
    for(j=0; j<9; j++){
      strcat(ch, "(");
      for(k=0; k<8; k++){
        for(x=0; x<9; x++){

          strcat(ch, "!(matrix_prop[");
          strcat(ch,inttostring(i));
          strcat(ch, "][");
          strcat(ch,inttostring(j));
          strcat(ch, "][");
          strcat(ch,inttostring(k));
          strcat(ch, "]&&matrix_prop[");
          strcat(ch,inttostring(i));
          strcat(ch, "][");
          strcat(ch,inttostring(j));
          strcat(ch, "][");
          while((x == k) || (x<k)){
            x++;
          }
          strcat(ch,inttostring(x));
          if(k<7){
            strcat(ch, "])\n&&");
          }else{
            strcat(ch, "])");
          }
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
