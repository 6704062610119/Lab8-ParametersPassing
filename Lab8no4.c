#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_num();
void show_array(int data[], int n);
int find_duplicate(int data[], int n, int target);
void sort_score(int data[], int n);

int main() {
    int total = 4; 
    int score[100];
    int i, temp_val;
    
    srand(time(NULL));
    
    printf("Random Score: ");
    for (i = 0; i < total; i++) {
        do {
            temp_val = (rand() % 100) + 1;
        } while (find_duplicate(score, i, temp_val) == 1);
        
        score[i] = temp_val;
        printf("%d ", score[i]);
    }
    
    printf("\n------------------\n");
    
    sort_score(score, total);
    
    printf("Sorted: ");
    show_array(score, total);
    
    printf("\nTop 3 scores: ");
    for (i = total - 3; i < total; i++) {
        printf("%d ", score[i]);
    }
    
    return 0;
}

int find_duplicate(int data[], int n, int target) {
    int j;
    for (j = 0; j < n; j++) {
        if (data[j] == target) {
            return 1; 
        }
    }
    return 0; 
}

void sort_score(int data[], int n) {
    int i, j, tmp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (data[j] > data[j + 1]) {
                tmp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = tmp;
            }
        }
    }
}

void show_array(int data[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
}
