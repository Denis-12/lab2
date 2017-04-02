#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	int v, s;
	cout<<"vvedite summu vklada ne <10000"<<endl;
	cin>>v;
	while(v<10000){
	cout<<"vvedite summu vklada ne <10000"<<endl;
	cin>>v;
}
	cout<<"vvedite srok vklada"<<endl;
	cin>>s;
	while(s<0 || s>365){
		cout<<"srok vklada ne bolee 365"<<endl;
	cin>>s;
	}
}
