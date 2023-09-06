#include<iostream>
using namespace std;

int main()
{
	int numbers[]={1,2,3,4,5,6,7,8,9,10};
	int new_item =99; 
	int current_size=sizeof(numbers)/sizeof(numbers[0]);
	int new_numbers[current_size+1];
	
	for(int i=0;i<current_size;i++)
	{new_numbers[i]=numbers[i];
	}
	new_numbers[current_size]=new_item;
	cout<<"Append Algorithm: ";
	for(int i=0;i<current_size+1;i++)
	{
		cout<<new_numbers[i]<<" ";
	}
	cout<<endl;
	return 0;
}
