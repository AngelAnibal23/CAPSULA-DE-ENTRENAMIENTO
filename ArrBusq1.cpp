// GOTTA STUDY FOR THE SUMMER  SUMMER'S BODYS ARE BUILD ON WINTER

#include <iostream>
#include <string>
using namespace std; 

int binarieSearch(int,int[],int); 

int main(){
	int num; 
	int size; 
	int position; 
	
	int numbers[]={1,2,3,4,5,6,7,8,9,63,70,453,2236,5453}; 
	
	size = sizeof(numbers) / sizeof(numbers[0]); 
	
	cout<<"\nWrite the number that you want to find: "; 
	cin>>num;
	cout<<endl; 
	
	position = binarieSearch(num, numbers, size);
	
	if(position >= 0){
		cout<<"The number: "<<num<<". Actually exist in the array. "<<endl;
		cout<<"His position is: "<<-position; 
	}
	else{
		cout<<"The number: "<<num<<". doesn't exist in the array. "<<endl;
		cout<<"It should be on the position: "<<-position<<endl; 
	}
	
	return 0; 
}

int binarieSearch(int dato, int a[], int n){
	int pos; 
	int izq = 0;
	int der = n-1; 
	int cen = 0; 
	int m; 
	
	while(izq <= der && cen == 0){
		m = (izq + der)/2; 
		if(a[m]==dato){
			cen=1; 
		}
		else{
			if(	dato >	a[m]){
				izq = m + 1; 
			}
			else{
				der = m - 1;  
			}
		}
	}
	
	if(cen==1){
		pos = m;
	}
	else{
		pos = -izq;
	}
	
	return pos; 
}