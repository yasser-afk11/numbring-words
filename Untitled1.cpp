#include<iostream>
using namespace  std;

int main(){
//here we are collecting data from the user about lenght/count...
string c;
int count;
int lenght;
cout<<"************************hello**************************"<<endl;
cout<<"--in this code im going to help you number your words--"<<endl;
cout<<"please tell me how much words you have: ";
cin>>lenght;
cout<<"from where you want to start counting?: ";
cin>>count;
string array[lenght];
//i did the following two ligne like that to clarify what im doing , you can delet it and delet the '=' in the first for as you see
int index;
index = lenght-1;

//this for to collect the words
for (int j=0 ; j <= index; j++)
{
	int a;
	a = j+1;
	cout<<"type your "<<a<<" word: ";
	cin>>c;
	array[j] = c;	
}


//this for is to output the words numbred
for (int i =0; i<=index; i++ )
    {
    	int b;
    	b = count+i;
        cout<<b;
		cout<<". ";
		cout<<array[i]<<endl;
    }

    return 0;
}


