#include<iostream>
int main(){
	int a;
	std::cin>>a;
	for(int i=7;i>0;i-=2){
		std::cout<<a/i;
		if(a/i!=1) std::cout<<" botellas";
		else std::cout<<" botella";
		std::cout<<" de "<<i<<" litros\n";
		a%=i;
	}
	return 0;
}
