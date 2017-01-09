#include <stdio.h>
int main(void){
int a,b,*p,*m;
a=10;
b=20;
p=&a;
m=&b;
m=p;
printf("%p\n",p);
printf("%p\n",m);
printf("%d",p);
printf("%d",m);


    return 0;
}
