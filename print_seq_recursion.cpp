#include<iostream>
using namespace std;

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