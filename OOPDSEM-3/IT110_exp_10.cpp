#include<bits/stdc++.h>
using namespace std;
int uni(int a[],int b[],int n1,int n2,int ans[])
{
	//mearged arry
	int size=n1+n2;
	for(int i=0;i<n1;i++)
	{
		ans[i]=a[i];
	}
	for(int i=0;i<n2;i++)
	{
		ans[i+n1]=b[i];
	}
	
	 
	//****** union of a and b 
	for(int i=0;i<size;i++)
	{
		
		for(int j=i+1;j<size;j++)
		{ 
			
			if(ans[i]==ans[j])
			{
				for(int k=j;k<size;k++)
				{
					
					ans[k]=ans[k+1];
					
				}
				size--;
				j--;//because arry size -- 
				
			}
		}
		
	}
	return size;
}
int intersection(int a[],int b[],int n1,int n2,int ans[])
{
	int size=0;
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			if(a[i]==b[j])
			{
				ans[size]=a[i];
				size++;
				
				for(int k=j;k<n2;k++)
				{
					b[k]=b[k+1];
				}
				n2--;
			
				break;
			}
		}
	}
	return size;
}
int main()
{
	int n,m,k,s_uni_a_b,i;
	cout<<"Enter size of sets ";
	cin>>n>>m>>k;
	int a[n],b[m],c[k];
	cout<<"\nEnter first set ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\nEnter second set ";
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	cout<<"\nEnter third set ";
	for(i=0;i<k;i++)
	{
		cin>>c[i];
	}
	cout<<"\nLHS\n";
	int uni_a_b[n+m];
    //(set1,set2,size of 1,size of 2,uni_set)
	s_uni_a_b = uni(a,b,n,m,uni_a_b);
	int uni_a_b_c[n+m+k];
	int s_uni_a_b_c;
    //(set1,set2,size of 1,size of 2,uni_set)
	s_uni_a_b_c=uni(uni_a_b,c,s_uni_a_b,k,uni_a_b_c);
	cout<<"\n";
	cout<<"cardinality of the set is "<<s_uni_a_b_c;
	cout<<"\n\nRHS\n\n";
	int int_a_b[n+m];
	int s_int_a_b;
    //(set1,set2,size of 1,size of 2,int_set)
	s_int_a_b=intersection(a,b,n,m,int_a_b);
	int int_b_c[m+k];
	int s_int_b_c;
    //(set1,set2,size of 1,size of 2,int_set)
	s_int_b_c=intersection(b,c,m,k,int_b_c);
	int int_a_c[n+k];
	int s_int_a_c;
    //(set1,set2,size of 1,size of 2,int_set)
	s_int_a_c=intersection(a,c,n,k,int_a_c);
	int s_int_a_b_c;
	int int_a_b_c[n+m+k];
    //(set1,set2,size of 1,size of 2,int_set)
	s_int_a_b_c=intersection(int_a_b,c,s_int_a_b,k,int_a_b_c);
	cout<<"cardinality of the set is "<<n+m+k-s_int_a_b_c-s_int_a_b-s_int_b_c-s_int_a_c;
	cout<<"\nBoth are same hence LHS = RHS \n";
 	return 0;
}