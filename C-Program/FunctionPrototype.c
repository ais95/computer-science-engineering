//#include<stdio.h>
//
//int print(){
//    printf("\n Welcome the function prototype \n");
//    return 0;
//}
//int main(){
//    printf(" \n Hi, I'm Ariful Islam \n");
//
//    print ();
//    return 0;
//}

#include <stdio.h>

/***
READ ME
The subtract function takes two integer arguments and
subtract smaller one from the greater one and returns
the subtracted value. Complete the function
***/

int subtract(int x, int y)
{
    return(x-y);
}

int main()
{
    int a, b, result;
    scanf("%d %d", &a, &b);
    result = subtract(a, b);
    printf("Result = %d", result);

    return 0;
}
