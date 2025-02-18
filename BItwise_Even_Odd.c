#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    
    n=n&1;
    
    if(n==0){
        printf("Even");
    }
    else{
       printf("Odd"); 
    }
    return 0;
}