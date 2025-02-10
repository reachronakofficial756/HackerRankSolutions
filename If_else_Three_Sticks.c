// Aman has three sticks and wants to classify the shape he can form by connecting their ends. The classification is based on the following rules:

// The shape(triangle) is classified as:

// Equilateral: All three sticks are of the same length.
// Isosceles: Exactly two sticks are of the same length.
// Scalene: All three sticks have different lengths.
// However, if the sticks cannot be connected to form a triangle due to their lengths, it is classified as an Invalid shape.

// Aman needs a program that will take the lengths of the three sticks as input, validate if they can form a valid closed shape, and output the correct classification.


#include <stdio.h>

int main() {
 int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    
    if((a+b>c && b+c>a && c+a>b) && (a==b && b==c && c==a)){
        printf("Lengths: [%d, %d, %d]\nType: Equilateral\nAll sides are of the same length.",a,b,c);
    }
    else if((a+b>c && b+c>a && c+a>b) && (a==b || b==c || c==a)){
        printf("Lengths: [%d, %d, %d]\nType: Isosceles\nExactly two sides are equal.",a,b,c);
    }
    else if((a+b>c && b+c>a && c+a>b) && (a!=b && b!=c && c!=a)){
        printf("Lengths: [%d, %d, %d]\nType: Scalene\nAll sides are of different lengths.",a,b,c);
    }
    else if(!(a+b>c && b+c>a && c+a>b)){
        printf("Lengths: [%d, %d, %d]\nType: Invalid\nCannot form a valid shape.",a,b,c);
    }
    return 0;
}