/*
 * int-to-str.cpp
 *
 *  Created on: 2021年12月8日
 *      Author: richardqiu
 */

#include <iostream>
using namespace std;


string int_to_string(int num){//the function convert intto string
    string res="";
    if(num==0){
    	res+=char(48);
    }

    while(num>0){
        res+=char(num%10+48);
        num/=10;
    }

    for(int i=0;i<res.length()/2;i++){
        swap(res[i],res[res.length()-i-1]);
    }
    return res;
}

int main()
{
	int n;
	cout<<"Enter an integer: ";
	cin>>n;
	cout<<int_to_string(n)<<endl;
	return 0;
}



