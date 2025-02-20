#include <stdio.h>

int main() {
  
    int n,i;
    scanf("%d %d",&n,&i);
    
      n=n>>i&1;
         if(n==0)
             printf("0");
    else 
        printf("1");
    return 0;
}