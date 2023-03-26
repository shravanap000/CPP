#include<bits/stdc++.h>  //Including preprocessor directive
using namespace std;
int main()               //main function
{
	string str;
	int i,j=0,sum=0,len=0;
	cout<<"enter the string(without space) to check whether it is a palindrome or not: ";
	cin>>str;           //String input
	i=str.length();     //assigning string length to an integer
	int k=i;
	i--;
	 while (str[j]!='\0') 
	 {
        if (str[j++] != str[i--]) {    //comparing characterwise from end and starting
            sum++;
            break;
        }else{
        	len++;
		}
     }
     if(sum!=0){                        //computing whether a palinddrome or not
     	cout<<"Entered string is not a palindrome sequence ";
	 }else if(len==k){
	 	cout<<"Entered string is a palindrome sequence";
	 }else{
	 	cout<<"Error";
	 }
	 return 0;
}

