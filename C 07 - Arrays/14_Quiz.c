#include <stdio.h>
  //2DArray of table 2 and 3.
void storeTable(int array[][10], int n, int m, int number); 

int main(){
    int tables[2][10];
    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);

    for(int i = 0; i<10; i++){
        printf("%d\t", tables[0][i]);
    }
    printf("\n");
    for(int i = 0; i<10; i++){
        printf("%d\t", tables[1][i]);
    }

    return 0;
}

void storeTable(int array[][10], int n, int m, int number){
    for(int i =0; i<m; i++){
        array[n][i] = number * (i+1);
    }
}