#include<iostream.h>
int main()
{
	float num , choice;
	cout<<"plz enter the value to convert"<<endl;
	cin>>num;
	cout<<"1- meter to feet\n"<<"2- feet to meter\n";
	cin>>choice;
	if(choice==1)
	{
	    cout<<num<<"meter"<<num*3.28<<"feet\n";	 
	  
	}
    if(choice==2)
	{
		cout<<num<<"feet"<<num/3.28<<"meter\n";

	} 	
	
	
	
	
	
}