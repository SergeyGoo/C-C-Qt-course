#include <stdio.h>



int main(){
	int i = 0;
	int j = 0;	
	do{
		while(j<10){
			for(int k=10; k>0; k--){printf("%d%d%d\n", i,j,k);}			
			j++;
		}
		i++;
		}while(i<0);
}
