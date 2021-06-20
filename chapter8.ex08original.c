/********************************************************
 * Ex8.8 -- Failed and approved *
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: Compute a program that counts how many students passed the subject and what grade they got and how many failed. The user enters the number of students and the grade of each one. *
 * *
 * Usage: *
 * Run the program, enter the number of students, enter the grade of each student as required, the final count will appear. *
 ********************************************************/

#include <stdio.h>
#include <math.h>

int main(void){
  int x;
  int i;
  float num;
  int a=0;
  int b=0;
  int c=0;
  int d=0;
  int f=0;

  printf("Enter the number of students in the classroom.\n"); //I ask for the number of students
  scanf("%d",&x); //I read the number

  for (i=1;i<=x;i++) //I create a loop that won't stop until it reaches the number of students the user entered before
  {
    printf("Enter the grade of the student %d \n",i); //I ask for the grades
    scanf("%f",&num); // I read them

    if ((num>=90)&&(num<=100)){
    a=a+1; //I sum 1 to the count of students who got an A
    }
    if ((num>=80)&&(num<=89)){
    b=b+1; //I sum 1 to the count of students who got an B
    }
    if ((num>=70)&&(num<=79)){
    c=c+1; //I sum 1 to the count of students who got an C
    }
    if ((num>=60)&&(num<=69)){
    d=d+1; //I sum 1 to the count of students who got an D
    }
    if ((num>=0)&&(num<=59)){
    f=f+1; //I sum 1 to the count of students who failed the subject.
    }
    if (i==x){
      break;
    }
   }

    printf("%d students got an A, %d student(s) got a B, %d student(s) a C, %d student(s) a D, and %d student(s) failed the subject.", a, b, c, d, f);
    
  return 0;
}
