#include <stdio.h>
#include <stdlib.h>

struct student {
	int ID;
	char name[10];
	double grade;
};

void main (void) {
	struct student s = {24, "각자이름", 4.3};
	s.ID = 123456;
	strcpy(s.name, "Juyeop");
	s.grade = 4.2;
	printf("ID : %d\n", s.ID);
	printf("name : %s\n", s.name);
	printf("grade : %f\n", s.grade);
}
