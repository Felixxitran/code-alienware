#include <iostream>
using namespace std;



void insertionSort(int arr[], int n)
{
    int i , j,key; 
    for(int i=1;i<n;i++){
		int key = arr[i];
		j = i-1 ;
		while(j>=0&&key<arr[j]){
			arr[j+1] = arr[j];
			j-=1;
		}
		arr[j+1] = key;
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
 
    insertionSort(arr, N);
    printArray(arr, N);
 
    return 0;
}
