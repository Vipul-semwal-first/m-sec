#include<stdio.h>
int main(){
    float distance, time, ms;
    printf("Enter distance travelled in Kilometers: \n ");
    scanf("%f", &distance);
    printf("Enter time taken in Hours: \n ");
    scanf("%f", &time);
    ms = (distance / time) / 3.6;
    printf("Speed: %.2f m/s", ms);
    return 0;
}