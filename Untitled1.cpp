#include<iostream>
using namespace  std;

int main(){
//here we are going to take the data we need 
string c;
int lenght;
cout<<"************************hello**************************"<<endl;
cout<<"--in this code im going to help you number your words--"<<endl;
cout<<"please tell me how much words you have: ";
cin>>lenght;
string array[lenght];
int index;
index = lenght-1;

//this for let us import the words
for (int j=0 ; j <= index; j++)
{
	int a;
	a = j+1;
	cout<<"type your "<<a<<" word: ";
	cin>>c;
	array[j] = c;	
}

//this for let us output the words with their number at left
for (int i =0; i<=index; i++ )
    {
    	int b;
    	b = i+1;
        cout<<b;
		cout<<". ";
		cout<<array[i]<<endl;
    }

    return 0;
}



