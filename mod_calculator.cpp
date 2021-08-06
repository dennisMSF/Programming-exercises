#include<iostream>
using namespace std;
void Inverso_modular(long long a,long long b){
	if(b<=0 || a<=0)cout<<"no tiene inverso modular para "<<b<<endl;
	else{
		a=a%b;
		long long x=0,y=1,tmp,m=b,rsp;
		while(a!=0 && b!=0){
			rsp=y;
			tmp=(x-y*(b/a))%m;
			x=y;
			y=tmp;
			tmp=b;
			b=a;
			a=tmp%a;
		}
		if(b!=1 || m<2)cout<<"no tiene inverso modular para "<<m<<endl;
		else{
			if(rsp<0)rsp+=m;
			cout<<"el inverso modular es "<<rsp<<endl;
		}
	}
}
void Suma_modular(long long a,long long b,long long m){
	long long y=(a%m+b%m)%m;
	if(y<0)y+=m;
	cout<<"la suma modular es "<<y<<endl;
}
void Resta_modular(long long a,long long b,long long m){
	long long y=(a%m-b%m)%m;
	if(y<0)y+=m;
	cout<<"la resta modular es "<<y<<endl;
}
void Mult_modular(long long a,long long b,long long m){
	long long y=((a%m)*(b%m))%m;
	if(y<0)y+=m;
	cout<<"la multiplicacion modular es "<<y<<endl;
}
void operacion(string op){
	if(op=="INV" || op=="inv" || op=="Inv"){
		long long a,m;
		cout<<"Ingrese el numero y el modulo"<<endl;
		cin>>a>>m;
		Inverso_modular(a,m);
	}
	else{
		long long a,b,m;
		cout<<"Ingrese los numeros a operar y el modulo"<<endl;
		cin>>a>>b>>m;
		if(op=="+")Suma_modular(a,b,m);
		else if(op=="-")Resta_modular(a,b,m);
		else if(op=="*")Mult_modular(a,b,m);
	}
}
int main(){
	int a,b;
	cout<<"Ingrese el signo de la operacion que desea realizar"<<endl;
	cout<<"(*,-,+,INV)"<<endl;
	string op;
	cin>>op;
	operacion(op);
	return 0;
}
