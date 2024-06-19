#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
bool finAutomorphic(int n);
int main(){
    int n;
    printf("Enter a number to check if it is an Automorphic Number : ");
    scanf("%d",&n);
    int originalNumber=n;
 
    (finAutomorphic(originalNumber)) ? printf("Yes, it is an automorphic number\n") : printf("No it is not an automorphic number\n");

    return 0;
}

bool finAutomorphic(int n){
    int actualNumber=n;
    int result=0;
    int powerResult=pow(actualNumber,2);
    while(actualNumber>0){
        if(actualNumber%10 != powerResult%10){
            return false;
        }
        powerResult/=10;
        actualNumber/=10;
    }
    return true;
}
