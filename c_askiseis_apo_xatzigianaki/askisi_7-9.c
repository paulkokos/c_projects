#include <stdio.h>
int main(void){
    int xrimata,kafedes,diafora;
    float sum_xrimata,sum_kafedes;
    printf("dose xrimata se pente euro: ");
    scanf("%d",&xrimata);
    xrimata*=5;
    //printf("\n%d",xrimata);
    printf("\ndose arithmo kafedon: ");
    scanf("%d",&kafedes);
    //printf("\n%d",kafedes);
    sum_kafedes=kafedes*0.70;
    sum_xrimata=xrimata-sum_kafedes;
    //printf("\n%f",sum_kafedes);
    //printf("\n%f",sum_xrimata);
    if(xrimata>=sum_kafedes){
            diafora=((int)sum_xrimata/2);}
    sum_xrimata=sum_xrimata-(diafora*2);
    printf("\n2 euro: %d",diafora);
    diafora=((int)sum_xrimata/1);
    sum_xrimata=sum_xrimata-(diafora*1);
    printf("\n1 euro: %d",diafora);
    diafora=(sum_xrimata/0.5);
    sum_xrimata=sum_xrimata-(diafora*0.5);
    printf("\n50 lepta: %d",diafora);
    diafora=(sum_xrimata/0.2);
    sum_xrimata=sum_xrimata-(diafora*0.2);
    printf("\n20 lepta: %d",diafora);
    diafora=(sum_xrimata/0.1);
    sum_xrimata=sum_xrimata-(diafora*0.1);
    printf("\n10 lepta: %d",diafora);
    }else{
        printf("\nden eparkoyn ta xrimata");
    }
    return 0;
}
