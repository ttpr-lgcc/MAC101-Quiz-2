#include <iostream>
using namespace std;

int main(){
    int limit;

    cout <<"Please enter a number" << endl;
    cin >> limit;

    for(int i = 1; i <= limit; i++){

    if(i % 3 == 0 && i % 5 == 0){
    cout <<"Fizzbuzz" << endl;
    } 
    else if(i % 5 == 0){
        cout <<"Buzz" << endl;
    } 
    else if(i % 3 == 0){
        cout <<"Fizz" << endl;
    }
    else{
        cout << i << endl;
    }
      
    }

   return 0; 
}
