#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,value,modulo;
    printf("dose proto akaireo: ");
    scanf("%d",&m);
    printf("dose deytero akaireo: ");
    scanf("%d",&n);
    if (n==0){printf("o EKP einai %d",m);}
    if (m<n){
    value=m;
    m=n;
    n=value;
    }
    modulo=m%n;
    if (modulo==0){}
    //printf("%d %d",m,n);




    return 0;
}
