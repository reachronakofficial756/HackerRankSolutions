// Write a C program to classify an integer N into one of the following categories based on specific conditions:

// Categories:

// Category A: N is divisible by 2 and 3 but not divisible by 5.
// Category B: N is greater than 20 and is the product of two distinct prime numbers within the range of [2,11].
// Valid numbers: 6, 10, 14, 15, 21, 22, 33, ...
// Category C: N is divisible by either 3 or 7 but not both, and N is a two-digit number.
// Category D: N is a perfect square less than 200.
// Valid squares: 1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, ...
// Category E: If none of the above conditions are satisfied.
// Note: Output the category that comes first in lexicographic order.

// Input Format

// A single integer N

// Constraints

// -10^3 ≤ N ≤ 10^3

// Output Format

// A single character representing the category of N ('A', 'B', 'C', 'D', or 'E').

#include <stdio.h>

int main() {
int num;
    scanf("%d",&num);
     
    if(num%6==0 && num%5!=0){
        printf("A");
}
    else if(num==21 || num==22 || num==23 || num==33 || num==35 || num==55 || num==77){
        printf("B");
    }
    else if (( num%3==0 || num%7==0) && num%21!=0 && num>9 && num<100  ){
        printf("C");
}
   
    else if(num==1 || num==4 || num==9 || num==16 || num==25 || num==36 ||num==49 || num==64 || num==81 || num==100 || num==121 || num==144 || num==169 || num==196){
        printf("D");
    }
    else {
        printf("E");
    }
       
    return 0;
}