#include <iostream>
#define N 1001
/*
 * 给定一个长度为 n
 的整数数组 nums，数组中所有的数字都在 0∼n−1
 的范围内。

数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。

请找出数组中任意一个重复的数字。
 */
int n;
int a[N];
int main()
{
	int res = -1;
	std::cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		std::cin>>x;
		if(a[x] == 0)
		{
			a[x]++;
		}
		else
		{
			res = x;
		}
	}
	std::cout<<"duplicateInArray value : "<<res<<std::endl;
	return 0;
}
