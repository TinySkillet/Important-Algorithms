#include <iostream>

//BubbleSort Algorithm

bool compare(int x, int y)
{
    if( x > y)  return 1;          //swap return values for sorting in descending order
    else return 0;
}

void BubbleSort(int* A, int size, bool((*compare)(int, int)))
{
    int temp;
    for(int i = 0 ; i < size; i++)
    {
        for(int j = 0 ; j < size-1 ; j++)
        {
            if(compare(A[j], A[j+1]))
            {
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

int main()
{
    int A[] = {5, 3, 8, 9, 12, 1, 4, 13};
    int length = sizeof(A)/sizeof(*A);

    BubbleSort(A, length, compare);
   
    for(int i = 0; i < length; i++)
    std::cout<< A[i]<<" ";
}
