#include <iostream>
using namespace std;

int main() {
	// Pattern
	/*    1
	    2 3 2
      3 4 5 4 3
    4 5 6 7 6 5 4
   5 6 7 8 9 8 7 6 5
    */
    int n;
	cin>>n;
	int c=-1;
	for(int i=1;i<=n;i++)
	{
	    for(int j=n-1;j>=i;j--)
	      cout<<" ";
	    int x=i,k=i;
	    while(x--)
	    {
	        cout<<k;
	        k++;
	    }
	    int y=i-1;x=i;
	    x=x+c;
	    while(y-- && i!=1)
	    {
	       cout<<x;
	       x--;
	    }
	    c++;

	    cout<<"\n";
	}
	return 0;
}
