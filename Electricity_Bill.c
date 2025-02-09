#include <stdio.h>

int main() {
  int unit;
 
    double totamt; 
    scanf("%d", &unit);
    
    if(unit<0){
        printf("Invalid Input!");
        return 0;
    }
    
    else if(unit<=100){
        totamt=unit*5;
        if(totamt<=1200){
                totamt=totamt-totamt*0.1;
                printf("The electricity bill is: %.2lf.", totamt);
        }
        else{
            printf("The electricity bill is: %.2lf.", totamt);
        }
    }
    else if(unit>100 && unit<=300){
        totamt=500+(unit-100)*7;
        if(totamt<=1200){
            totamt=totamt-totamt*0.1;
            printf("The electricity bill is: %.2lf.", totamt);
        }
        else{
            printf("The electricity bill is: %.2lf.", totamt);
        }
    }
     else if(unit>300){
        totamt=500+1400+(unit-300)*10;
        printf("The electricity bill is: %.2lf.", totamt);
    }
     return 0;
}