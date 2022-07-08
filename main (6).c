#include<stdio.h>
struct complex
{
    int real,imaginary;
}
z1,z2;
int main()
{
    struct complex z3;
    scanf("%d %d",&z1.real,&z1.imaginary);
    z2.real=-4;
    z2.imaginary=-6;
    z3.real=z1.real+z2.real;
    z3.imaginary=z1.imaginary+z2.imaginary;
    if(z3.imaginary<0)
    printf("results of z3 =  %d-i%d\n",z3.real,(z3.imaginary));
}
