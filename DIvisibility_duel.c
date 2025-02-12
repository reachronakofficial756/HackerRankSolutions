// Three contenders— X, Y, and Z are facing off in a duel of divisibility. Your task is to determine the result of this epic showdown by analyzing the relationship between X and its challengers, Y and Z.

// The rules of the duel are as follows:

// If X is divisible by Y, the output should be "Y triumphs over X!".
// If X is divisible by Z, the output should be "Z outsmarts X!".
// If X is divisible by both Y and Z, the output should be "X defeats all!".
// If X is not divisible by either Y or Z, the output should be "X remains undefeated!".
// Input Format

// A single line containing three integers X, Y, and Z

// Constraints

// 1 ≤ X, Y, Z ≤ 10^9

// Output Format

// A single line containing one of the following results:

// "X defeats all!"
// "Y triumphs over X!"
// "Z outsmarts X!"
// "X remains undefeated!"


#include <stdio.h>

int main() {

    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
     
    if(x>=1){
    if((x % y== 0) && (x%z==0)){
        printf("X defeats all!");
    }
    else if(x%y==0){
        printf("Y triumphs over X!"); 
}
    else if(x % z ==0){
        printf("Z outsmarts X!");
    }
     
    else{
        printf("X remains undefeated!");
    }
    }
    return 0;
}