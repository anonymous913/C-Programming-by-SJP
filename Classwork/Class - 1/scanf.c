// Use of Scanf

    #include <stdio.h>
    int main(){
    int x,y;

    printf("enter first number:");
    scanf("%d",&x);
    printf("enter second number:");
    scanf("%d",&y);

    int result=x+y;
    printf("Sum of 2 numbers: %d ",result);

    return 0;
}