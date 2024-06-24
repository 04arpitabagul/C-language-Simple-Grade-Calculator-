//Step 3: Eligibility Check
//Further, extend the program to check eligibility for the next level based on the grade using an
//if-else statement. Print ‘Congratulations! You are eligible for the next level’ if the grade is from
//‘A’ to ‘D’. Print ‘Please try again next time’ if the grade is ‘F’.
//Example:
//Input: Enter your score: 85
//Output: Your grade is A. Excellent work! You are eligible for the next level.

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

	if (grade >= 'A' && grade <= 'D') {
        printf("Congratulations! You are eligible for the next level.\n");
    } else if (grade == 'F') {
        printf("Please try again next time.\n");
    } else {
        printf("Unknown eligibility status.\n");
    }


	
	getch();
}
