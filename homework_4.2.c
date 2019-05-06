# include <stdio.h>
# include <stdlib.h>

char *a = "file";
int b = 0;
char *c = ".txt";
char fname[100];

int random_infile(){
	
	int i;
	
	FILE *rnd = fopen(fname, "w");	
	for (int j=0;j<1000;j++){
		
		i = 0+rand()%10;
		fprintf(rnd, "%d\n", i);

}
	
	fclose(rnd);	

}

int main(){
	
	for (; b < 10; b++){
		
		
		sprintf (fname, "%s%d%s", a,b,c );
		random_infile();

}

	return 0;

}
	

