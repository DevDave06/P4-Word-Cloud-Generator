#include<iostream>
using namespace std;

class TrieNode{

    public:

    bool hasEnded;
    char letter;
    int frequency;
    TrieNode* childrenArray[26];

    TrieNode(char ch){
        ch = letter;
        for(int i=0 ; i<26 ; i++){
            childrenArray[i] = NULL;
        }
        hasEnded = false;
    }
};

int main(){

}
