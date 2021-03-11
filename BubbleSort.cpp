#include<iostream>
using namespace std;


void display(int arr[], int size)
{
	for(int i = 0; i < size; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void BubbleSort(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j<size-i;j++)
		{
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}
}
int main()
{
	int size;
	cout<<"Enter the size of the array : ";	
	cin >> size;
        int arr[size];
	for(int i = 0; i < size; i++)
	{
	
		cout<<"Enter element ["<<i<<"] : "   ;
		cin>>arr[i];
	}
	cout<<"The array entered is : ";
	display(arr,size);
	BubbleSort(arr, size);
	cout<<"The sorted array is : ";
	display(arr,size);

}
