#include <stdio.h>

long long int factorial(int);

long long int factorial(int n){
    if(
        n==1||n==0){   // base condition
        return 1;
    }

    // factorial(n)= factorial(n-1)xn
    return factorial(n-1)*n;
}
    
long long int main(){
    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);    
    printf("the factorial of %d is %lld\n", a,factorial(a));
    return 0;
} 