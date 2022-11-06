#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main()
{

    double a,b,c,x1,x2,t;

    cin>>a>>b>>c;

    if((pow(b,2)-4*a*c)<0 ||a==0)
    {
        cout<<"Impossivel calcular"<<endl;
    }
    else
    {
        t=sqrt(pow(b,2)-4*a*c);
        x1=(-b+t)/(2*a);
        x2=(-b-t)/(2*a);
        cout<<fixed<<setprecision(5)<<"R1 = "<<x1<<endl<<"R2 = "<<x2<<endl;

    }

    return 0;
}

