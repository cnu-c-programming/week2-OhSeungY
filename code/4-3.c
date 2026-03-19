#include <stdio.h>

int main()
{
    int x;
    int isPrime = 1;

    scanf("%d", &x);
    if(x == 1){
        isPrime = 0;
    }
    else{
        for(int i=2; i<x; i++){
            if(x % i == 0){
                isPrime = 0;
            }
        }
    }
    if(isPrime == 1){
        printf("true");
    }
    else {
        printf("false");
    }
    
    return 0;
}

