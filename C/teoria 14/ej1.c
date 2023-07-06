//Ej 1
#include <stdio.h>

struct TelemCar { 
                  char info; 
                  struct TelemCar *next; 
                }; 

int main() { 
  struct TelemCar *sec;
  
  sec = (struct TelemCar *) NULL; 
  return(0); 
}
