#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the  value of n :";
    cin>>n;

    int a[n];
    for (int i =0;i<n;i++){
        cout<<"ENTER THE "<<i+1<<"ELEMENT :";
        cin>>a[i];
    }

    cout<<"PREVIOUS ARRAY :";
    for(int i = 0; i<n;i++){
       cout<<a[i]<<" ";
    }
    cout<<endl;

    int i,value,j;
    for(i=1;i<n;i++){
        value=a[i];
        j=i-1;

        while(value<a[j]){
            a[j+1]=a[j];
            j--;
            if(j==-1){
                break;
            }
        }
        a[j+1]=value;

    }
   


    cout<<"SORT ARRAY :";
    for(int i = 0; i<n;i++){
       cout<<a[i]<<" ";
    }




    


}