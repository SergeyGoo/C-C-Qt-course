#include <stdio.h>
#include <time.h>


typedef struct {

    char name[10];
    int time;
    int priority;

} task;

void delay(int ms){
  int c = clock() + ms;
  while (clock() < c);
}


int task_gen(){
    for (int i=0; i<10; i++){
        }
return 0;
}





int main(){
    task t1; task t2; task t3; task t4; task t5; task t6; task t7; task t8; task t9; task t10;	
	for (int i=0; i<10; i++){
		}
	    if (t2.priority < t1.priority){
		delay(t1.time);
		printf("%s\n", t1.name);
		delay(t2.time);
		printf("%s\n", t2.name);        
		}
	else{
		delay(t2.time);
		printf("%s\n", t2.name);
		delay(t1.time);
		printf("%s\n", t1.name);        
		}

return 0;
}
