#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isbalanced(const string& expr){
    stack<char> s;
    for (char ch : expr){
        if (ch == '('){
            s.push(ch);   
        } else if (ch == ')'){
            if (s.empty()){
                return false;
            } 
            s.pop();
     }
    }
    return s.empty();
}

int main(){
    string input ;
    cout << "Ornekty engyz: ";
    getline(cin, input);

    if (isbalanced(input)){
        cout << "Correct " << endl;
    }
    else {
        cout << "Incorrect "<< endl;
    }
    return 0;
}