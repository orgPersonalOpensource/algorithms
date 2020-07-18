#include <iostream>

using namespace std;

void selectionSort(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(A[j]<A[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
            temp=A[i];
            A[min]=A[i];
            A[i]=temp;
        }
    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
