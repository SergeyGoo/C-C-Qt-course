#include <stdio.h>

int main(){
	int i = 1;
	iter:
		printf("%d\n", i); i++;
	if (i<101)goto iter;
	
	
}
	
