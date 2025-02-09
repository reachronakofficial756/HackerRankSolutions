#include <stdio.h>

int main() {
double income;
    scanf("%lf", &income);
    if(income<0){
        printf("INVALID");
    }
    else if(income<=250000){
        printf("0.00");
    }
    else if(income<=500000){
        double tax=(income-250000)*0.05;
        printf("%.2lf", tax);
    }
    else if(income<=1000000){
        double tax1=12500+((income-500000)*0.20);
        printf("%.2lf",tax1);
    }
    else if (income>1000000){
        double tax2=12500+100000+((income-1000000)*0.30);
            printf("%.2lf",tax2);
    }
    
    
   
    return 0;

}