#include <stdio.h>
int main() {
    int n,r,sum= 0,temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp=n;
    while(n>0)
    {
    r=n%10;
    sum=(r*r*r);
    n=n/10;
    }
    if (temp==sum){
        printf("%d is an Armstrong number.", num);
    }  
    else
     {
        printf("%d is not an Armstrong number.", num);
     }

    return 0;
}
