#include<stdio.h>
int array[10];
void printArrayValues(int i){
    i=0;
    array[i]=i++;
    array[i]=++i;
    array[i]=i+1;
    printf("%d%d%d", array[0], array[1], array[2], array[3], i);
    printArrayValues(414);
}