#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
//vector de 20 elementos int inicializados a 9
vector<int> A(20,50);
//vector B sin inicializar
vector<int> B;
 
//copiamos el contenido de A en B
B=A;

for(int val: B){
	cout<<val<<" "; 
}
 
return 0;
}