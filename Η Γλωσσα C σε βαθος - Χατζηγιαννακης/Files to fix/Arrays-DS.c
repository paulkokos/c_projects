#include <stdio.h>
//#define N 4
int main(){
    int i;
    int N=4;
    scanf("%d",&N);
    int arrayA[N];
    for (i=0;i<N;i++){
        scanf("%d",&arrayA[i]);
    }
    for (i=(N-1);i>-1;i--){
        printf("%d ",arrayA[i]);
    }
    return 0;
}