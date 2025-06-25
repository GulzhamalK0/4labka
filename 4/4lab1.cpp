#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    srand(static_cast<unsigned int>(time(nullptr)) );

    vector<int> numbers;
    for (int i = 0; i < 10;i++){
        numbers.push_back(rand() % 100 + 1);
    }
    cout << "Bastapky vector: ";
    for (int n : numbers){
        cout << n << " ";
    }
    cout << endl;

    sort (numbers.begin(), numbers.end());

    cout << "Suryptalgan vector: ";
    for (int n : numbers){
        cout << n << " ";
    }
    cout << endl;

    auto minn = min_element(numbers.begin(), numbers.end());
    auto maxx = max_element(numbers.begin(), numbers.end());

    cout << "Minimum element: " << *minn << endl;
    cout << "Maximum element: " << *maxx << endl;

    auto last = unique(numbers.begin(),numbers.end());
    numbers.erase(last,numbers.end());

    cout << "Kaitalanbaityn vector: " ;
    for (int n : numbers){
        cout << n << " ";
    }
    cout << endl;
    return 0;
}