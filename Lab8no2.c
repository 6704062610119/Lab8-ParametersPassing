#include <stdio.h> //finish till commit2
int checkscore(char std[]);

int main() {
    int i=0;
    char ans[8][10]={
        	{'A','B','A','C','C','D','E','E','A','D'},//7<---std1
			{'D','B','A','B','C','A','E','E','A','D'},//6<---std2
			{'E','D','D','A','C','B','E','E','A','D'},//5<---std3
			{'C','B','A','E','D','C','E','E','A','D'},//4<---std4
			{'A','B','D','C','C','D','E','E','A','D'},//8<---std5
			{'B','B','E','C','C','D','E','E','A','D'},//7<---std6
			{'B','B','A','C','C','D','E','E','A','D'},//7<---std7
			{'E','B','E','C','C','D','E','E','A','D'}};//7<---std8
			
	for(i=0;i<8;i++){
		printf("std %d => %d\n", (i+1), checkscore(ans[i]));
	}
	
	return 0;		
}

int checkscore(char std[]){
	char keys[10]={'D','B','D','C','C','D','A','E','A','D'};
	int i,score=0;
	for(i=0;i<10;i++){
		if(keys[i]==std[i]){
			score++;
		}
	}
	return score;
};

