#include<iostream>
using namespace std;

int main(){
  int returns ;

  returns = 5&4; //5= 0000 0101 & 4= 0000 0100 = 0000 0100 (4)
  cout<<returns<<endl;
  
  returns = 5|4; //0000 0101 | 0000 0100 = 0000 0101 (5)
  cout<<returns<<endl;

  returns = ~5;//~(0000 0101) = 1111 1010 (-6) 
  cout<<returns<<endl;

  returns = 5<<2;//(0000 0101<<2) = 0001 0100 (20)
  cout<<returns<<endl;

  returns = 5>>2;//(0000 0101>>2) = 0000 0001 (1)
  cout<<returns<<endl;

  return 0;
}