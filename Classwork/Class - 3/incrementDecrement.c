// increment-decrement

    #include <stdio.h>

    int main() {

        int i=10;

        printf("%d\n", i++); //post-increment
        printf("%d\n", i); 
        printf("%d\n", ++i); //pre-increment
        printf("%d\n", i--); //post-decrement
        printf("%d\n", i); 
        printf("%d\n", --i); //pre-decrement

        return 0;
    }