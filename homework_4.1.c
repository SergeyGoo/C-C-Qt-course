#include <stdio.h>
int dbd = 0;
int summ(int db){
		
	
	if (db != 0){
	int k = db % 10;
	dbd += k;
	return summ(db/10);}
	else  return dbd;

}
int main(){
	int i,j;
	scanf("%d", &i);
	j=summ(i);
	printf("%d", j);
}
		
