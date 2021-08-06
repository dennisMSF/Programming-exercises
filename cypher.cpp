#include<bits/stdc++.h>
using namespace std;
int ModularInversed(int a,int b){
	a=a%b;
	if(b<2 || a<1){return 0;}
	int x=0,y=1,m=b,tmp;
	int rsp=y;
	while(a>=1){
		rsp=y;
		tmp=(x-y*(b/a))%m;
		x=y;
		y=tmp;
		tmp=b%a;
		b=a;
		a=tmp;
	}
	if(b!=1)return 0;
	rsp%=m;
	if(rsp<0)rsp+=m;
	return rsp;
} 
int main(){
	cout<<"Cifrar(0)\nDescifrar(1)"<<endl;
	int o;
	cin>>o;
	const char *p;
	if(!o)p="PLAIN1.txt";
	else p="CIPHER.txt";
	ifstream fin(p,ios::binary);
	fin.seekg(0,ios::end);
	int l=fin.tellg();
	fin.seekg(0,ios::beg);
	char arr[l];
	fin.read(arr,l);
	fin.close();
	int n;
	if(!o)cout<<"ingrese la llave privada"<<endl;
	else cout<<"ingrese la llave publica"<<endl;
	int y=0;
	if(!o){
		while(y==0){
			cin>>n;
			y=ModularInversed(n,256);
			if(y==0)cout<<"Ese numero no se puede usar como llave privada"<<endl;
		}
	}
	else cin>>n;
	const char *f;
	if(!o)f="CIPHER.txt";
	else f="PLAIN2.txt";
	ofstream fout (f);
	for(int i=0;i<l;i++){
		int r=arr[i];
		r=(r*n)%256;
		char t=r;
		fout<<t;
	}
	if(!o)cout<<y<<endl;
	fout.close();
	return 0;
}
© 202
