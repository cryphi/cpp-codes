#include<iostream>
using namespace std;


void display(int arr[], int size)
{
	for(int i = 0; i < size; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void SelectionSort(int arr[], int size)
{
	int i, j, min;
	for(i = 0; i < size; i++)
	{
		min = i;
		for(j = i+1; j < size; j++)
			if(arr[j]<arr[min])
				swap(arr[i], arr[j]);
	}
}
int main()
{
	int size;
	cout<<"Enter the size of the array : ";
	cin >> size;
	int arr[size];
	for(int i = 0;i < size; i++)
	{
		cout<<"Enter the element ["<<i<<"] : ";
		cin>>arr[i];
	}
	display(arr, size);
	SelectionSort(arr, size);
	cout<<"The sorted array is : "<<endl;
	display(arr, size);

}
