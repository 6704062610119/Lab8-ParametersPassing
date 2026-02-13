#include <stdio.h> 
int checkscore(char std[],char key[]);
int firstright(char std[][10],char key[],int n);
int hardest(char std[][10],char key[],int freq[],int row, int column);

int main() {
    int i=0,freq[10]={0};
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
	printf("Hardest is no.%d\n",hardest(ans,keys,freq,8,10)); //2.3

	
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
}

int firstright(char std[][10],char key[],int n){ //2.2
	int i,count=0;
	for(i=0;i<n;i++){
		if(std[i][0] == key[0]){
			count++;
		}
	}
	return count;
}

int hardest(char std[][10],char key[],int freq[],int row, int column){
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			if(std[i][j] == key[j]){
				freq[j]++;
			}
		}
	}
	
	int min=freq[0],hard=1;
	for(i=0;i<column;i++){
		if(min>freq[i]){
			min = freq[i];
			hard = i+1;
		}
	}
	return hard;
}



