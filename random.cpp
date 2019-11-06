#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
int main(){
     while(1){
     	int m,n;
     	
     	 cout<<"Enter Your Random Number "<<endl;
     	 cin>>m;
     	 
     	  n=rand()%10 +1;
     	 
     	 if(m==n){
     	 	cout<<"Congratulation You Have won The game ."<<endl;
		  }
		  else{
		  	cout<<"Sorry Man You Have Lost ..... "<<endl;
		  	cout<<"Random Number Was : "<<n <<endl;
		  }
     	
     	
     	
     	 cout<<endl;
	 }



}

