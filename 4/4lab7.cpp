#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    
    vector<int> numbers;
    for (int i = 1; i <= 20; ++i) {
        numbers.push_back(i);
    }

    
    reverse(numbers.begin(), numbers.end());

    
    int even_count = count_if(numbers.begin(), numbers.end(), [](int n) {
        return n % 2 == 0;
    });

    cout << "Jup sandar sany: " << even_count << endl;

    
    numbers.erase(remove_if(numbers.begin(), numbers.end(), [](int n) {
        return n % 3 == 0;
    }), numbers.end());

    
    cout << "Kalgan sandar: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;

    return 0;
}
