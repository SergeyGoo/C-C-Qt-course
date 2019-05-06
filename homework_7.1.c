#include <stdio.h>


int entering(){
	FILE *pbook = fopen("PhoneBook.txt", "a+");
	char *name[30];
	char *number[11];
	printf("\nEnter name:");
	scanf("%s", &name);
	printf("\nEnter number:");
	scanf("%s", &number);
	fprintf(pbook,"%s\n%s\n", name, number);
	fclose (pbook);
}

int output(){
	char *str[100];
    char *estr;
	FILE *phbook = fopen("PhoneBook.txt", "r");

    while (1)
    {
         estr = fgets (str,sizeof(str),phbook);
         if ( feof (phbook) != 0)
         {  
            break;
         }
        printf("%s", str);
   }

	fclose (phbook);
    return 0;
}

int search(){
    FILE *phnbook = fopen("PhoneBook.txt", "r+");
    char *p;
    p = strstr(phnbook, "Ser");
    printf("%s", p);
    return 0;



}
int main(){
	int i;
	while (i!=0){
		printf("Now you are in main menu, type \n\"1\" for entering numbers, \n\"2\" for printing all numbers on screen, \n\"3\" for searching numbers, \n\"0\" for exit\n");
		scanf("%d", &i);
		if (i==1) {
		printf("Your choose is entering of numbers, \nenter names and numbers \ntype \"0\" for exit");
		entering();}
		else if (i==2) output();
		else if (i==3) search();
		else if (i!=0) printf ("Try another button\n");
		
}
printf ("Goodbye!\n");
}
