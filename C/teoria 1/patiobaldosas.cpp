#include <stdio.h>
/* l�xico */
float ladoCeramico, largoPatio, anchoPatio, areaPatio, areaCeramico, cantCeramicos;

/* funci�n principal (main) en todo programa C */
int main(){
  scanf("%f",&ladoCeramico);
  scanf("%f",&largoPatio);   
  scanf("%f",&anchoPatio);
  areaCeramico = ladoCeramico * ladoCeramico; 
  areaPatio = largoPatio * anchoPatio;
  cantCeramicos = areaPatio / areaCeramico; 
  printf("%f",cantCeramicos);
  return 0;
}

