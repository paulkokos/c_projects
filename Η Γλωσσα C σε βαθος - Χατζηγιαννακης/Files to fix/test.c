#include <stdio.h>
#include <stdlib.h>
#include <random.h>
int main(){
    int i,j,a[5][5];
    int *point;
    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            a[i][j]=rand();
            printf("%d\t ",a[i][j]);
        }
        printf("\n");
    }
    point=&a(2*5+3)*4;
    printf("%d",point);
    return 0;
}
