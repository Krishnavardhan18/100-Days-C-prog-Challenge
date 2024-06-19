#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int findNumofDigits(int n);
int main(){
    int n,remainder;
    int originalNumber;
    int result=0;
    
    printf("Enter the number to find if it is Armstrong or not: ");
    scanf("%d",&n);
    originalNumber=n;
    
    int digits = findNumofDigits(originalNumber);
    
    while(originalNumber!=0){
        remainder = originalNumber%10;  //To get last number of the original number
        result = result + pow(remainder,digits);
        originalNumber/=10;//To eliminate the last number
    }

    if(result == n) {
        printf("Your integer is an armstrong\n");
    }
    else {
        printf("Your given integer is not an armstrong\n"); 
    }
}


int findNumofDigits(int n){
    int count=0;
    int number = n;
    if(number==0)
        count = 1;
    else{
        while(number!=0){
            number/=10;
            count=count+1;
        }
    }
    return count;
    
}
