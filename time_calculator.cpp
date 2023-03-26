#include<bits/stdc++.h>
using namespace std;
int main()
{
	float u, g=9.81,s,t1,t2,h;
	cout<<"Enter the required parameters of the projectile :"<<endl;
	cout<<"Initial velocity: ";
	cin>>u;
	cout<<"Height to be reached: ";
	cin>>s;
	h= (u*u) - (4*g*s);
	if(h<0){
		cout<<"Height cannot be attained"<<endl;
	}else if(h>0){
		float nmr,dmr;
		nmr=(-1 *u) + sqrt(h);
		dmr= 2*(-1)*g;
		t1=nmr/dmr;
		nmr=(-1 *u) - sqrt(h);
		t2=nmr/dmr;
		if (t1>=0 && t2>=0)
		{
			cout<<"time required to attain: "<<t1<<" and "<<t2;
		}else if(t1>=0 && t2<0)
		{
			cout<<"time required to attain: "<<t1;
		}else if(t2>=0 && t1<0)
		{
			cout<<"time required to attain: "<<t2;
		}else if (t1==t2){
			cout<<"time required to attain: "<<t1;
		}else{
			cout<<"enter valid parameters";
		}
		
	}
}
