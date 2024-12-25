#include <iostream>
#include <vector>
// typic dp question
#define WEIGHT 1000010
#define NUM 101
#define MAX(a,b) ({\
		__typeof__(a) __a = a;\
		__typeof__(b) __b = b;\
		__a > __b ? __a : b;\
		})
int dp2[NUM][WEIGHT];
int dp1[WEIGHT];
int value[NUM];
int weight[NUM];
int n,m;
int TwoDimession()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			dp2[i][j] = dp2[i-1][j];
			if(weight[i] <= j)
			{
				dp2[i][j] = MAX(dp2[i][j],dp2[i-1][j-weight[i]] + value[i]);
			}
		}
	}
	return dp2[n][m];
}

int OneDimession()
{
	for(int i=1;i<=n;i++)
	{
		for(int j =m;j>=0;j--)
		{
			if(weight[i] <= j)
			{
				dp1[j] = MAX(dp1[j],dp1[j-weight[i]] + value[i]);
			}
		}
	}
	return dp1[m];
}
int main()
{
	std::cin>>n>>m;		// input and process can together
	for(int i=1;i<=n;i++)
	{
		std::cin>>weight[i]>>value[i];
	}
	std::cout<<"TWODimession MAX value : "<<TwoDimession()<<std::endl;
	std::cout<<"OneDimession MAX vlaue : "<<OneDimession()<<std::endl;
	return 0;
}
