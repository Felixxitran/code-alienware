// C++ program to implement recursive Binary Search
#include <bits/stdc++.h>
using namespace std;
 
// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
   	while(l<r){
		int mid = (r+l)/2;
		if(x == arr[mid]){
			return mid;
		}
		if(x>arr[mid]){
			l=mid+1;
		}
		else{
			r= mid-1;
		}
}

}
int linearSearch(int arr[],int n,int x){
	for(int i=0;i<n;i++){
		cout<<i;
		if(arr[i]==x){
			return i;
		}
		}
	return -1;
	}
	

 
int main(void)
{
    int arr[] = { 2, 3, 4,5, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = linearSearch(arr,6, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
