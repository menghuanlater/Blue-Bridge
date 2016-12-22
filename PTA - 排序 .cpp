#include <iostream>

using namespace std;

int Pivot(int *array,int low,int high)
{
    int pivotkey = array[low];
    while(low<high)
    {
        while(low<high && array[high]>=pivotkey)
            high--;
        array[low] = array[high];
        while(low<high && array[low]<=pivotkey)
            low++;
        array[high] = array[low];
    }
    array[low] = pivotkey;
    return low;
}

void QuickSort(int *array,int low,int high)
{
     if(low<high)
     {
        int pivot = Pivot(array,low,high);
        QuickSort(array,low,pivot-1);
        QuickSort(array,pivot+1,high);
     }
}

int main(void)
{
    int n; cin>>n;
    int *array = new int [n];
    for(int i=0;i<n;i++)
        cin>>array[i];
    QuickSort(array,0,n-1);
    for(int i=0;i<n;i++)
    {
        if(i!=0)
            cout<<" ";
        cout<<array[i];
    }
    delete[] array;
    return 0;
}