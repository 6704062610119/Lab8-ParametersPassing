#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random1to100();
void printAr(int numAr[],int numArSize);
int checkNum(int numAr[],int numArSize);
int searchNum(int numAr[],int numArSize,int target);

int main() {
    int N,i;
    int A[100];
    scanf("%d",&N);
    if (N>100) 
        N=100;
    srand(time(NULL));
    for (i=0;i<N;i++)
        A[i]=checkNum(A,i);
       
    printf("\n********\n");
    printAr(A,N);
    
    return 0;
}
void printAr(int numAr[],int numArSize) {
    int i;
    for (i=0;i<numArSize;i++)
        printf("%d ",numAr[i]);
} 

int checkNum(int numAr[],int numArSize) {
    int rnum;
    rnum=random1to100();
    while (searchNum(numAr,numArSize,rnum)) {
        rnum=random1to100();
    }
    return rnum; 
}

int searchNum(int numAr[],int numArSize, int target) {
	int i, found = 0; // Linear Search 
    for (i = 0; i < numArSize; i++) {
        if (numAr[i] == target) {
            found = 1; 
            break;     
        }
    }
    return found;
}

int random1to100() {
    int random_num = (rand() % 100) + 1;
    printf("%d ", random_num);
    return random_num;
}

