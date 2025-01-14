#include<iostream>
using namespace std;
//Tree Recursion
//A recursive function that is calling itself more then once
//So two or more recursive calls
void fun(int n)
{
	if(n>0)
	{
		cout<<n<<" ";
		fun(n-1);
	 	fun(n-1);
	}
}
int main()
{
	int a=3;
	fun(a);
}