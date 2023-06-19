#include<stdio.h>
int main() {
	int num_scores =2;
	float score, sum = 0, average;
	printf("Enter %d exam scores:\n", num_scores);
	for (int i = 0; i < num_scores; i++) {
		scanf("%f", &score);
		sum += score;
	}
	return 0;
 }
