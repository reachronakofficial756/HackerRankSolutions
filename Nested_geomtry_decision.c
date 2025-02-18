// Write a program to determine the type of 2D geometric figure based on the following properties:

// Number of sides (n) – can be 3, 4, or 0 (for a circle).
// Side lengths (a,b,c,d) – three sides if n=3, four if n=4, none for n=0.
// Angles (A,B,C,D) in degrees – three angles if n=3, four if n=4, none for n=0..
// The program should classify the figure into one of these categories:

// Equilateral Triangle: n=3, all sides are equal, and all angles are 60°.
// Isosceles Triangle: n=3, two sides are equal and the two angles opposite to the equal sides are congruent to each other
// Scalene Triangle: n=3, all sides and angles are different.
// Square: n=4, all sides are equal, and all angles are 90°.
// Rectangle: n=4, opposite sides are equal, and all angles are 90°.
// Rhombus: n=4, all sides are equal, but not all angles are 90°. Opposite angles are equal in a rhombus.
// Parallelogram: n=4, opposite sides and opposite angles are equal.
// Circle: n=0.
// Invalid Figure: If the input is invalid or does not form a valid figure.
// Input Format

// An integer n: The number of sides
// Three/Four/Zero integers (a,b,c,d): Positive values for side lengths
// Three/Four/Zero integers (A,B,C,D): Angles in degrees
// Constraints

// n ∈ {0,3,4}.
// -10^6 ≤ a,b,c,d ≤ 1000.
// -10^6 ≤ A,B,C,D < 180.
// Output Format

// Print one of these:

// Equilateral Triangle
// Isosceles Triangle
// Scalene Triangle
// Square
// Rectangle
// Rhombus
// Parallelogram
// Circle
// Invalid Figure


#include <stdio.h>

int main() {
    int sides,len1,len2,len3,len4,ang1,ang2,ang3,ang4;
    scanf("%d",&sides);
    int quad=360;
    int ang=180;
    if(sides!=0 && sides!=3 && sides!=4){
        printf("Invalid Figure");
        return 0;
    }
    if(sides==4){
       scanf("%d %d %d %d %d %d %d %d",&len1,&len2,&len3,&len4,&ang1,&ang2,&ang3,&ang4); 
        if(ang1+ang2+ang3+ang4!=quad){
             printf("Invalid Figure");
        return 0;
        }
         if (len1==len2 && len2==len3 && len3==len4) {
            if (ang1==90 && ang2==90 && ang3==90 && ang4==90) {
                printf("Square\n");
            } else if (ang1==ang3 && ang2==ang4) {
                printf("Rhombus\n");
            } else {
                printf("Invalid Figure\n");
            }
        } else if (len1==len3 && len2==len4) {
            if (ang1==90 && ang2==90 && ang3==90 && ang4==90) {
                printf("Rectangle\n");
            } else if (len1==len3 && len2==len4 && ang1==ang3 && ang2==ang4) {
                printf("Parallelogram\n");
            } else {
                printf("Invalid Figure\n");
            }
        } else {
            printf("Invalid Figure\n");
        }
    }
    
    if(sides==3){
        scanf("%d %d %d %d %d %d ",&len1,&len2,&len3,&ang1,&ang2,&ang3);
        
         if(len1 + len2 <= len3 || len1 + len3 <= len2 || len2 + len3 <= len1 || ang1 + ang2 + ang3 != ang){
             printf("Invalid Figure");
             return 0;
         }
        
        if(len1==len2 && len2==len3 && len3==len1 && ang1==60 && ang2==60 && ang3==60){
            printf("Equilateral Triangle");
        }
    else if(len1==len2 || len2==len3 || len3==len1) {
        printf("Isosceles Triangle");
    }
    else{
         printf("Scalene Triangle");
    }
}
    
   if(sides==0){
       printf("Circle");
   }
    return 0;
}