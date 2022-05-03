#include <stdio.h>
int arithmetic(int x, char operaition, int y);
int main() {
    int x;
    int y;
    char operaition;
    char space;
    char space1;
    scanf("%d%c%c%c%d",&x, &space ,&operaition, &space1 ,&y);
    int sum = arithmetic(x, operaition, y);
    printf("%d", sum);
    return 0;
}
int arithmetic(int x, char operaition, int y){
    int sum = 0;
    if (operaition == '+') {
        sum = x + y;
    } else if (operaition == '-') {
        sum = x - y;
    } else if (operaition == '*') {
        sum = x * y;
    } else if (operaition == '/') {
        sum = x / y;
    } else {
        printf("Unknow operation");
    } return sum; 
}