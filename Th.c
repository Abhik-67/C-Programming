//The code output is 102. this is firstNaukri assesment mcq question.

#include<stdio.h>
#define x(a,b) (a > b ? a : b)
int func(int arr[], int n){
if(n==2)
return x(arr[0],arr[1]);
return x(arr[n-1],func(arr,n-1));
}
int main(){
    int arr[10] ={23,45,2,20,97,45,102,67,89,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("%d",func(arr,n));
}