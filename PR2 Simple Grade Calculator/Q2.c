//step 2:Additional comments
//Extend the program to provide additional comments based on the grade using a switch-case
//statement. For example, if the grade is ‘A’, then print ‘Excellent work!’. If the grade is ‘B’, then
//print ‘Well done’. If the grade is ‘C’, then print ‘Good job’. If the grade is ‘D’, then print ‘You
//passed, but you could do better’. And if the grade is ‘F’, then print ‘Sorry, you failed’.
//Example:
//Input: Enter your score: 92
//Output: Your grade is A. Excellent work!

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

    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done.\n");
            break;
        case 'C':
            printf("Good job.\n");
            break;
        case 'D':
            printf("You passed, but you could do better.\n");
            break;
        case 'F':
            printf("Sorry, you failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

	
	
	getch();
}
