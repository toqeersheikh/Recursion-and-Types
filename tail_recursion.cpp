#include<iostream>
using namespace std;

void fun(int n)
{
	if(n>0)
	{
	    //Tail Recursion
	    //Means it doesn't have to perform anything at returning phase
		cout<<n<<" ";
		fun(n-1);
	 	//recursive call is the last statement in function
		//fun(n-1)+n; Even this is not a tail recursion because at returning phase n will be added
	}
}

int main()
{
	int x=5;
	fun(x);
	return 0;
}