#include<stdio.h>
int main(){
    
int i =1;
i++;

switch(i--)
{
    case 1:
    printf("CS");
    break;
    case 2:
    printf("mock");			// mock will print as output
    break;
    default:
    printf("Interviews");
    break;
}
return 0;
}

//The post Decremenation will not affect the part immediately so the variable i=2 that is switch(2).

