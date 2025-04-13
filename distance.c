#include<stdio.h>
int main() {
    int x1, x2, y1, y2;
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    float distance=sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));;
    printf("%f",distance);
                                return 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    
}

