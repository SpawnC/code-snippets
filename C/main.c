#include <stdio.h>
int main(void)
{
    int score = 0;
    int answer;
    printf("==========================\n");
    printf("     PROGRAMMER TEST\n");
    printf("==========================\n\n");
    printf("Do you use Google to debug? (1 = yes, 0 = no): ");
    scanf("%d", &answer);
    score += answer == 1;
    printf("Do you write code at 3 AM? (1 = yes, 0 = no): ");
    scanf("%d", &answer);
    score += answer == 1;
    printf("Do you say \"it works on my machine\"? (1 = yes, 0 = no): ");
    scanf("%d", &answer);
    score += answer == 1;
    printf("\nYour programmer level: ");
    if (score == 0)
        printf("BEGINNER\n");
    else if (score == 1)
        printf("APPRENTICE \n");
    else if (score == 2)
        printf("CODE WIZARD\n");
    else
        printf("LEGENDARY\n");
    return 0;
}
