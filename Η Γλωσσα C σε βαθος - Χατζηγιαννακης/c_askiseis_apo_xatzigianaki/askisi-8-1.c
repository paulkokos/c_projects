#include <stdio.h>
#include <stdlib.h>
int main(void){
    unsigned int a=1;
    while (a>0){
        printf(" %x",a++);
        pause("2");
    }
    return 0;
}
