// GOTTA STUDY FOR THE SUMMER  SUMMER'S BODYS ARE BUILD ON WINTER

#include <iostream>
#include <string>
using namespace std; 

int binarieSearch(int,int[],int); 

int main(){
	int num; 
	int size; 
	int position; 
	
	int numbers[]={1,3,4,5,6,7,2,4,5,634,6,45,76,5453}; 
	
	size = numbers.lenght(); 
	
	cout<<"\nWrite the number that you want to find: "; 
	cin>>num;
	cout<<endl; 
	
	position = binarieSearch(num, numbers, size);
	
	
	return 0; 
}