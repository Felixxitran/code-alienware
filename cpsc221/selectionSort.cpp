#include <iostream>
using namespace std;



void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i , j,min_index;
	 
    for(int i=0;i<n-1;i++){
    	min_index = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[min_index]){
				min_index = j;
			}
			}
			swap(&arr[i],&arr[min_index]);
		}
}
void selectionSort2(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n-1; i++)
    {
       
        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        if(min_idx!=i)
            swap(&arr[min_idx], &arr[i]);
    }
}
	

	

 
 
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
// Driver code
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    selectionSort(arr, N);
    printArray(arr, N);
 
    return 0;
}
