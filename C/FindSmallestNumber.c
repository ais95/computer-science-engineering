#include <stdio.h>
int main() {
	int e=5, i, sval, position;
	int v[e];
    printf("\nInput 5 number in array:\n");
	for(i = 0; i < e; i++) {
			scanf("%d", &v[i]);
	}
	sval = v[0];
	position = 0;
	for(i = 0; i < e; i++) {
		if(sval > v[i]) {
			sval = v[i];
			position = i;
		}
	}
	printf("Smallest Value: %d\n", sval);
	printf("Position of the element: %d\n", position);
	return 0;
}
