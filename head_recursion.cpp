#include<iostream>
using namespace std;

void fun(int n)
{
	//Head Recursion
	//A recursive function in which the first statement is a recursive statement
	if(n>0)
	{
		fun(n-1);
		//first statement is a recursive case
	    cout<<n<<" ";
	    //And any other processing will be done afterwards
	}
}
int main()
{
	int a=5;
	fun(a);
	
}