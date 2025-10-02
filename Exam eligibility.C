/*
Name:gift Muthoni
Reg No:CT101/G/26539/25
Desccription:Exam Eligibility
*/
#include <stdio.h>

int main() {
    
    float percentage_attendance ,averagemarks;
    printf("enter the percentage_attendance of the student\t");
    scanf("%f" ,&percentage_attendance);
    printf("enter the averagemarks of the student\t");
    scanf("%f" ,&averagemarks);
    
    if(percentage_attendance>=75 && averagemarks>=40) {
        printf("eligible for final exam");
    } else {
        printf("not eligible for final exam");
    }  
    return 0;
}