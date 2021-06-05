#include <iostream>
#include <stdio.h>
using namespace std;

#define ARRAY_MAX 100000

int arr[ARRAY_MAX];

int main() {
	// your code goes here
    int i;
    i = 0;
    while (scanf("%d", &arr[i++]) != EOF);
    for (int k = 0; k < i; k++)
    {
        printf("%d ", arr[k]);
    }
	return 0;
}
