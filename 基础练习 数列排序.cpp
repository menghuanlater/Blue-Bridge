#include <iostream>

using namespace std;
//quick sort
int Pivot(int *Array,int low,int high)
{
    int pivotkey = Array[low];
    while(low<high)
    {
        while(low<high && Array[high]>=pivotkey)
            high--;
        Array[low] = Array[high];
        while(low<high && Array[low]<=pivotkey)
            low++;
        Array[high] = Array[low];
    }
    Array[low] = pivotkey;
    return low;
}

void QuickSort(int *Array,int low,int high)
{
    int pivot;
    if(low<high)
    {
        pivot = Pivot(Array,low,high);
        QuickSort(Array,low,pivot-1);
        QuickSort(Array,pivot+1,high);
    }
}

int main(void)
{
    int n;
    cin>>n;
    int *Array = new int [n+1];
    for(int i=1;i<=n;i++)
        cin>>Array[i];
    QuickSort(Array,1,n);

    for(int i=1;i<=n;i++)
        cout<<Array[i]<<" ";
    delete[] Array;
    return 0;
}