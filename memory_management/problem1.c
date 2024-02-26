/* A basic implementation of insertion sort (not too efficient, but a very simple sorting algorithm). */

/*
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Sort an array A using insertion sort. Notice it is to be passed by reference.
void sort(int* A, int n){
	int tmp;
	int i;
	int j;

	for(i=1; i<n; i++){
		tmp = A[i];
		j=i-1;
		//For each element in A, search for where it belong in the subarray preceeding it's current location
		while(tmp<A[j] && j>=0){
			A[j+1]=A[j];
			j-=1;
		}
		A[j+1]=tmp;
	}
}

int main(){
	//Allows use to generate random numbers
	srand(time(NULL));

	//Read a user input integer and store it in n
	int n;
	printf("Enter an integer n: ");
	scanf("%d",&n);

	//Array array. Change this to become a dynamic array through malloc.
	int array[n];

	//Assign each element in the array a random number between 0 and 31,999
	int i;
	for (i=0; i<n; i++){
		array[i]=rand()%32000; //This line assigns random numbers
	}

	//Prints out the elements of the unsorted array
	int x;
	printf("The unsorted array is: ");
	for (x=0; x<n; x++){
		printf("%d ",array[x]);
	}
	printf("\n");
	
	//Calls the sort function to sort the array
	sort(array,n);
	
	//Print out the elements of the now (supposedly) sorted array.
	printf("The sorted array is: ");
	for (x=0; x<n; x++){
		printf("%d ",array[x]);
	}
	printf("\n");
	return 0;

}
*/

/* Now, replace all array index access (places where I access the array with [], such as in A[i]) in the entire program by using pointer addition instead. Also, where I create the array (line 34, int array[n];), replace that with an array creation using malloc (of same size). */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Sort an array A using insertion sort. Notice it is to be passed by reference.
void sort(int* A, int n){
	int tmp;
	int i;
	int j;

	for(i=1; i<n; i++){
		tmp = *(A+i); // instead of 'tmp = A[i];'
		j=i-1;
		//For each element in A, search for where it belong in the subarray preceeding it's current location
		while(tmp<*(A+j) && j>=0){ // 'tmp<A[j]'
			*(A+j+1) = *(A+j);  // A[j+1]=A[j];
			j-=1;
		}
		*(A+j+1) = tmp;   // A[j+1]=tmp;
	}
}

int main(){
	//Allows use to generate random numbers
	srand(time(NULL));

	//Read a user input integer and store it in n
	int n;
	printf("Enter an integer n: ");
	scanf("%d",&n);

	//Array array. Change this to become a dynamic array through malloc.
	int* array = malloc(n*sizeof(int));  // int array[n];

	//Assign each element in the array a random number between 0 and 31,999
	int i;
	for (i=0; i<n; i++){
		*(array+i) = rand()%32000; // array[i]=rand()%32000; //This line assigns random numbers
	}

	//Prints out the elements of the unsorted array
	int x;
	printf("The unsorted array is: ");
	for (x=0; x<n; x++){
		printf("%d ", *(array+x));  // printf("%d ",array[x]);
	}
	printf("\n");
	
	//Calls the sort function to sort the array
	sort(array,n);
	
	//Print out the elements of the now (supposedly) sorted array.
	printf("The sorted array is: ");
	for (x=0; x<n; x++){
		printf("%d ", *(array+x)); // printf("%d ",array[x]);
	}
	printf("\n");
	free(array);
	return 0;

}


