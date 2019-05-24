// Реализовать программу, вычитывающую текст из файла(до 100000 символов) и считающую  размер считанных данных.

#include <stdio.h>
#include <string.h>



int main(){
	char arr[100001];
	FILE *sym = fopen("homework_6.3.c", "r");
	int i=0;
	int a=0;
	while (feof(sym) == 0 ) {
		char c = fgetc(sym);
		a += sizeof(c);
		arr [i]= c;
		i++;
		} 
	printf("%d", a);


return 0 ;
}
