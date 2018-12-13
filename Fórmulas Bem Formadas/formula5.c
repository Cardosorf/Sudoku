#include<stdio.h>
#include <string.h>
#include <stdlib.h>
/*Gera a fórmula que garante que não repita dígitos em cada um dos subgrids do sudoku*/
#define QntCarac 1500000

char * inttostring(int a); /*Converte um inteiro para string*/

int main(){
  char url[]="formula5.txt";
	char *ch = (char *) malloc (sizeof(char)*QntCarac);
  *ch = "";
	FILE *arq;
  int i, j, d, k, x, z;

  /*Primeiro quadrante*/
  strcat(ch, "(");
  for(d=0; d<9; d++){
    for(i=0; i<3; i++){
      for(j=0; j<3; j++){
        for(k=0; k<3; k++){
          for(x=0; x<3; x++){
              if(!((x == j)&&(k == i))){
                strcat(ch, "!(matrix_prop[");
                strcat(ch,inttostring(i));
                strcat(ch, "][");
                strcat(ch,inttostring(j));
                strcat(ch, "][");
                strcat(ch,inttostring(d));
                strcat(ch, "]&&matrix_prop[");
                strcat(ch,inttostring(k));
                strcat(ch, "][");
                strcat(ch,inttostring(x));
                strcat(ch, "][");
                strcat(ch,inttostring(d));
                strcat(ch, "])\n&&");
              }
          }
        }
      }
    }
  }


  /*segundo quadrante*/
  for(d=0; d<9; d++){
    for(i=0; i<3; i++){
      for(j=3; j<6; j++){
        for(k=0; k<3; k++){
          for(x=3; x<6; x++){
            if(!((x == j)&&(k == i))){
              strcat(ch, "!(matrix_prop[");
              strcat(ch,inttostring(i));
              strcat(ch, "][");
              strcat(ch,inttostring(j));
              strcat(ch, "][");
              strcat(ch,inttostring(d));
              strcat(ch, "]&&matrix_prop[");
              strcat(ch,inttostring(k));
              strcat(ch, "][");
              strcat(ch,inttostring(x));
              strcat(ch, "][");
              strcat(ch,inttostring(d));
              strcat(ch, "])\n&&");
            }
          }
        }
      }
    }
  }

  /*terceiro quadrante*/
  for(d=0; d<9; d++){
    for(i=0; i<3; i++){
      for(j=6; j<9; j++){
        for(k=0; k<3; k++){
          for(x=6; x<9; x++){
            if(!((x == j)&&(k == i))){
              strcat(ch, "!(matrix_prop[");
              strcat(ch,inttostring(i));
              strcat(ch, "][");
              strcat(ch,inttostring(j));
              strcat(ch, "][");
              strcat(ch,inttostring(d));
              strcat(ch, "]&&matrix_prop[");
              strcat(ch,inttostring(k));
              strcat(ch, "][");
              strcat(ch,inttostring(x));
              strcat(ch, "][");
              strcat(ch,inttostring(d));
              strcat(ch, "])\n&&");
            }
          }
        }
      }
    }
  }

  /*quarto quadrante*/
  for(d=0; d<9; d++){
    for(i=3; i<6; i++){
      for(j=0; j<3; j++){
        for(k=3; k<6; k++){
          for(x=0; x<3; x++){
            if(!((x == j)&&(k == i))){
              strcat(ch, "!(matrix_prop[");
              strcat(ch,inttostring(i));
              strcat(ch, "][");
              strcat(ch,inttostring(j));
              strcat(ch, "][");
              strcat(ch,inttostring(d));
              strcat(ch, "]&&matrix_prop[");
              strcat(ch,inttostring(k));
              strcat(ch, "][");
              strcat(ch,inttostring(x));
              strcat(ch, "][");
              strcat(ch,inttostring(d));
              strcat(ch, "])\n&&");
            }
          }
        }
      }
    }
  }

  /*quinto quadrante*/
  for(d=0; d<9; d++){
    for(i=3; i<6; i++){
      for(j=3; j<6; j++){
        for(k=3; k<6; k++){
          for(x=3; x<6; x++){
            if(!((x == j)&&(k == i))){
              strcat(ch, "!(matrix_prop[");
              strcat(ch,inttostring(i));
              strcat(ch, "][");
              strcat(ch,inttostring(j));
              strcat(ch, "][");
              strcat(ch,inttostring(d));
              strcat(ch, "]&&matrix_prop[");
              strcat(ch,inttostring(k));
              strcat(ch, "][");
              strcat(ch,inttostring(x));
              strcat(ch, "][");
              strcat(ch,inttostring(d));
              strcat(ch, "])\n&&");
            }
          }
        }
      }
    }
  }

  /*sexto quadrante*/
  for(d=0; d<9; d++){
    for(i=3; i<6; i++){
      for(j=6; j<9; j++){
        for(k=3; k<6; k++){
          for(x=6; x<9; x++){
            if(!((x == j)&&(k == i))){
              strcat(ch, "!(matrix_prop[");
              strcat(ch,inttostring(i));
              strcat(ch, "][");
              strcat(ch,inttostring(j));
              strcat(ch, "][");
              strcat(ch,inttostring(d));
              strcat(ch, "]&&matrix_prop[");
              strcat(ch,inttostring(k));
              strcat(ch, "][");
              strcat(ch,inttostring(x));
              strcat(ch, "][");
              strcat(ch,inttostring(d));
              strcat(ch, "])\n&&");
            }
          }
        }
      }
    }
  }

  /*sétimo quadrante*/
  for(d=0; d<9; d++){
    for(i=6; i<9; i++){
      for(j=0; j<3; j++){
        for(k=6; k<9; k++){
          for(x=0; x<3; x++){
            if(!((x == j)&&(k == i))){
              strcat(ch, "!(matrix_prop[");
              strcat(ch,inttostring(i));
              strcat(ch, "][");
              strcat(ch,inttostring(j));
              strcat(ch, "][");
              strcat(ch,inttostring(d));
              strcat(ch, "]&&matrix_prop[");
              strcat(ch,inttostring(k));
              strcat(ch, "][");
              strcat(ch,inttostring(x));
              strcat(ch, "][");
              strcat(ch,inttostring(d));
              strcat(ch, "])\n&&");
            }
          }
        }
      }
    }
  }

  /*oitavo quadrante*/
  for(d=0; d<9; d++){
    for(i=6; i<9; i++){
      for(j=3; j<6; j++){
        for(k=6; k<9; k++){
          for(x=3; x<6; x++){
            if(!((x == j)&&(k == i))){
              strcat(ch, "!(matrix_prop[");
              strcat(ch,inttostring(i));
              strcat(ch, "][");
              strcat(ch,inttostring(j));
              strcat(ch, "][");
              strcat(ch,inttostring(d));
              strcat(ch, "]&&matrix_prop[");
              strcat(ch,inttostring(k));
              strcat(ch, "][");
              strcat(ch,inttostring(x));
              strcat(ch, "][");
              strcat(ch,inttostring(d));
              strcat(ch, "])\n&&");
            }
          }
        }
      }
    }
  }

  /*nono quadrante*/
  for(d=0; d<9; d++){
    for(i=6; i<9; i++){
      for(j=6; j<9; j++){
        for(k=6; k<9; k++){
          for(x=6; x<9; x++){
            if(!((x == j)&&(k == i))){
              strcat(ch, "!(matrix_prop[");
              strcat(ch,inttostring(i));
              strcat(ch, "][");
              strcat(ch,inttostring(j));
              strcat(ch, "][");
              strcat(ch,inttostring(d));
              strcat(ch, "]&&matrix_prop[");
              strcat(ch,inttostring(k));
              strcat(ch, "][");
              strcat(ch,inttostring(x));
              strcat(ch, "][");
              strcat(ch,inttostring(d));
              strcat(ch, "])\n&&");
            }
          }
        }
      }
    }
  }
  ch[strlen(ch)-2] = ')';
  ch[strlen(ch)-1] = '\0';

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
