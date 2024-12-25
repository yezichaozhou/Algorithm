#include <iostream>
#include <algorithm>
// Great Common Divisior
int GCD(int a,int b)
{
	if(b == 0 ) return a;
	if(a < b ) std::swap(a , b);
	return GCD(b , a%b);
}
// least common Mutiple
int LCM(int a,int b)
{
	return (a*b) / (GCD(a,b));
}
int main()
{
	int x,y;
	std::cin>>x>>y;
	std::cout<<"GCD: "<<GCD(x,y)<<std::endl;
	std::cout<<"LCM: "<<LCM(x,y)<<std::endl;
	return 0;
}
