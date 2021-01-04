#include <stdio.h>
#include <stdlib.h>


int TwoNumbers(){

int number1, number2, sum;

printf("Enter two integers: ");
scanf("%d %d", &number1, &number2);

sum = number1 + number2;

printf("%d + %d = %d \n", number1, number2, sum);

return 0;


}

int Twonumbers(){

    int a,b,d;
    printf("Please Enter a number :  ");
    scanf(" %d", &a);
    printf("Please enter another number:   ");
    scanf("%d", &b);
    d = 228;
    a = a-b;
    while(a < 0){
        a = a + d;
        printf(" The total is : %d", a );
    }

    return 0;


}



int main()
{
    printf("Hello world!\n");

    TwoNumbers();
    Twonumbers();

    return 0;




}
