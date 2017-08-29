#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int min(int[], int, int);


int main() {
	int n;
	cin>>n;
	int a[n];
	for (int i=0; i<n; i++)
	cin>>a[i];

//selection sort
	for (int i=0; i<n; i++)
	{
		a[i]=min(a, n, i);

	}
for (int i=0; i<n; i++)
	cout<<a[i]<<endl;
}
//min function
	int min(int a[], int n, int i)
	{
		int min=a[i];
			int temp;			//for swapping
			for (int j=i; j<n; j++)
			{
				if (min > a[j])
				{
					temp=min;
					min=a[j];
					a[j]=temp;

				}

			}
			return min;
			
	}
	
