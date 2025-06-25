#include <iostream>
#include <map>
#include <sstream>
#include <string>

using namespace std;


int main(){
   string input = "this is a test this is only a test ";
   istringstream iss(input);
   string word;

   map<string,int> wordcount;

   while (iss >> word){
    wordcount[word]++;
   }

   for (const auto& pair : wordcount){
    cout << pair.first <<" -> " << pair.second << endl;
   }

   return 0;

}
