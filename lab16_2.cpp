#include<iostream>
using namespace std;

//Write the definition of myString() here

void myString(char *&text, int N){
	
	
	text = new char[N];
	
	for(int i=0;i<N;i++){
		
		text[i]='A'+i;
		
	}
	
	
}


int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
