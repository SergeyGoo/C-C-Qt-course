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

int sort_bubble(int arr[1000]){
	for(int i = 0 ; i < 999; i++) {
		for(int j = 0 ; j < 999-i; j++) {
			if(arr[j] > arr[j+1]) {
				int tmp = arr[j];
				arr[j] = arr[j+1] ;
				arr[j+1] = tmp;
				}
			}
		}
return 0;
}

int sort_mins(int arr[1000]){
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
return 0;
}



int main(){
	int a=0;
	int b=0;
	int c=0;
	int arr0[10][1000];
	int arr1[10][1000];
	int arr_qsort[10];
	int arr_bubble_sort[10];
	int arr_mins_sort[10];
	clock_t start, stop;
	
	arr_gen();
	
	for (int i=0; i<10; i++){
		for (int j = 0; j<10; j++){
			arr0[i][j]=arr[i][j];
			arr1[i][j]=arr[i][j];
			}
		}

	for (int a=0; a<10; a++){	
		start = clock();
		qsort(arr[a], 1000, sizeof (int), qsrt);
		stop = clock();
		arr_qsort[a] = stop - start;
		}	

	for (int a=0; a<10; a++){	
		start = clock();
		sort_bubble(arr0[a]);
		stop = clock();
		arr_bubble_sort[a] = stop - start;
		}

	for (int a=0; a<10; a++){	
		start = clock();
		sort_mins(arr1[a]);
		stop = clock();
		arr_mins_sort[a] = stop - start;
		}
	
	qsort(arr_qsort, 10, sizeof (int), qsrt);
	qsort(arr_bubble_sort, 10, sizeof (int), qsrt);
	qsort(arr_mins_sort, 10, sizeof (int), qsrt);
	
	for (int i = 0; i<10; i++){
		a += arr_qsort[i];
		b += arr_bubble_sort[i];
		c += arr_mins_sort[i];
		}
 
	printf("Min time of qsort is %d \nMax time of qsort is %d \nMedium time of qsort is %d\n", arr_qsort[0], arr_qsort[9], a/10);
	printf("Min time of bubblesort is %d \nMax time of bubblesort is %d \nMedium time of bubblesort is %d\n", arr_bubble_sort[0], arr_bubble_sort[9], b/10);
	printf("Min time of minimumsort is %d \nMax time of minimumsort is %d \nMedium time of minimumsort is %d\n", arr_mins_sort[0], arr_mins_sort[9], c/10);
	
	return 0;
}
