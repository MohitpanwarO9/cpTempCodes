#include<bits/stdc++.h>
using namespace std;

// implementing trie
class Trie{
    Trie *charArry[26] = {NULL};
    bool flag = false;
    
    public:
    //insert word implementation ----
    string insertWord(string word, Trie *root){
        int n = word.length();
        int i = 0;
        
        while(i < n){
            int indx = word[i]-'a';
            if(root->charArry[indx] != NULL){
                root = root->charArry[indx];
            }
            else{
                root->charArry[indx] = new Trie();
                root = root->charArry[indx];
            }
            i++;
        }
        
        root->flag = true;
        return "INSERTED";
    }
    
    //search word implementation ----
    string searchWord(string word, Trie *root){
        int n = word.length();
        int i=0;

        while(i<n){
            int indx = word[i] - 'a';
            if(root->charArry[indx] == NULL) return "NOT Found";
            
            root = root->charArry[indx];
            i++;
        }
        
        if(root->flag){
            return "Found !!";
        }

        return "Not Found !";
    }

    //check prefix exit or not
    string checkPerfix(string perfix, Trie *root){
        int n = perfix.size();
        int i = 0;

        while(i<n){
            int indx = perfix[i] - 'a';
            if(root->charArry[indx] == NULL) return "not exist";
            
            root = root->charArry[indx];
            i++;
        }

        return "exist !!"; 
    }
};

int main(){
    vector<string> inputStr = {"hello", "mohit","iit", "tea", "eat"};
    int n = inputStr.size();

    Trie *root = new Trie();

    for(int i=0; i<n; i++){
        string result = root->insertWord(inputStr[i], root);
        cout<<result<<endl;
    }

    vector<string> searchInput = {"hello", "mohit","cricket","te","eat","ldks"};

    for(int i=0; i<searchInput.size(); i++){
        string result = root->searchWord(searchInput[i], root);
        cout<<result<<endl;
    }

    vector<string> prefixInput = {"hel", "mo","cri","te","eat","ldks"};

    for(int i=0; i<searchInput.size(); i++){
        string result = root->checkPerfix(prefixInput[i], root);
        cout<<result<<endl;
    }
    return 0;
}