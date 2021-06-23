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
  if ((score>60)&&(score<=70))
    printf("You got a D, keep working!\n");
  if ((score>70)&&(score<=80))
    printf("You got a C, you can do better.\n");  
  if ((score>80)&&(score<=90))
    printf("You got a B, you are doing great!\n");
  if ((score>90)&&(score<=100))
    printf("You got an A, congratulations!\n");
  if ((score>100)||(score<0))
    printf("You must enter a valid score between 0 and 100.");

  return 0;
}
