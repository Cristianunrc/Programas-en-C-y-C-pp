#include <stdio.h>

int maxNum (int a , int b){
	
	if (a>b){
		return a;
	}else{
		return b;
	}
	
}

int main (){
	
	int max;
	max = maxNum (7 , 7);	
	
	printf ("%d",max);
	
	return 0;
}
