#include <stdio.h>
#include <stdlib.h>

struct student {
	int ID;
	char name[10];
	double grade;
};

int main (void) {
	struct student s1 = {24, "각자이름", 4.3};
}
