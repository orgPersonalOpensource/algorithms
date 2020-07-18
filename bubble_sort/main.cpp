#include <iostream>

using namespace std;

void BubbleSort(int A[],int n)
{
    int i,j;
    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-1-j;i++)
        {
            if(A[i]>A[i+1])
            {
                int temp;
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
        }
    }
}

void CocktailSort(int A[],int n)
{
    int left=0;
    int right=n-1;
    while(left<right)
    {
        for(int i=left;i<right;i++)
        {
            if(A[i]>A[i+1])
            {
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
        }
        right--;

        for(int j=right;j>left;j--)
        {
            if(A[j-1]>A[j])
            {
                temp=A[j];
                A[j]=A[j-1];
                A[j-1]=temp;
            }

        }
        left++;
    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
