// Lab 5 - Exercise 16: Voting Eligibility Check
// Program to check if a person is eligible to vote (age >= 18)
// Returns eligibility status based on user-provided age

#include<stdio.h>

int main(){
    int age;
    printf("Enter the Age:");
    scanf("%d", &age);
    if (age >17)
        printf("You Are Eligible to vote.\n");
    else
        printf("You are not eligible to vote\n");
    return 0;
}