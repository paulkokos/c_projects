#include <stdio.h>
#include <stdlib.h>
int main(){
    char a=' ';
    char b=' ';
    printf("dose proto xaraktira");
    scanf("%c",&a);
    getchar();
    fflush(stdin);
    printf("dose deytero xaraktira");
    scanf(" %c",&b);
    printf("%c\n",a);
    printf("%c\n",b);

}
