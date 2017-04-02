#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
	double v, s;
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
	
	if(v<100000){
		if(s<=30 )v=v-v*0.1, cout<<"summa s % ="<<v;
		if(s>30 && s<=120) v=v+v*0.02, cout<<"summa s % ="<<v;
		if(s>120 && s<=240) v=v+v*0.06, cout<<"summa s % ="<<v;
		if(s>240 && s<=360) v=v+v*0.12, cout<<"summa s % ="<<v;
	}
	else{
		if(s<=30 )v=v-v*0.1, cout<<"summa s % ="<<v;
		if(s>30 && s<=120) v=v+v*0.03, cout<<"summa s % ="<<v;
		if(s>120 && s<=240) v=v+v*0.08, cout<<"summa s % ="<<v;
		if(s>240 && s<=360) v=v+v*0.15, cout<<"summa s % ="<<v;
	}
}	
	
