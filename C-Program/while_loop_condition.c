#include <stdio.h>
int main () {
    int inputVal=1;
   /* while loop execution */
    while( inputVal>0) {
        printf("Enter the number: ");
        scanf("%d", &inputVal);
        printf("\nThe number is: %d\n",inputVal);
        if(inputVal%10==0){
            printf("The program is end... \n");
            break;
        }
    }
   return 0;
}
