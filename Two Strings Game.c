#include <stdio.h>
int main(){
    int N;
    int arrayA[N]={1,4,3,2};
    scanf("%d",&N);
    int i;
    for (i=0;i<N;i++){
        printf("%d ",arrayA[i]);
    }
    return 0;
}