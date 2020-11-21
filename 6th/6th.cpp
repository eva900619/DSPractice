#include<iostream>

using namespace std;
int x,y,v;
set(int A[],int i,int j,int v){
	A[i*2+j]=v;
}
get(int A[],int i,int j){
	return A[i*2+j];
}
int main(){

    int A[] = {2,4,6,8};
    int i, j; 
	cout<<"¤@ºû°}¦CÂà¤Gºû°}¦C:"<<endl; 
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++)
        {
            cout<<"  "<<A[i * 2 + j];
        }

        cout<<endl;   
    }      
}

 



