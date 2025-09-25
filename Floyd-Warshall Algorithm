#include <iostream>
#include <vector>

using namespace std;

void Warshall(vector<vector<int>> &a, int n){
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			for(int k=0; k<n; k++){
				if(a[i][k]+a[k][j]<a[i][j])
				{
					a[i][j]=a[i][k]+a[k][j];
				};
			};
		};
	};
};

int main() {
	
	int m=4,n=4;
	vector<vector<int>> a(m,vector<int>(n));
	cout<<"\n Enter the 16 elements of a 4x4 Matrix:"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	cout<<"\n Original Matrix: \n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<"\n";
	}

  Warshall(a,n);	
  cout<<"\n Shortest path: \n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<"\n";
	}
	
    return 0;
}
