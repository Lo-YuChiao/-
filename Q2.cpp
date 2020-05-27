//
//  main.cpp
//  Q2
//
//  Created by 羅右喬 on 2020/5/27.
//  Copyright © 2020 Joe. All rights reserved.
//

#include <iostream>
using namespace std;

void f(int input){
    cout << input - input / 3 - input / 5 + 2*(input/15) << endl;
}

int main(int argc, const char * argv[]) {
    int input;
    cin >> input;
    f(input);
    return 0;
}
