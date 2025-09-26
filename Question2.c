#include<stdio.h>
int main(){
    int powerOn;
    char light;

    printf("Is the power on? (0=No , 1= Yes) : ");
    scanf("%d", &powerOn);

    if (powerOn == 1){
        printf("What is the light color? (R=Red , Y=Yellow , G=Green) : ");
        scanf(" %c", &light);

        if (light == 'R' || light == 'r'){
            printf("Stop.");
        }
        else if (light == 'Y' || light == 'y'){
            printf("Caution.");
        }
        else if (light == 'G' || light == 'g'){
            printf("Go.");
        }
        else{
            printf("Invalid input.");
        }
    }
    else{
        printf("Signal Off.");
    }
}
