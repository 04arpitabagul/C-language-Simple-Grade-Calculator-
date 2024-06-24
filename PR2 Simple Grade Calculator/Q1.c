//Step 1: Grade Calculation
//Develop a program that takes a score out of 100 as input from the user and calculates the
//corresponding grade using a ternary operator. Allocate grades from A to F for various ranges.

//Example:
//Input: Enter your score: 92
//Output: Your grade is A

#include<stdio.h>
#include<conio.h>

void main(){
	
	int score;
	char grade;
	
	printf("Enter Your Score: ");
	scanf("%d",&score);
	
	grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : 'F';

    printf("Your grade is %c\n", grade);

	
	
	getch();
}
