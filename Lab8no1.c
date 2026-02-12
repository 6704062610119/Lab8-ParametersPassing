#include <stdio.h> 

int findMax(int num[],int numsize);
void printAr(int myAr[],int Arsize);
void addone(int number[], int add[], int sizeNum); //1.1
void addtwo(int number[], int pos[], int x, int sizeNum, int sizePos); //1.2
void addthree(int number[], int pos[][2], int sizNum, int sizePosrow ); //1.3


main() {
	int number[5] = {20,50,100,199,9};
	int score[5] = {1,2,3,4,5};
	int max;

	//max = findMax(number);
	//printf("Maximum of these number is %d\n",max);
	
	printf("//------addone---------------------------------//\n");
	printAr(number,5);
	printAr(score,5);
	addone(number,score,5);
	printAr(number,5);
	
	printf("//------addtwo---------------------------------//\n");
	int position[3] = {1,3,5};
	int x = 5;
	printAr(number,5);
	addtwo(number,position,x,5,3);
	printAr(number,5);
	
	printf("//------addthree------------------------------//\n");
	int pos[3][2] = { {1 , 1} , 
					  {3 , 2} , 
					  {5 , 3} };
	printAr(number,5);
	addthree(number,pos,5,3);
	printAr(number,5);

}

int findMax(int num[],int numsize) {
	int maximum,i=0;
	maximum = num[i];

	for(i=0;i<5;i++) {
		if(num[i] > maximum)
			maximum = num[i];
	}
	return maximum;
}

void printAr(int myAr[],int Arsize){
	int i;
	for(i=0;i<Arsize;i++){
		printf("number[%d] : %d\n",i,myAr[i]);
	}
	printf("\n");
	return;
};

void addone(int number[], int add[], int sizeNum){
	int i;
	for(i=0;i<sizeNum;i++){
		number[i]=number[i]+add[i];
	}
	return;
};

void addtwo(int number[], int pos[], int x, int sizeNum, int sizePos){
	int i;
	for(i=0;i<sizePos;i++){
		pos[i]--;
	} //turn position to index
	
	for(i=0;i<sizePos;i++){
		int changeindex = pos[i];
		
		if(changeindex>=0 && changeindex<sizeNum){
			number[changeindex] += x;
		}
	} //add x
	
	return;
};

void addthree(int number[], int pos[][2], int sizeNum, int sizePosrow ){
	int i;
	for(i=0;i<sizePosrow;i++){
		int changeindex = pos[i][0]-1; //-1 cus change position to index
		int value = pos[i][1];
		if(changeindex>=0 && changeindex<sizeNum){
			number[changeindex] += value;
		}
	}
	return;
};

