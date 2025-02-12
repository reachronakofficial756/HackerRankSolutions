#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int ang;
    
    scanf("%d",&ang);
    
    if(ang%360==0 && ang>0){
        printf("Full Rotation");
        return 0;
    }
    
    ang = ang % 360;


   if(ang>=0 && ang<90){
        printf("Acute Angle");
    }
    else if(ang==90){
        printf("Right Angle");
    }
    else if(ang<180){
        printf("Obtuse Angle");
    }
    else if(ang==180){
        printf("Straight Angle");
    }
    else if(ang<360){
        printf("Reflex Angle");
    }
   
   
    return 0;
}
