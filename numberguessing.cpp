#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"NUMBER GUESSING GAME"<<endl<<endl;
    int random=rand()%100+1;
    int guessno=0;
    int count=0;
    
  while(guessno!=random) {
 cout<<"User please guess a number b/w 1 to 100 :-";
   cin>>guessno;
    if(guessno>random){
    cout<<"Your no. is too high Please guess a small no. "<<endl;
   }
   else if(guessno<random)
   cout<<"Your no. is too low Please guess a larger no. "<<endl;
   count++;

}
 cout<<"Correct!You got it in "<<count<<" guesses!";
 

    return 0;
}