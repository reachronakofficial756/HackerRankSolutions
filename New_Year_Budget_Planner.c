// This New Year, Naina (an experienced event planner) is planning a celebration and needs your help to determine if they can host it within their budget. Naina has a list of expenses for different activities and items, along with specific conditions for hosting the celebration. Write a program to evaluate whether Naina can host the celebration or not.

// Conditions to Host the Celebration:

// The total cost of the celebration must not exceed the budget.
// The number of guests must be greater than 5 and less than or equal to 50.
// At least one of the following conditions must hold:
// The decoration cost is less than 30% of the budget.
// The total food cost is less than 50% of the budget.
// If the number of guests exceeds 25, there must be a music arrangement (i.e., musicCost > 0).
// Input Format

// The input consists of six integers:

// budget: Total budget for the celebration (in dollars).
// numGuests: Number of guests invited.
// foodCostPerGuest: Cost of food per guest (in dollars).
// decorationCost: Cost of decorations (in dollars).
// musicCost: Cost of hiring a DJ or music system (in dollars).
// extraExpenses: Additional expenses for the celebration (in dollars).
// Constraints

// 1 ≤ budget ≤ 10 1 ≤ numGuests ≤ 100 1 ≤ foodCostPerGuest,decorationCost,musicCost,extraExpenses ≤ 10^4

// Output Format

// Output a single line:

// "Celebration Approved" if Naina can host the celebration within the given conditions.
// "Celebration Denied" otherwise.



#include <stdio.h>

int main() {

    int B,NG,FCPG,DC,MC,EE;
    int cost,con1,con2;
    scanf("%d/n",&B);
    scanf("%d/n",&NG);
    scanf("%d/n",&FCPG);
    scanf("%d/n",&DC);
    scanf("%d/n",&MC);
    scanf("%d/n",&EE);
    
     cost= (FCPG*NG)+DC+MC+EE;
    
     con1=B*0.3>DC;
     con2=B*0.5>(FCPG*NG);
        
     if(NG>5 && NG<=50 && (con1 || con2) && !(NG>25 && MC<=0) && (cost<=B)){
            printf("Celebration Approved");
        } else {
            printf("Celebration Denied");
        }
    
    return 0;
}