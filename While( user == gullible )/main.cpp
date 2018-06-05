//
//  main.cpp
//  While( user == gullible )
//
//  Created by Jiakai Chen on 6/5/18.
//  Copyright © 2018 Jiakai Chen. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int number = 0;
    int count = 0;
    while(number != count-1 && count < 11){
        cout << "Enter a number other than " << count << ": ";
        cin >> number;
        count += 1;
    }
    if (number == count-1){
        cout << "Hey! you weren't supposed to enter " << number << "!" << endl;
    }else{
        cout << "Wow, you're more patient then I am, you win." << endl;
    }
    return 0;
}
