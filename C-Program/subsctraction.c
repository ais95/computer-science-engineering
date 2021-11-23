int subtract(int x, int y){
    return(x-y);
}

int main(){
    int a, b, result;
    scanf("%d %d", &a, &b);
    result = subtract(a, b);
    printf("Result = %d", result);
    return 0;
}
