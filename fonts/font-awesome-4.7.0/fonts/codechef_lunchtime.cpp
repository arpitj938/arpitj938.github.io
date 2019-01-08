#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	long int count =0,counter=0,index,temp_index;
	for(long int i=0;i<s.length();i++)
	{
	   if(s[i]!='0')
	   {  
	       count++;
	       index=i;
	   }
	}
	//cout<<count;
	while(count)
	{  counter++;  
	  for(long int i=0;i<=index;i++)
	{   
	   if(s[i]!='0')
	   {   
	       s[i]='0';
	       temp_index= i;
	   }
	   else
	   s[i]='1';
	   
	}
	index = temp_index;
	count=0;
	for(long int i=0;i<=index;i++)
	{
	   if(s[i]!='0')
	   {   
	       count++;
	       temp_index= i;
	   }
	}
	index=temp_index;
	}
	cout<<counter;
	return 0;
}
