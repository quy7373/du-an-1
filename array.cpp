#include <iostream>
using namespace std;
#define n 4
void sch();
void nh10so();
void sle();
void tong();
void tich();
int main(){
	nh10so();
	tong();
	tich();
}

void sch(){
	int soch[n];
	for (int i=0;i<n;i++){
		if(soch[i]%2==0){
			cout<<"\n"<<soch[i];
		}
	}
}
void sle(){
	int sole[n];
	for (int i=0;i<n;i++){
		if(sole[i]%2!=0){
			cout<<"\n"<<sole[i];
		}
	}
}
void tong(){
	int tong;
	int mang[n];
	for (int i=0;i<n;i++){
		tong +=mang[i];
	}
	cout<<"\n"<<tong;
}
void tich(){
	int tich;
	int mang[n];
	for (int i=0;i<n;i++){
		tich *=mang[i];
	}
	cout<<"\n"<<tich;
}
void luythua(){
	int luythua;
	int mang[n];
	for (int i=0;i<n;i++){
		tich =mang[i]*man;
	}
	cout<<"\n"<<tich;
}
void nh10so(){
	int c=10;
	int mang[c];
	for(int i=0;i<c;i++){
		cout<<"\n"<<mang[i];
	}
}
