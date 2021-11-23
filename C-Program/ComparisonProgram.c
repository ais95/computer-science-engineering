#include<stdio.h>
int main(){
    int valFirst, valSecond;
    printf("Enter your first number = ");
    scanf("%d", &valFirst);
    printf("Enter your second number = ");
    scanf("%d", &valSecond);

    if(valFirst > valSecond){
        printf("%d",valFirst);
        printf(" Is the greater then: %d \n ", valSecond);
    }
    else if(valFirst < valSecond){
        printf("%d", valFirst);
        printf(" Is smaller then: %d \n ", valSecond);
    }
    else if(valFirst == valSecond){
        printf("Your two input number is same: %d");
    }
    else{
        printf("Your input is wrong");
    }

    return 0;
}
