#include <stdio.h>
#include <locale.h>



int main(){
	
	setlocale(0, "");
	FILE *f = fopen ("text0.txt", "w");
	vchar b;
	int i;
	for (i=1; i<3; i++){
		b=getchar();
		vprintf("is %d\n", b);
		fvprintf(f,"%c\n", b);
	
}
	fclose(f);
}
