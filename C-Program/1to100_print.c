#include<stdio.h>
int main(){
    int i, sum=0;
    for(i=1; i <= 100; i++){
        printf("The number is %d, \n", i);
        if(i%3==0 && i%5==0){
            /* printf("%d \n", i); */
            sum = sum+i;
        }
        else{
            continue;
        }
    }
    printf("\nTotal some of divisible number of 3 AND 5 is: %d\n", sum);
    return 0;
}
