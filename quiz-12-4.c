#include <stdio.h>
// n개의 배열에서 최대값과 그 index를 *max, *index에 담아서 return
void find_max(int* arr, int *pmax, int *pindex, int n) 
{
	int i = 0;
	*pmax = *arr;
	*pindex = 0;
	for (i = 0; i < n; i++) {
		if (*(arr+i) > *pmax) {
			*pmax = *(arr+i);
			*pindex = i;
		}
	}
	// void 이므로 return 값은 없고 max, index에 값을 넘겨주어야 함
}
// n개의 배열에서 최소값과 그 index를 *min, *index에 담아서 return
void find_min(int* arr, int *pmin, int *pindex, int n) 
{
	int i = 0;
	*pmin = *arr;
	*pindex = 0;
	for (i = 0; i < n; i++) {
		if (*(arr+i) < *pmin) {
			*pmin = *(arr+i);
			*pindex = i;
		}
	}
	// void 이므로 return 값은 없고 min, index에 값을 넘겨주어야 함
}
void main() // main은 수정하지 말 것
{
	int arr[10] = { 10, 30, 5, 20, 44, 13, 120, 88, 9, 101 };
	int max, min, index;

	find_max(arr, &max, &index, 10);
	printf("최대 : arr[%d]=%d\n", index, max);
	find_min(arr, &min, &index, 10);
	printf("최소 : arr[%d]=%d\n", index, min);
}
