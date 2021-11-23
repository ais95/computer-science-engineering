#include <stdio.h>
void print_Star_Line(int number_of_star){
    int i;
    for(i = 1; i<=number_of_star; i++){
        printf("*");
    }
    printf("\n");
    return;
}
int main(){
    int i, input;
    scanf("%d", &input);
    for(i = 1; i<=input; i++){
        print_Star_Line(i);
    }
    for(i = input-1; i>=1; i--){
        print_Star_Line(i);
    }
    return 0;
}
