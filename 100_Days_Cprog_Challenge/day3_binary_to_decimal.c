#include <stdio.h>
#include <math.h>
int binary_to_deciaml(int n){
    int remainder; int i=0;int result=0;
    int originalNumber=n;
    while((originalNumber)>0){
        remainder = originalNumber%10;//Fetches last digit
        originalNumber/=10;
        result += remainder*pow(2,i);
        i++;
    }
    return result;
}
int main() {
    int n;
    printf("Enter a Binary value: ");
    scanf("%d",&n);
    int originalNumber=n;
    int result = binary_to_deciaml(originalNumber);
    printf("The converted Decimal value is: %d\n",result);
    return 0;
}

