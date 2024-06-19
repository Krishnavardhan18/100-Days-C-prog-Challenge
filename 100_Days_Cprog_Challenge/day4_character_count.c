// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    int i=0;
    char c[1000];
    int count=0;
    printf("Enter the paragraph: ");
    fgets(c,sizeof(c),stdin);
    while(c[i]!='\0'){
        if(c[i]!='\n')
            count++;
        
          i++;
    }
  
    printf("The characters are: %d\n",count);
    return 0;
}
