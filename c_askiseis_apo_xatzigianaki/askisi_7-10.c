#include <stdio.h>
int main(void){
    unsigned int posotita;
    float timi,sum;
    printf("dose posotita:");
    scanf("%d",&posotita);
    printf("\ndose timi temaxioy:");
    scanf("%f",&timi);
    if (posotita<20){
        sum=(posotita*timi)*1.10;
        printf("%8.2f",sum);
    }else if (posotita>80 &&(posotita<100)){
        sum=((posotita*timi)-(posotita*timi)*0.15);
        printf("%8.2f",sum);
    }else if (posotita>=100){
        sum=((posotita*timi)-((posotita*timi)*0.23));
        printf("%8.2f",sum);
    }
    return 0;
}
