#include <iostream> 
#include <set>
 

using namespace std;

int main(){
    set<int> myset;
    int numbers;

    cout << "10 butyn sandy engiz: " ;
    for (int i = 0;i < 10 ; i++){
        cin >> numbers;
        myset.insert(numbers);
    }

    cout << "Izdeu ushn byr san engiz: ";
    cin >> numbers;

    auto it = myset.find(numbers);
    if (it != myset.end()){
        cout << numbers << " sany BAR\n" ;
    } else {
        cout << numbers << "sany JOK\n" ;
    }

    cout << "Jiyntyktagy elementtter:\n";
    for (set<int>::iterator itr = myset.begin();
      itr != myset.end();itr++){
        cout << *itr << " ";

      }
    cout << endl;
    return 0;
    

}