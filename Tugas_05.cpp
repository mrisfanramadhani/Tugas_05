#include <iostream>
using namespace std;
int main(){
	int tb,bb,hasil, hasil2;
	cout<<"======================"<<endl;
	cout<<"MENGHITUNG BADAN IDEAL"<<endl;
	cout<<"======================"<<endl;
	cout<<"Masukkan Tinggi Badan = ";cin>>tb;
	cout<<"Masukkan Berat Badan = ";cin>>bb;
	if(bb<(tb/2.5)){
		cout<<"Anda Termasuk Kurus (UNDERWEIGHT)";
	}
	else if(tb/2.5<=bb<=tb/2.3){
		cout<<"Anda Termasuk Berat Badan Normal";
	}
	else if((tb/2.3)<bb){
		cout<<"Anda Termasuk Gemuk (OVERWEIGHT)";
	}
	else{
		cout<<"INPUT TIDAK VALID!!!!!!";
	}	
}
