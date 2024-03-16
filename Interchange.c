//Write a C program to interchange two number.
#include<stdio.h>
void main(){
    int i = 6;
    int j = 9;
    //Swap
    i = i + j;
    j = i - j;
    i = i - j;
    printf("%d %d",i,j);

}