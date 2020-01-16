#include<iostream>
using namespace std;

int potencia(int a,int b){
    if(b==0){
        return 1;
    }
    else if(b%2!=0){
        return a*potencia(a,b-1);
    }
    else{
        return potencia(a*a,b/2);
    }
}


int main()
{
    int a,b;
    cout<<"Numero: ";
    cin>>a;
    cout<<"potencia: ";
    cin>>b;
    cout<<potencia(a,b);
    return 0;
}
