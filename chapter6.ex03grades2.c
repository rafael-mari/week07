#include <stdio.h>
#include <math.h>

int main(void) {
  int score;
  char bvb[100];

  printf("Enter the score of the student between 0 and 100.\n");
  fgets(bvb, sizeof(bvb), stdin);
  sscanf(bvb, "%d", &score);

  if ((score>=0)&&(score<=60))
    printf("You got an F, study harder!\n");
  if ((score>=61)&&(score<=63))
    printf("You got an D-, keep working!\n");
  if ((score>=64)&&(score<=67))
    printf("You got an D, keep working!\n");
  if ((score>=68)&&(score<=70))
    printf("You got an D+, keep working!\n");
  if ((score>=71)&&(score<=73))
    printf("You got a C-, you can do better.\n");
  if ((score>=74)&&(score<=77))
    printf("You got a C, you can do better.\n");
  if ((score>=78)&&(score<=80))
    printf("You got a C+, you can do better.\n");
  if ((score>=81)&&(score<=83))
    printf("You got a B-, you are doing great!\n");
  if ((score>=84)&&(score<=87))
    printf("You got a B, you are doing great!\n");
  if ((score>=88)&&(score<=90))
    printf("You got a B+, you are doing great!\n");
  if ((score>=91)&&(score<=93))
    printf("You got an A-, congratulations!\n");
  if ((score>=94)&&(score<=97))
    printf("You got an A, congratulations!\n");
  if ((score>=98)&&(score<=100))
    printf("You got an A+, excellent job!\n");
  if ((score>100)||(score<0))
    printf("You must enter a valid score between 0 and 100.");

  return 0;
}
