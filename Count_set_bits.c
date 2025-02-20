// only check starting four bits
#include <stdio.h>

int main() {

   int n;
    scanf("%d",&n);
    int count=0;
    
    if(n&1) count++;    
    if (n&2) count++;       
    if (n&4) count++;         
    if (n&8) count++;
    printf("%d",count);
    
    return 0;
}