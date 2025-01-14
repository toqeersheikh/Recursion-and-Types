#include<iostream>
using namespace std;
//Static variables are created only once when the program is loaded
//All function calls will use the same copy of  'x'
//Recursive Function

int fun(int n)
{
	static int x=0;
    //static variable
     if(n>0)
     {
	     x++;
   		//return fun(n-1)+n;
   		return fun(n-1)+x;
		   //n will be added at returning phase
		   //x(after making changes) will be added at returning phase
     }
    return 0;
}

int main()
{
	//Static and Global Variables in C++
	int a=5;
	cout<<fun(a)<<endl;
}