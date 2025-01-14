#include<iostream>
using namespace std;

void fun(int n)
{
    int i=1;
	while(i<=n)
	{
		cout<<i<<" ";
		i++;
	}
}
//Although we achieved the same output somehow but obviously it is not following the same pattern
//like as the head recursion follows
int main()
{
	int a=3;
	fun(a);
}