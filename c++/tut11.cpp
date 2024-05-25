#include<iostream>
using namespace std;

int main(){

   cout<<"This is tutorial 11"<<endl;
  // Break and continue in c++
  // Break
//   for(int i=1;i<5;i++){
//       cout<<i<<endl;
//       if(i==3){
//           break;
//       }
//   }
// Continue
for(int i=1;i<=11;i++){
    if(i==5){
        continue;
    }
    cout<<i<<endl;
}

return 0;
}