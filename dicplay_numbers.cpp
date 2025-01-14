#include<iostream>
using namespace std;

void fun1(int n)
{
	if(n>0)
	{
		cout<<n<<" ";
		fun1(n-1);
	}
}
//Output: n,n-1,n-2,n-3: if n=3, Output: 3 2 1

void fun2(int n)
{
	if(n>0)
	{
		fun2(n-1);
  		cout<<n<<" ";
	}
}

//Output: if n=3, Output: 1 2 3

void fun3(int n)
{
	if(n>0)
	{
		//Calling Phase:
	    cout<<n<<" ";

  		fun3(n-1);
  				  
  		//Returning Phase:
  		cout<<n<<" ";
	}
}
//Output: if n=3; Output: 3 2 1 1 2 3

int main()
{
    int x=3;
    fun1(x);

	cout<<endl;

	fun2(x);

	cout<<endl;

	fun3(x);


    return 0;
}