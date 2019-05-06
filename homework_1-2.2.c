#include <stdio.h>

int a;
int b;

int main(){
	printf("Ввод числа 1:");
	scanf("%i", &a);
	printf("Ввод числа 2:");
	scanf("%i", &b);
	a*=b;
	printf("Умножение:%d \n",a);
	a/=b;
	a/=b;
	printf("Деление:%d \n",a);
	a*=b;
	a-=b;
	printf("Вычитание:%d \n",a);
	a+=b;
	a+=b;
	printf("сложение:%d \n",a);
	a%=b;
	printf("Остаток:%d \n",a);	
}



	
