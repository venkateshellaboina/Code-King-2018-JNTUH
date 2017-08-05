#include <iostream>
using namespace std;

int main() {
	//code
	int cases;
	cin>>cases;
	while(cases--)
	{
	    int n;
	    cin>>n;
	    if(n==1 )
	    {
	        cout<<0<<" "<<0<<endl;
	        continue;
	    }
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int min,max,min_pos,max_pos;

	    int i=0;

	    while(i<n)
	    {
	        min=a[i];
	        for(int k=i+1;k<n;k++)
	        {
	            if(a[k]<min)
	            min=a[k];
	        }

	        if(min==a[i])
	        {
	            i++;
	        }
	        else
	        {
	          min_pos=i;
	          break;

	        }
	   }
	   i=n-1;
	    while(i>0)
	    {
	        max=a[i];
	        for(int k=0;k<i;k++)
	        {
	            if(a[k]>max)
	            max=a[k];
	        }

	        if(max==a[i])
	        {
	            i--;
	        }
	        else{
	          max_pos=i;
	          break;

	        }
	   }

	  cout<<min_pos<<" "<<max_pos<<endl;
	}
	return 0;
}
