#include <stdio.h>
#include <locale.h>



int main(){
	setlocale(LC_ALL, "ru_RU.UTF-8");
	char *arr[10000];
	FILE *sym = fopen("symbols.txt", "r");
	fgets (arr, 10001, sym);
	int i = 0;
	int k = 0;
	int j = 0; 
	for (;k<125; k++){
		int i = 0;
		int j = 0;		
		while ( i< 10001){
			if (arr[i]==(char)k)j++;i++;
}
		if (j!=0)printf ("Num of %c is: %d \n", k, j);
}

	fclose(sym);

}

