#include <iostream>

using namespace std;

int main (int argc, char** argv) {
	float R1,R2,S1,S2,S3,P,a,b;
	P=3.14;
	cout<<"Enter two different positive numbers"<<endl;
	cin>>a>>b;
	if (a>b) {
		R1=a;
		R2=b;
	}
	else{
		R1=b;
		R2=a;
	}
	
	S1=R1*R1*P;
	S2=R2*R2*P;
	S3=S1-S2;
	cout<<"R1="<<R1<<endl;
    cout<<"R2="<<R2<<endl;
	cout<<"S1="<<S1<<endl;
	cout<<"S2="<<S2<<endl;
	cout<<"S3="<<S3<<endl;
	
	
	
	
	system("pause");
	return 0;
}
