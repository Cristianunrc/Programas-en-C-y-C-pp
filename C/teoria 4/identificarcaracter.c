#include <stdio.h>
char letra;
int EsMayuscula(char c);// primera versión usando variable local
int EsMayuscula2(char c);// segunda versión sin variable local
int EsMayuscula3(char c);// tercera versión sin variable local y sin if
char AMinuscula(char c);
int EsVocal(char c);

int main(){
  printf("\n Ingrese caracter: ");
  scanf("%c",&letra);
  if (EsMayuscula(letra)){
      printf("\n El caracter ingresado (%c) es una mayuscula", letra);
  } 
  else{
      printf("\n El caracter ingresado (%c) es una minuscula", letra);  
  }
  if (EsVocal(letra)){
      printf("\n El caracter ingresado (%c) es una vocal", letra);
  } 
  else{
      printf("\n El caracter ingresado (%c) NO es una vocal", letra);  
  }
  if (EsMayuscula2(letra)){
      printf("\n El caracter ingresado (%c) es una mayuscula", letra);
  } 
  else{
      printf("\n El caracter ingresado (%c) es una minuscula", letra);  
  }
  if (EsVocal(letra)){
      printf("\n El caracter ingresado (%c) es una vocal", letra);
  } 
  else{
      printf("\n El caracter ingresado (%c) NO es una vocal", letra);  
  }
  if (EsMayuscula3(letra)){
      printf("\n El caracter ingresado (%c) es una mayuscula", letra);
  } 
  else{
      printf("\n El caracter ingresado (%c) es una minuscula", letra);  
  }
  if (EsVocal(letra)){
      printf("\n El caracter ingresado (%c) es una vocal", letra);
  } 
  else{
      printf("\n El caracter ingresado (%c) NO es una vocal", letra);  
  }
  return 0;
}

int EsMayuscula(char c){
int aux;    
  if ((c >= 'A') && (c <= 'Z')){
    aux=1;
  }
  else{
    aux=0;
  }
  return (aux);
}

int EsMayuscula2(char c){
  if ((c >= 'A') && (c <= 'Z')){
    return(1);
  }
  else{
    return (0);
  }
}

int EsMayuscula3(char c){
  return ((c >= 'A') && (c <= 'Z'));
}

char AMinuscula(char c){
/* si un caracter esta comprendido entre A y Z, se le suma la diferencia entre los ASCII de las minúsculas y las mayúsculas ( 97 - 65 = 32 ) para a minuscula */
  return (c + ('a'-'A'));
}

int EsVocal(char c){
 char minus;
 if (EsMayuscula(c)){
     minus = AMinuscula(c);
 } 
 else{
     minus = c;
 }
 return ((minus == 'a') || (minus == 'e') || (minus == 'i') || (minus == 'o') || (minus == 'u')); 
}
