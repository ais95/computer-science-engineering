#include<stdio.h>
int main(){
    // variable declare
    int input1, input2, input3, input4, input5;

    //Get 1st number from input
    printf("Enter 1st Number = ");
    scanf("%d", &input1);
    /* printf("%d\n",input1); */

    //Get 2nd number from input
    printf("Enter 2nd Number = ");
    scanf("%d", &input2);
    /* printf("%lf\n", input2); */

    //1st and 2nd number addition
    int add1 = (input1+input2);
    printf("Result of 1st & 2nd number is: %d\n", add1 );

    //Get 3rd number from input
    printf("Enter 3rd Number = ");
    scanf("%d", &input3);

    //Get 3rd number from input
    printf("Enter 4th Number = ");
    scanf("%d", &input4);

    //1st and 2nd number addition
    int add2 = (input3+input4);
    printf("Result of 3rd & 4th number is: %d\n", add2 );

    //Enter 5th number value and multiply
    printf("Enter 5th number input = ");
    scanf("%d", &input5);
    printf("The result of total multiplication is: %d\n", add1*add2*input5);

    return(0);
}
