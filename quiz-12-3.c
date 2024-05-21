#include <stdio.h>
void print_array(int *arr, int n)  // 배열값을 출력 [] 사용하지 말 것
{
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr+i));
    }
    printf("\n");
}
int compute_sum(int *arr, int n)  // 배열의 합을 return [] 사용하지 말 것
{
	int i, sum = 0;
	for (int i = 0; i < n; i++) {
        sum += *(arr+i);
    }
	return sum;
}
double compute_avg(int *arr, int n) // 배열의 평균을 return [] 사용하지 말 것
{
	return ((double)compute_sum(arr, n) / n);
}
int find_max(int *arr, int n) // 배열에서 최대값을 찾아서 return [] 사용하지 말 것
{
	int i = 0;
	int max = *(arr+i);
	for (i = 0; i < n; i++) {
		if (*(arr+i) > max) {
			max = *(arr+i);
		}
	}
	return max;
}
int find_min(int *arr, int n) // 배열에서 최소값을 찾아서 return [] 사용하지 말 것
{
	int i = 0;
	int min = *(arr+i);
	for (i = 0; i < n; i++) {
		if (*(arr+i) < min) {
			min = *(arr+i);
		}
	}
	return min;
}
int main() // main은 수정하지 말 것
{
	int arr[10] = { 10, 30, 5, 21, 44, 13, 120, 88, 9, 101 };

	print_array(arr, 10);
	printf("합 = %d\n", compute_sum(arr, 10));
	printf("평균 = %lf\n", compute_avg(arr, 10));
	printf("최대 = %d\n", find_max(arr, 10));
	printf("최소 = %d\n", find_min(arr, 10));

	return 0;
}
