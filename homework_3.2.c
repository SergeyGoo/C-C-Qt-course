#include <stdio.h>

int i;

int main(){
	
	printf("Enter digit: ");
	scanf("%d", &i);
	
	switch(i){
		case 1: printf("The first letter of digit %d is \"o\"\n", i);
			break;
		case 2: printf("The first letter of digit %d is \"t\"\n", i);
			break;
		case 3: printf("The first letter of digit %d is \"t\"\n", i);
			break;
		case 4: printf("The first letter of digit %d is \"f\"\n", i);
			break;
		case 5: printf("The first letter of digit %d is \"f\"\n", i);
			break;
		case 6: printf("The first letter of digit %d is \"s\"\n", i);
			break;
		case 7: printf("The first letter of digit %d is \"s\"\n", i);
			break;
		case 8: printf("The first letter of digit %d is \"e\"\n", i);
			break;
		case 9: printf("The first letter of digit %d is \"n\"\n", i);
			break;
		case 0: printf("The first letter of digit %d is \"z\"\n", i);
			break;
		default: printf ("%d is not digit", i);
			break;

}

}
