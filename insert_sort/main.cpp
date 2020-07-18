#include <iostream>

using namespace std;


//插入排序
void InsertSort(int A[],int n)
{
    for(int i=1;i<n;i++)
    {
        int get=A[i];
        int j=i-1;
        while(j>=0&&A[j]>get)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=get;
    }
}

//二分插入排序
void InsertDichotomySort(int A[],int n)
{
    for(int i=1;i<n;i++)
    {
        int get=A[i];
        int left=0;
        int right=n-1;
        while(left<right)
        {
            int mid=(left+right)/2;
            if(A[mid]>get)
                right=mid-1;
            else
                left=mid+1;
        }
        int j=i-1;
        for(;j>=left;j--)
        {
            A[j+1]=A[j];
        }
        A[j+1]=get;
    }

}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
