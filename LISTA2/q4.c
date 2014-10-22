#include <stdio.h>
#define V_SIZE 10



void mm(int * v, int * min, int * max) {
	int i;
	*min = *max = 0;
	for(i=0;i<V_SIZE;i++) {
		if(v[i] < *min) *min = v[i];
		if(v[i] > *max) *max = v[i];
	}
}


int main() {

	int v[] = {1, 2, -35, 3, 54, 4, 5, -90, 23, 0};

	int min;
	int max;

	mm(&v, &min, &max);

	printf("(%d, %d)", min, max);

}