#include<iostream>
using namespace std;

int main(){
    int n=10;

    //For loop
    for(int i =1;i<=n;i++){
        cout<<" -> "<<i<<endl;
    }

    //while Loop
    int i=1;
    while ( i <=n)
    {
        cout<<" -> "<<i<<endl;
        i++;
    }
    
    //do-while Loops
        int j = 1;
    do 
    {   
        cout<<" -> "<<j<<endl;
        j++;
    } while (j<=n);

    return 0;   
}