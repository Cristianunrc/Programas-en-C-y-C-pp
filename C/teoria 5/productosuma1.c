#include <stdio.h> 
float bb, cc, dd, pp;
void ProSum(float x, float z, float *w, float *prom){
  float a; 	

  x = x+1;
  a = (*w)*2;
  *w = x+z+(*w)+a;
  z = z/2;
  *prom = (*w)/4;
}

int main()
{
    dd=80;
    cc=3;
    bb=0;
    ProSum(dd,cc,&bb,&pp);
    printf("los valores de prosum son: %f %f \n",bb,pp);
    return 0;
}
