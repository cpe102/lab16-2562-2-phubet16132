#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here

vector<int> randomVector(int num){
	
	vector<int> a(num);
	for(int i=0;i<num;i++){
		a[i]=rand()%10;
	}
	return a;
}

void showVector(vector<int> want){
	cout<<"[";
	
	for(int i=0;i<want.size();i++){
		cout<<want[i]<<" ";
	}
	
	cout<<"]";
	
}

int  dotProduct(vector<int> A,vector<int> B){
	
	int cize=sizeof(A)/sizeof(A[0]);
	
	int dot=0 ;
	for(int i=0;i<cize;i++){
		dot += A[i]*B[i];
		
	}
	
	return dot;
	
}
