#include<stdio.h>
#include <time.h> 
#include <stdlib.h> 


int main(){
    srand48((unsigned int)time(NULL));  
    int N, i, currLoc;
    double arr[100],temp;

    printf("Enter the value how many random numbers are to be generated:\n");
    scanf("%d",&N);
    for(i=0;i<N;i++){
        arr[i] = drand48(); 
        printf("%lf\n",arr[i]);
    }
    printf("\n");

    printf("The Unsorted Array Elements are:\n");
    for(i = 0;i<N;i++){
        printf("%lf\n",arr[i]);
    }
    printf("\n");

	for (i=1; i<N; i++){
	    currLoc = i;
	    while (currLoc > 0 && arr[currLoc-1] > arr[currLoc]){
		temp = arr[currLoc];
		arr[currLoc] = arr[currLoc-1];
		arr[currLoc-1] = temp;
		currLoc--;
	    }
	}
    printf("\n");
    printf("The Sorted Array is:\n");
    for(i=0;i<N;i++){
        printf("%lf\n",arr[i]);
    }
		
}
