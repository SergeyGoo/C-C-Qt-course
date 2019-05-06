#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "ru_RU.UTF-8");
	int i=0;
	char array[1000];
	while (i<1000){
		int z = 33+rand()%125;
		char y = (char) z;
		array[i]= y;
		i++;
}
	i=0;	
	while (i<1000){
		printf("%c", array[i]);
		i++;
}
}
