#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
    queue<string> visitorqueue;
    string name;

    cout << "5 adam atyn engiz:\n";
    for (int i = 0; i < 5 ; i++){
        cout << i + 1 << "-shi adam: ";
        getline(cin,name);

        if (name.empty()){
            cout << "Aty bos bolmau kerek!\n";
            i--;
            continue;
        }
        visitorqueue.push(name);
    }
    cout << "Qyzmet korsetylyp jatyr:\n";
    while (!visitorqueue.empty()){
        cout << "Now serving: " << visitorqueue.front() << endl;
        visitorqueue.pop();
    }
    cout << "Queue is empty."<< endl;
    return 0;
}
