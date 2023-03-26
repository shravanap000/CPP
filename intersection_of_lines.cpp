#include<bits/stdc++.h>
using namespace std;
float slope(float x,float x1,float y,float y1);
int main()
{
	float x1,y1,x2,y2,x3,y3,x4,y4,m1,m2,c1,c2;
	cout<<"enter the first line coordinates :"<<endl;
	cout<<"x1 :";
	cin>>x1;
	cout<<"y1 :";
	cin>>y1;
	cout<<"x2 :";
	cin>>x2;
	cout<<"y2 :";
	cin>>y2;
	cout<<"c1 :";
	cin>>c1;
	if(y1==y2){
		cout<<" enter valid coordinates";
	}
	else
	{	
	m1=slope(x1,x2,y1,y2);
	cout<<"slope of first line is :"<<m1<<endl;
	cout<<"enter the second line coordinates :"<<endl;
	cout<<"x3 :";
	cin>>x3;
	cout<<"y3 :";
	cin>>y3;
	cout<<"x4 :";
	cin>>x4;
	cout<<"y4 :";
	cin>>y4;
	cout<<"c2 :";
	cin>>c2;
	if(y3==y4){
		cout<<"no valid coordinates"<<endl;
	}
	else
	  {
	m2=slope(x3,x4,y3,y4);
	cout<<"slope of second line is :"<<m2<<endl;
	  }
	}
	if(m1!=m2)
	{
		float x,y;
	x=(c1-c2)/(m2-m1);
	y = (m1*x)+c1;
	cout<<"intersection coordinates are:"<<endl;
	cout<<"x:"<<x<<" y:"<<y<<endl;
    }
    else
    {
    	cout<<"Lines are parallel, so no intersection of lines"<<endl;
	}
}
float slope(float x,float x1,float y,float y1)
{
	float m;
	m = (x1-x)/(y1-y);
	return m;
}
