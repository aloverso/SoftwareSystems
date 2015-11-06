#include <stdio.h>
#include <stdlib.h>


typedef struct student {
    int health;
    int grade;
    char *name;
} Student;

Student *make_student(int health, int grade, char *name) {
    Student *student = malloc(sizeof(Student));
    student->health = health;
    student->grade = grade;
    student->name = name;
    return *student;
}

void go_to_bed(Student *student)
{
	*student->grade -= 10;
}

void pull_all_nighter(Student *student)
{
	*student->health -= 10;
	*student->grade += 5;
}

void do_work(int hours_of_hw, Student *student)
{
	if (hours_of_hw > 4)
	{
		if (*student->health < 80)
		{
			go_to_bed(*student);
		}
		else
		{
			pull_all_nighter(*student);
		}
	}
	else 
	{
		go_to_bed(*student);
	}
}

int main()
{
	Student *anne = make_student(100, 100, "Anne");
	
	int hours_of_hw[] = {4, 5, 1, 3, 8, 6, 5};

	int *current_day = hours_of_hw[0];
	while (&current_day < hours_of_hw + sizeof(hours_of_hw))
	{
		do_work(*current_day, *anne);
		&current_day += 1;
	}
	printf("%d\n", *anne->grade);
	printf("%d\n", *anne->health);
}

