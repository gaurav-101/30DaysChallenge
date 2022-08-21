class TrieNode{
    public:
        char data;
        int childCount;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char ch ){
            data=ch;
            childCount=0;
            for(int i=0;i<26;i++){
                children[i]=NULL;
            }
            isTerminal=false;
        }
};

class Trie{
    public:
        TrieNode* root;

        Trie(){
            root=new TrieNode('\0');
        }

        void insertUtil(TrieNode* root, string word){
            if(word.size()==0){
                root->isTerminal=true;
                return;
            }

            int index=word[0]- 'a';
            TrieNode* child;
            //absent
            if(root->children[index]==NULL){
                child=new TrieNode(word[0]);
                root->childCount++;
                root->children[index]=child;
            }
            //present
            else{
                child=root->children[index];
            }
            insertUtil(child, word.substr(1));
        }

        void insertWord(string word){
            insertUtil(root,word);
        }
};


class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        string ans="";
        Trie* t=new Trie();
    
        for(int i=0;i<N;i++){
            t->insertWord(arr[i]);
        }
        TrieNode* temp=t->root;
        string first=arr[0];
        int i=0;
        while(i<first.size() and temp->childCount ==1){
            if(temp->isTerminal){
                break;
            }
            ans+=first[i];
            
            int index=first[i]-'a';
            temp=temp->children[index];
            i++;
        }
        if(ans=="") return "-1";
        return ans;
    }
};