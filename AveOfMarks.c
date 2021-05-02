#include <stdio.h>

int calculateAverage(int sum, int numberOfCourses){

int average = sum/numberOfCourses;

return average;
}

int main(){
int count;
int marks;
int numberOfCourses;
int sum = 0;
int result;
printf("Enter number of courses\n");
scanf("%d", &numberOfCourses);
for(count=0; count<numberOfCourses; count++){
    printf("Enter Marks:\n");
    scanf("%d", &marks);
    sum = sum + marks;
}
 result = calculateAverage(sum, numberOfCourses);
printf("The Average is = %d", result);

int category = result/10;

switch(category){

case 10:
    printf(" grand distinction");
    break;

case 9:
    printf("grand distinction");
    break;

    case 8:
    printf("grand distinction");
    break;

    case 7:
    printf("distinction");
    break;
        case 6:
    printf("pass");
    break;
        case 5:
    printf("pass");
    break;
        case 4:
    printf("fail");
    break;
        case 3:
    printf("fail");
    break;
        case 2:
    printf("fail");
    break;
        case 1:
    printf("fail");
    break;
        case 0:
    printf("fail");
    break;

    default:
        printf("invalid marks");
        break;

}

return 0;
}
