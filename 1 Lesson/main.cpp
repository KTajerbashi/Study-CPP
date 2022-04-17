#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
int main() {
    /*
    int i1,i2,i3;
    float f1,f2,f3;
    double  d1,d2,d3;
    char c1,c2,c3;
    long l1,l2,l3;

    cout<<"Hello World C++ "<<endl;
    printf("Hell World C\n");

    i1=10;  i2=20;  i3=i1+i2;

    int *p1,*p2,*p3;

    p1=&i1;
    p2=&i2;
    p3=&i3;

    printf("\n=====================\n");
    printf("%d + %d = %d\n",i1,i2,i3);

    printf("\n=====================\n");
    printf("%p : %p : %p\n",p1,p2,p3);
    printf("%d : %d : %d\n",p1,p2,p3);

    printf("\n=====================\n");
    printf("%d : %d : %d\n",*p1,*p2,*p3);

    printf("\n=====================\n");
    printf("%p : %p : %p\n",&*p1,&*p2,&*p3);
    printf("%d : %d : %d\n",&*p1,&*p2,&*p3);

    printf("\n=====================\n");
    printf("%d : %d : %d\n",*&*p1,*&*p2,*&*p3);
    printf("%p : %p : %p\n",*&*p1,*&*p2,*&*p3);

    printf("\n=====================\n");
    printf("%d : %d : %d\n",&*&*p1,&*&*p2,&*&*p3);
    printf("%p : %p : %p\n",&*&*p1,&*&*p2,&*&*p3);

    printf("\n=====================\n");
    printf("%d : %d : %d\n",*&*&*p1,*&*&*p2,*&*&*p3);
    printf("%p : %p : %p\n",*&*&*p1,*&*&*p2,*&*&*p3);

    printf("\n=====================\n");
*/
    const int a=20;
    const int *p=&a;

    printf("%d : %d : %d",a,p,*p);



    return 0;
}
