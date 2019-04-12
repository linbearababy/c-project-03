#include<iostream>
using std::cout; using std::cin; using std::endl;
using std::boolalpha;
#include <cmath>
// add any other includes you like.

// functions go here
//find prime factors and check the number of factors
bool is_prime(long num) {

    for (long low = 2; low <= std::sqrt(num); low++) {
        if (num % low == 0) {
           return false;
        }


    }
    return true;
}


bool is_powerful(long num){
    //if (is_prime(num) == false)
    if (is_prime(num) == true){
        return false;
    }
    //if (is_prime(num) == true){
    int n=1;
    for ( long low = 2; low < num/2+1; low++) {
        if (num % low == 0) {
            if (is_prime(low) == true) {
                n= n * low;
            }
        }
    }
    //int n_i = n*low; get all times prime number
    int value_num =  num % (n * n);
    if ( value_num ==0){
        return true;
    }
    else {
        return false;
    }


    }



bool is_perfect_power(long num){
    for (int n=2; n<=sqrt(num); n++){
        int new_num;
        double new_value;
        //get the log functin
        new_num = log(num)/log(n);
        new_value = log(num)/log(n);
        if (new_num == new_value){
            return true;
        }
    }
    return false;
}


bool is_achilles(long n){
    // check the status or the condiction
    if (is_powerful(n) == true & is_perfect_power(n) == false){
        return true;
    }
    else{
        return false;
    }
}




// main is below. You cannot modify main
int main () {
    cout << boolalpha;

    int test_case;
    cin >> test_case;

    switch (test_case) {


        case 1 : {
            long num;
            cin >> num;
            cout << is_prime(num) << endl;
            break;
        } // of case 1

        case 2 : {
            long num;
            cin >> num;
            cout << is_powerful(num) << endl;
            break;
        } // of case 2

        case 3 : {
            long num;
            cin >> num;
            cout << is_perfect_power(num) << endl;
            break;
        } // of case 3

        case 4 : {
            long num;
            cin >> num;
            cout << is_achilles(num) << endl;
            break;
        } // of case 4

    } // of switch
} // of main
