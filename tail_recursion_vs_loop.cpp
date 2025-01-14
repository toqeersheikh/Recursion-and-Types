#include<iostream>
using namespace std;

//Every recursive function can be written as Loop and Vice Versa
void fun(int n)
{
	while(n>0)
	{
		cout<<n<<" ";
		n--;
	}
}


int main()
{
   int x=5;
   fun(x);
}