#include <stdio.h>

int main() {
    int hasPrerequisite;  
    int isCourseFull;

    printf("Enter prerequisite status (1=completed , 0=missing): ");
    scanf("%d", &hasPrerequisite);

    printf("Enter course status (1=full , 0=not full): ");
    scanf("%d", &isCourseFull);

    if (hasPrerequisite == 1 && isCourseFull == 0) {
        printf("Enrolled successfully\n");
    } 
    else if (hasPrerequisite == 0 && isCourseFull == 0) {
        printf("Cannot enroll: prerequisite missing\n");
    } 
    else if (hasPrerequisite == 1 && isCourseFull == 1) {
        printf("Cannot enroll: course is full\n");
    } 
    else {
        printf("Cannot enroll: prerequisite missing and course is full\n");
    }

    return 0;
}
