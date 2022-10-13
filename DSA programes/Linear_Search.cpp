#include<iostream>
using namespace std;


struct Array
{
	int A[10];
	int size;
	int length;
};

void Display(struct Array arr)
{ 
    cout<<endl;
	cout<<"Elements are:"<<endl;
	for(int i=0;i<arr.length;i++)
	{
		cout<<arr.A[i]<<" ";
	}
}

void swap(int *x,int *y)
 {
 int temp=*x;
 *x=*y;
 *y=temp;
 }

int LinerSearch(struct Array *arr, int key)
{
	for(int i=0;i<arr->length;i++)
	{
		if(key==arr->A[i])
		{
			 swap(&arr->A[i],&arr->A[i-1]);
			return i;
		}
	
	}
	
		return -1;
}

int main()
{    
     
	struct Array arr1={{2,23,14,5,6,9,8,12},10,8};
	cout<<LinerSearch(&arr1,6);
	Display(arr1);
	return 0;
}
