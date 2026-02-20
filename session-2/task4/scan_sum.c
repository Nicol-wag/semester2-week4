
#include <stdio.h>

int main( void ) {

    // define suitable data
    int a,b;
    // use scanf to read from the terminal
    // print the output from scanf and the data values 
    
    printf("Please enter two integers: ");
    int count = scanf("%d %d", &a, &b);


    printf("read %d value\n", count);
    printf("value: %d, %d\n", a, b);

    printf("Sum = %d\n", a + b);


    return 0;
}