#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr[10][1000];

int arr_gen(){
	for (int j = 0; j<10; j++){
		for (int i=0; i<1000; i++){
			arr[j][i]=0+rand()%100;}}		
return 0;}

int qsrt(const void *a, const void *b) {
     return *(int*)a - *(int*)b;
}

/*int sort_bubble(){
	for(int i = 0 ; i < 999; i++) {
		for(int j = 0 ; j < 999-i; j++) {
			if(arr[j] > arr[j+1]) {
				int tmp = arr[j];
				arr[j] = arr[j+1] ;
				arr[j+1] = tmp;
				}
			}
		}
	}

int sort_mins(){
	for(int i = 0; i < 1000; i++) {
		int k = i; int buf = arr[i];
		for(int j=i+1; j < 1000; j++){
			if (arr[j] < buf) {
				k = j; buf = arr[j];
				arr[k] = arr[i]; 
				arr[i] = buf;
				}
			}
		}	
}
*/
int arr_qsort[10];



int main(){
	
	clock_t start, stop;
	arr_gen();
//	for (int i=0; i<1000; i++){
//		printf("%d ", arr[i]);}
	for (int a=0; a<10; a++){	
		start = clock();
		qsort(arr[a], 1000, sizeof (int), qsrt);
		stop = clock();
		arr_qsort[a] = stop - start;
		}	
	for (int j=0; j<10; j++){		
		for (int i=0; i<1000; i++){
			printf("%d ", arr[j][i]);}}
	for (int j=0; j<10; j++){
		printf("Time of '%d'is %d\n", j, arr_qsort[j]);}
	/*printf ("Time for QuickSort is: %ld tps\n", (stop-start));
	arr_gen();
	start = clock();
	sort_bubble();
	stop = clock();
	printf ("Time for BubbleSort is: %ld tps\n", (stop-start));
	arr_gen();
	start = clock();
	sort_mins();
	stop = clock();
	printf ("Time for MinimumSort is: %ld tps\n", (stop-start));*/
	return 0;
}



