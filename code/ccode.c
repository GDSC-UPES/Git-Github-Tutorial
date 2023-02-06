#include<stdio.h>

struct college {
	char name_college[40];            // created a structure of college
	int student;
	float area;

}a, b, c;                                           // created a structure variable 

int main() {
	int avgstudent;
	float avgarea;

	printf(" enter the deatils of your college ");
	printf(" enter the name of your college");

	scanf("%s", a.name_college);                     // taken name of 3 different college 
	scanf("%s", b.name_college);
	scanf("%s", c.name_college);

	printf(" total no of student in your college");

	scanf("\n%d%d%d", &a.student, &b.student, &c.student);       // taken total number of student in 3 colleg 

	printf("enter the area of your college");
	scanf("\n%f%f%f", &a.area, &b.area, &c.area);              // taken total area of college 

	printf(" the record of college is");

	printf("\n%s%d%f", a.name_college, a.student, a.area);    // printed record of college 
	printf("\n%s%d%f", b.name_college, b.student, b.area);
	printf("\n%s%d%f", c.name_college, c.student, c.area);

	printf(" average no of student of three college");

	avgstudent = a.student + b.student + c.student / 3;                 // taken avg of student 

	printf("%d", avgstudent);

	printf(" average area of college");
	avgarea = a.area + b.area + c.area / 3;                           //taken avg of area 

	printf(" %f", avgarea);

	return 0;
}
