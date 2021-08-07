#include<iostream>
#include<math.h>
#include<ctime>
using namespace std;
int main(){
    unsigned t0, t1;

    t0=clock();
    long long m;
    bool isprime=true;
    cin>>m;
    if(m>=2){
            for(long long i=2;i<sqrt(m);i++){
                if(m%i==0){
                    cout<<"el numero no es primo";
                    isprime=false;
                    break;
                }

            }
            if(isprime){
              cout<<endl<<"el numero es primo";}
    }
    else{
        cout<<"el numero no es primo";
    }
// Code to execute
    t1 = clock();

    double time = (double(t1-t0)/CLOCKS_PER_SEC);
    cout <<endl<< "Execution Time: " << time << endl;
    return 0;
}
