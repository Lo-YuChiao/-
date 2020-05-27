//
//  main.cpp
//  Q1
//
//  Created by 羅右喬 on 2020/5/27.
//  Copyright © 2020 Joe. All rights reserved.
//

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void fa(string input){
    int len = input.length();
    for(int i = len - 1; i >=0 ; i--) cout << input[i];
    cout << endl;
}

void fb(string input){
    vector<string> cut_input;
    istringstream ss1(input);
    string cut;
    while(getline(ss1, cut, ' ')) cut_input.push_back(cut);
    for(int i = 0; i < cut_input.size(); i++){
        int len = cut_input[i].length();
        for(int j = len - 1; j >=0 ; j--) cout << cut_input[i][j];
        cout << " ";
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    string input;
    getline(cin, input);
    fa(input);
    fb(input);
    
    return 0;
}
