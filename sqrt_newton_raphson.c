#include<stdio.h>
void main() {
    float n;
    float sqroot(float,float);
    printf("Enter a number:");
    scanf("%f",&n);
    sqroot(n/2,n);
}
float sqroot(float x,float n) {
    float t;
    t=((x*x)+n)/(2*x);
    if(t==x)
        printf("Square Root:%f\n",t);
    else
        sqroot(t,n);
}
