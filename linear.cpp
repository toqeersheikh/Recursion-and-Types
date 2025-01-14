#include<iostream>
using namespace std;
//Linear recursion:
//A recursive function that is calling itself only once


void recursive(int n)
{
	if(n>0)
	{
		cout<<n<<" ";
  		recursive(n-1);
	 	cout<<n<<" ";
	}
}
int main()
{
	int a=5;
	recursive(a);

}