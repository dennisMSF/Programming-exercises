#include<iostream>
using namespace std;
void tresdigitos(string &a,string &rsp,int i=0){
	if(a[i]=='1'){
		if(a[i+1]=='0' && a[i+2]=='0')rsp+="cien ";
		else rsp+="ciento ";
	}
	else if(a[i]=='2')
		rsp+="doscientos ";
	else if(a[i]=='3')
		rsp+="trescientos ";
    	else if(a[i]=='4')
        	rsp+="cuatrocientos ";
    	else if(a[i]=='5')
        	rsp+="quinientos ";
    	else if(a[i]=='6')
        	rsp+="seiscientos ";
    	else if(a[i]=='7')
        	rsp+="setecientos ";
    	else if(a[i]=='8')
        	rsp+="ochocientos ";
    	else if(a[i]=='9')
        	rsp+="novecientos ";
    	if(a[i+1]=='0'){
		if(a[i+2]=='1'){
			if(i+2!=a.size()-1 && a[i]>'0'){
				rsp+="un ";
			}
		}
		else if(a[i+2]=='2')rsp+="dos ";
        	else if(a[i+2]=='3')rsp+="tres ";
        	else if(a[i+2]=='4')rsp+="cuatro ";
        	else if(a[i+2]=='5')rsp+="cinco ";
        	else if(a[i+2]=='6')rsp+="seis ";
        	else if(a[i+2]=='7')rsp+="siete ";
        	else if(a[i+2]=='8')rsp+="ocho ";
        	else if(a[i+2]=='9')rsp+="nueve ";
    	}
	else if(a[i+1]=='1'){
    		if(a[i+2]=='0')
			rsp+="diez ";
        	else if(a[i+2]=='1')
            		rsp+="once ";
        	else if(a[i+2]=='2')
			rsp+="doce ";
        	else if(a[i+2]=='3')
			rsp+="trece ";
		else if(a[i+2]=='4')
			rsp+="catorce ";
		else if(a[i+2]=='5')
			rsp+="quince ";
		else if(a[i+2]=='6')
			rsp+="dieciseis ";
		else if(a[i+2]=='7')
			rsp+="diecisiete ";
		else if(a[i+2]=='8')
			rsp+="dieciocho ";
		else if(a[i+2]=='9')
			rsp+="diecinueve ";
	}
	else if(a[i+1]=='2'){
		if(a[i+2]=='0')
			rsp+="veinte ";
		else if(a[i+2]=='1'){
			if(i+2!=a.size()-1)rsp+="veintiun ";
			else rsp+="veintiuno ";
		}
		else if(a[i+2]=='2')
			rsp+="veintidos ";
		else if(a[i+2]=='3')
			rsp+="veintitres ";
		else if(a[i+2]=='4')
			rsp+="veinticuatro ";
		else if(a[i+2]=='5')
			rsp+="veinticinco ";
		else if(a[i+2]=='5')
			rsp+="veinticinco ";
		else if(a[i+2]=='6')
			rsp+="veintiseis ";
		else if(a[i+2]=='7')
			rsp+="veintisiete ";
		else if(a[i+2]=='8')
			rsp+="veintiocho ";
		else if(a[i+2]=='9')
			rsp+="veintinueve ";
	}
	else if(a[i+1]>='3'){
		if(a[i+1]=='3')
			rsp+="treinta ";
		else if(a[i+1]=='4')
			rsp+="cuarenta ";
		else if(a[i+1]=='5')
			rsp+="cincuenta ";
		else if(a[i+1]=='6')
			rsp+="sesenta ";
		else if(a[i+1]=='7')
			rsp+="setenta ";
		else if(a[i+1]=='8')
			rsp+="ochenta ";
		else if(a[i+1]=='9')
			rsp+="noventa ";
		if(a[i+2]=='1'){
			if(i+2==a.size()-1)rsp+="y uno ";
			else rsp+="y un ";
		}
		else if(a[i+2]=='2')
			rsp+="y dos ";
		else if(a[i+2]=='3')
			rsp+="y tres ";
		else if(a[i+2]=='4')
			rsp+="y cuatro ";
		else if(a[i+2]=='5')
			rsp+="y cinco ";
		else if(a[i+2]=='6')
			rsp+="y seis ";
		else if(a[i+2]=='7')
			rsp+="y siete ";
		else if(a[i+2]=='8')
			rsp+="y ocho ";
		else if(a[i+2]=='9')
			rsp+="y nueve ";
	}
	string t;
	if(i+3==3){
		for(int j=0;j<=i+2;j++)t+=a[j];
		if(t>="001")rsp+="mil ";
		tresdigitos(a,rsp,i+3);
	}
	else if(i+3==6){
		for(int j=0;j<=i+2;j++)t+=a[j];
		if(t>"000001")rsp+="millones ";
		else if(t=="000001")rsp+="un millon ";
		tresdigitos(a,rsp,i+3);
	}
	else if(i+3==9){
		for(int j=i;j<=i+2;j++)t+=a[j];
		if(t>="001")rsp+="mil ";
		tresdigitos(a,rsp,i+3);
	}
	else{
		if(a[i+1]=='0' && a[i+2]=='1'){
			rsp+="uno ";
		}
	}
}
string conversor(string& a){
	string h;
	for(int i=0;i<12-a.size();i++)h+='0';
	h+=a;
	string rsp;
	tresdigitos(h,rsp);
	string respuesta;
	for(int i=0;i<rsp.size()-1;i++)respuesta+=rsp[i];
	return respuesta;
}
int main(){
	string a;
	cout<<"Ingresar un numero entero positivo"<<endl;
	cin>>a;
	cout<<"Se lee: "<<conversor(a)<<endl;
	return 0;
}
