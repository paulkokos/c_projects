#include <stdio.h>
#include <stdlib.h>
int getch(){
    int ch;
    do{
    ch=getchar();
    }while(ch!='\n' && ch!=EOF);
}
int main(void){
    char ch;
    while (ch!=97)
        ch=getchar();
        printf("epiteloys to patises!!!\n");
    return 0;
}
