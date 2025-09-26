#include<stdio.h>
int main(){
    int a, b, c, disc;
    printf("Input value of a: ");
    scanf("%d", &a);
    printf("Input value of b: ");
    scanf(" %d", &b);
    printf("Input value of c: ");
    scanf(" %d", &c);

    if (a==0){
        printf("Invalid input.");
    }
    else {
        disc=(b*b)-(4*a*c);
        printf("Discriminant= %d \n", disc);
        if (disc>0){
            printf("Two real roots.");
        }
        else if (disc==0){
            printf("One real root.");
        }
        else{
            printf("Imaginary roots.");
        }
    }
}