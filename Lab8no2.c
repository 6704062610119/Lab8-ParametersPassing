#include <stdio.h> 
int checkscore(char std[],char key[]);
int firstright(char std[][10],char key[],int n);

int main() {
    int i=0,right=0;
    char ans[8][10]={
        	{'A','B','A','C','C','D','E','E','A','D'},//7<---std1
			{'D','B','A','B','C','A','E','E','A','D'},//6<---std2
			{'E','D','D','A','C','B','E','E','A','D'},//5<---std3
			{'C','B','A','E','D','C','E','E','A','D'},//4<---std4
			{'A','B','D','C','C','D','E','E','A','D'},//8<---std5
			{'B','B','E','C','C','D','E','E','A','D'},//7<---std6
			{'B','B','A','C','C','D','E','E','A','D'},//7<---std7
			{'E','B','E','C','C','D','E','E','A','D'}};//7<---std8
	
	char keys[10]={'D','B','D','C','C','D','A','E','A','D'};
			
	for(i=0;i<8;i++){ //2.1
		printf("std %d => %d\n", (i+1), checkscore(ans[i],keys));
	}
	
	printf("No.1 correct: %d\n",firstright(ans,keys,8)); //2.2

	
	return 0;		
}

int checkscore(char std[],char key[]){ //2.1
	int i,score=0;
	for(i=0;i<10;i++){
		if(key[i]==std[i]){
			score++;
		}
	}
	return score;
};

int firstright(char std[][10],char key[],int n){ //2.2
	int i,count=0;
	for(i=0;i<n;i++){
		if(std[i][0] == key[0]){
			count++;
		}
	}
	return count;
};


