//bubble sort
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void swap (int [], int );

int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i=0; i<n; i++)
		cin>>a[i];
	for (int i=0; i<n; i++)
		swap(a, n);
	for (int i=0; i<n; i++)
		cout<<a[i];
}

void swap(int a[], int n)
{
	for (int j=0; j<n-1; j++)
		if (a[j]>a[j+1])
		{
			int temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;

		}
}