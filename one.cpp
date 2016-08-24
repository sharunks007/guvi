#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int n; // no. of register numbers
	cin>>n;
	int *a = (int*) malloc(n*sizeof(int)); // initializing array
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	sort(a,a+n); // n log(n)
	
	for(int i=1;i<n;i++)
		if(a[i]==a[i-1])
			cout<<a[i]<<endl;
	return 0;
}