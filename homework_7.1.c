#include <stdio.h>
#include <string.h>


int entering(){
	FILE *pbook = fopen("PhoneBook.txt", "a+");
	char *name[30];
	char *number[11];
	printf("\nEnter name:	");
	scanf("%s", &name);
	printf("\nEnter number:	");
	scanf("%s", &number);
	fprintf(pbook,"%s %s\n", name, number);
	fclose (pbook);
}

int output(){
	char str[10000];
	FILE *phbook = fopen("PhoneBook.txt", "r");

    while (feof (phbook) == 0){	
		fgets (str,sizeof(str),phbook);
    	printf("%s", str);
	}
	fclose (phbook);
    return 0;
}

int search(){
	char str[10000];
	char search_data[100];
	char *p;
    FILE *phnbook = fopen("PhoneBook.txt", "r+");
	printf ("Enter data for search:	");    
	scanf("%s", &search_data);
	while (feof (phnbook) == 0){	
		fgets (str,sizeof(str),phnbook);
    	p = strstr(str, search_data);
    	printf(p);
	}
    return 0;



}
int main(){
	int i;
	while (i!=0){
		printf("Now you are in main menu, type \n\"1\" for entering numbers, \n\"2\" for printing all numbers on screen, \n\"3\" for searching numbers, \n\"0\" for exit\n");
		scanf("%d", &i);
		switch (i) {
			case 1:
				printf("Your choose is entering of numbers, \nenter names and numbers \ntype \"0\" for exit");
			entering();
				break;
			case 2:
			output();
				break;
			case 3:
			search();
				break;
			case 0:
			printf ("Goodbye!\n");
				break;
			default: 
				printf ("Try another button\n");
				break;
		}
	}

}
