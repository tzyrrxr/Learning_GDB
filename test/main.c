#include <stdio.h>

void sq(int *i) {
	*i = (*i) * (*i);
}

int rec(int i) {
	if(i>0) {
		printf("i: %d\n", i);
		return rec(--i);
	} else {
		return 0;
	}
}

int main(void) {
	//int i = 3437;
	//int j = 3;
	for (int i=0; i<5; i++)
		printf("i: %d\n", i);
	//sq(&j);
	//printf("j: %d\n", j);
	//rec(10);
	return 0;
}
