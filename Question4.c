#include<stdio.h>
#include<string.h>
int main(){
    char username[15];
    char password[10];
    char correct_username[]="nehanmalik";
    char correct_password[]="admin123";

    printf("Enter username: ");
    scanf("%s",&username);
     if (strcmp(correct_username,username)==0){
        printf("Enter password: ");
        scanf(" %s", &password);
        if(strcmp(correct_password,password)==0){
            printf("You have logged in successfully.");
        }
        else{
            printf("Incorrect Password.");
        }}
    else{
        printf("Username not found.");
    }

return 0;
}