/*Реализовать менеджер «задач» с помощью стека

Реализовать менеджер «задач» с помощью очереди

Оба менеджера должны выполнять базовые операции(push,pop,peek). Генерация «задач»
(случайно и вручную), сообщение об их выполнении, сообщение о том, что «задач» больше нет,
вывод информации о том сколько «задач» осталось.

Соответственно «задача» представляет из себя симуляцию, содержащую имя и время
выполнения. Время выполнения – это просто задержка с отсчетом секунд(сколько осталось до
конца выполнения «задачи»). При генерации каждой «задачи» должен быть назначен приоритет,
по которому она расположится в стеке или очереди.

Программа должна работать в 2х режимах. Редактирование стека/очереди и «выполнение задач».

В качестве дополнительного задания нужно сделать критическую задачу, которая будет
выполняться вне очереди.*/
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
