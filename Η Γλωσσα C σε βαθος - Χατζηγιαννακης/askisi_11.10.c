#include <stdio.h>
#include "genlib.h"
int main(void){
    char *ptr;
    ptr="i glossa C se vathos";
    printf("%d\n",space(ptr));
    return 0;
}
int space(char *p){
    int c=0;
    while (*p!='\0'){
        if (*p==' '){c++;
        }
        p++;
    }
    return c;
}
