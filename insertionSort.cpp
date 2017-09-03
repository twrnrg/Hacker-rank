//insertion Sort
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void selection (int [], int);
void insertion (int [], int, int);

int main() {
	int n;
	cin>>n;
	int a[n];
	for (int i=0; i<n; i++)
		cin>>a[i];
	for (int i=1; i<n; i++)
		selection(a, i);
	for (int i=0; i<n; i++)
		cout<<a[i];

}

void selection (int a[], int i)
	{
		int flag = i;
		for (int j=i-1; j>=0; j--)
		{
			if(a[i]<a[j])
				flag =j;

		}
		if (flag !=i) //no read to run insertion if no change in flag
		insertion(a, flag, i);

	}
void insertion (int a[], int flag, int i)

	{
		int temp=a[i];
		for (int l=i; l>flag; l--)
			a[l]=a[l-1];
		a[flag]=temp;
	}
