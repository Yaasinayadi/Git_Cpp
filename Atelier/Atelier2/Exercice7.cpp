#include <iostream>
#include <vector>
using namespace std;

vector<string> recursive(string word){
    vector<string> result  ;
    for(int i=0; i< word.size(); i++){
        string tourne = "";
        tourne += word[i];
        for(int j=0; j <word.size(); j++){
            if(word[i] != word[j])
                tourne += word[j];
        }
        result.push_back(tourne);

    }
    return result;
    
}

int main()
{
    string word = "abc";
    vector<string> answer = recursive(word);

    for(string str: answer){
        cout << str<< endl;
    }
    
    
    return 0;
}