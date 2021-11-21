#include <stdio.h>
#include <stdlib.h>

#define students 3
#define exams 4

int minimum(const int grades[][exams], int pupils, int tests);
int maximum(const int grades[][exams], int pupils, int tests);
double average(const int setofGrades[], int tests);
void printarray(const int grades[][exams], int pupils, int tests);


int main()
{
	int student;
	const int studentgrades[students][exams] = { {77,68,86,73},
											     {96,87,89,78},
											     {70,90,86,81} };
	
	printf("The array is:\n");
	printarray(studentgrades, students, exams);

	printf("\n\nLowest grade: %d\nHighest grade: %d\n", minimum(studentgrades, students, exams), maximum(studentgrades, students, exams));
	for (student = 0;student < students;student++)
	{
		printf("The average grade for student %d is %.2f\n", student, average(studentgrades[student], exams));
	}
	system("pause");
	return 0;
}

int minimum(const int grades[][exams], int pupils, int tests)
{
	int i, j;
	int lowgrade = 100;

	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] < lowgrade)
				lowgrade = grades[i][j];
		}
	}
	return lowgrade;
}

int maximum(const int grades[][exams], int pupils, int tests)
{
	int i, j;
	int highgrade = 0;

	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] > highgrade)
				highgrade = grades[i][j];
		}
	}
	return highgrade;
}

double average(const int setofGrades[], int tests)
{
	int i, total = 0;

	for (i = 0; i < tests; i++)
	{
		total += setofGrades[i];
	}
	return (double)total / tests;
}

void printarray(const int grades[][exams], int pupils, int tests)
{
	int i, j;

	printf("\n\t\t[0]    [1]    [2]    [3]");
	for (i = 0; i < pupils; i++)
	{
		printf("\nstudentgrades[%d]", i);
		for (j = 0; j < tests; j++)
		{
			printf("%-7d", grades[i][j]);
		}
	}
	printf("\n");
}
