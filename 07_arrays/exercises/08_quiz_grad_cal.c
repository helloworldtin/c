// Modify Programming Project 7 so that it prompts for five quiz grades for each of five stu-
// dents, then computes the total score and average score for each student, and the average
// score, high score, and low score for each quiz.


#include <stdio.h>

#define N 5

int main(void){
    int quiz_mat[N][N];

    for(int i = 0; i < N; i++){
        printf("Enter the grade of student %d: ",i+1);
        for(int j = 0; j < N; j++){
            scanf("%d",&quiz_mat[i][j]);
        }
    }

    int high_score = quiz_mat[0][0];
    int low_score = quiz_mat[0][0];
    int total_score = 0;
    int average_score;

    for(int i = 0; i < N; i++){
        int total_score = 0;
        for(int j = 0; j < N; j++){
            total_score += quiz_mat[i][j];
            if(quiz_mat[i][j] > high_score) high_score = quiz_mat[i][j];
            if(quiz_mat[i][j] < low_score) low_score = quiz_mat[i][j];
            total_score += quiz_mat[i][j];
        }
        printf("The total score of student %d is %d\n",i+1, total_score);
        printf("The average of student %d is %d\n",i+1, total_score/N);
    }
    average_score = total_score/(N*N);

    printf("The hightest score is: %d\n",high_score);
    printf("The Lowest score is: %d\n",low_score);
    printf("The average score is: %d\n",average_score);
    return 0;
}
