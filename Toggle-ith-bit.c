#include <stdio.h>

int main() {

   int i,n;
    scanf("%d",&n);
    scanf("%d",&i);
    
    n=n^1<<i;
    
    printf("%d",n);
    return 0;
}