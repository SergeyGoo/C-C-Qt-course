#include <stdio.h>
#include <string.h>



int main(){
	char arr[10001];
	FILE *sym = fopen("symbols.txt", "r");
	int i=0;
	while (feof(sym) == 0 || i<sizeof(arr)) {
		char c = fgetc(sym);
		arr [i]= c;
		i++;
		} 
	for (int k = 0;k<125; k++){
		int j = 0;		
		for (int i=0;i<strlen(arr);i++){
			if (arr[i]==(char)k) j++;
			}
		if (j!=0)printf ("Num of %c is: %d \n", k, j);
		}

	fclose(sym);

}

