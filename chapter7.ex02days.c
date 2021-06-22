/********************************************************
 * Ex7.2 -- Difference between 2 dates. *
 * *
 * Author: Rafael Marí. *
 * *
 * Purpose: Compute a program that displays the difference of days between 2 different dates provided by the user. *
 * *
 * Usage: *
 * Run the program, enter the 2 dates and the difference appears. *
 * *
 * Comments: *
 * My code is based on the one of this website: https://www.programmersought.com/article/28854147400/ because even when I was trying I couldn't get it to work. *
 * Also the part of the leap years doesn't work and I couldn't fix it even though I change it using my previous code about telling if a year is a leap year and I don't know why. So it gets the result without taking into consideration the leap years. But the teacher said it was not necessary for now to read the leap year too, so I leave it like that. *
 ********************************************************/

#include <stdio.h>

struct date
{
	int y; //years
	int m; //months
	int d; //days
};

int dm[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 }; // dm stands for days of the month, and I define how many days each month has, the 0 is because the loop for starts in 0

int dd(struct date s) //dd stands for days until the date entered, and I use this variable to get how many days have passed until that date, starting with the year 0
{
	int sum=0;
	//Determine if it is a leap year but this doesn't works properly, I don't know why
        //It sums 365 every time instead
	for (int i = 1; i < s.y; i++) //for years
    if (s.y % 400 == 0){
      sum=sum+366;
    }
    else if (s.y % 100 == 0){
      sum=sum+365;
    }
    else if (s.y % 4 == 0){
      sum=sum+366;
    }
    else{
      sum=sum+365;
    }

	for (int k = 1; k < s.m; k++) // for months
		sum += dm[k];

	return sum+s.d; //Add the number of days
}

int diff(struct date s1, struct date s2) //s1 is the closest date and s2 is the furthest date
{
	return dd(s1)-dd(s2); //It returns the difference
}

int main()
{
	struct date s1, s2;
  //I ask for the 2 dates, asking the user to use hyphens so the programs reads them properly
	printf("Enter closest date in the next format, using hyphens: (yyyy-mm-dd)\n");
	scanf("%d-%d-%d", &s1.y, &s1.m, &s1.d);
	printf("Enter furthest date in the next format, using hyphens: (yyyy-mm-dd)\n");
	scanf("%d-%d-%d", &s2.y, &s2.m, &s2.d);
	printf("The difference between these dates is %d days\n", diff( s1,  s2));//It prints the difference between the closest date and the furthest one

	return 0;
}
