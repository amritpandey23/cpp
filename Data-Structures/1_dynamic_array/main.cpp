#include <iostream>
#include <stdlib.h>
using namespace std;

struct ArrayDMA {
    int capacity;
    int lastIndex;
    int *arr;
};

struct ArrayDMA * createArray(int cap)
{
    struct ArrayDMA *arr_ret;
    int *ptr = (int *)malloc(sizeof(int) * cap);
    arr_ret->capacity = cap;
    arr_ret->lastIndex = -1;
    arr_ret->arr = ptr;
    return arr_ret;
}

void addItem(struct ArrayDMA *arr, int data)
{
    arr->lastIndex++;
    arr->arr[arr->lastIndex] = data;
}

void printList(struct ArrayDMA *arr)
{
    for (int i = 0; i <= arr->lastIndex; i++)
    {
        cout << arr->arr[i] << ", ";
    }
}

int main()
{
    struct ArrayDMA *sample = createArray(10);
    for (int i = 0; i < 10; i++)
    {
        addItem(sample, i);
    }
    printList(sample);
    return 0;
}
