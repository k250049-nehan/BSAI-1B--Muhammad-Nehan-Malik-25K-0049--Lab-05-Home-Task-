#include<stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age<5){
        printf("Free!");
    }
    else if (age>65){
        printf("Discounted!");
    }
    else {
        printf("Standard.");
    }
    return 0;
}