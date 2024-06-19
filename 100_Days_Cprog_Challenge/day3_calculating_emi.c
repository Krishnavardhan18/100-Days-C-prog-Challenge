#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float calculateInterest(float,float,float);
float main(){
    float p,t,r;
    printf("Enter the Principal amount: ");
    scanf("%f",&p);
    printf("\nEnter the Rate of interest: ");
    scanf("%f",&r);
    printf("\nEnter the tenure in years: ");
    scanf("%f",&t);
    float principalNumber=p;
    float rateofInterest=r;
    float tenure=t;
    int EMI = calculateInterest(principalNumber,rateofInterest,tenure);
    printf("Monthly EMI: Rs. %d\n", EMI);
}
float calculateInterest(float principalNumber,float rateofInterest,float tenure){
    
    float rateofInterest_permonth = rateofInterest/(12*100);
    
    float EMI;
    float time = tenure*12;
    float oneplusr = pow((1+rateofInterest_permonth),time);
    EMI = (principalNumber*rateofInterest_permonth*oneplusr)/(oneplusr-1);
    return EMI;
}




