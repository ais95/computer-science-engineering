#include<stdio.h>
int main(){
    int number1, number2, number3, newNumber;
    printf("Enter the first number: = ");
    scanf("%d", &number1);
    printf("Enter the second number: = ");
    scanf("%d", &number2);
    printf("Enter the third number: = ");
    scanf("%d", &number3);

    if(number1 >= number2){
        newNumber = number1;
    }
    else{
        newNumber = number2;
    }

    if(newNumber > number3){
        printf("The greater number is: %d", newNumber);
    }
    else{
        printf("The greater number is: %d", number3);
    }
    return 0;
}
