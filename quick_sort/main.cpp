#include <iostream>

using namespace std;

void Partition(int A[],int left,int right)
{
    int pivot=A[right];
    int tail=left-1;
    for(int i=left;i<right;i++)
    {
        if(A[i]<=pivot)
        {
            int temp=A[++tail];
            A[++tail]=A[i];
            A[i]=temp;
        }
    }
}

void QuickSort(int A[],int left,int right)
{
    if(left>=right)
        return;
    int pivot_index=Partition(A,left,right);
    QuickSort(A,left,pivot_index-1);
    QuickSort(A,pivot_index+1,right);
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
