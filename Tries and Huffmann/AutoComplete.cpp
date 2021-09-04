class TrieNode {
   public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
    TrieNode *root;

   public:
    int count;

    Trie() {
        this->count = 0;
        root = new TrieNode('\0');
    }

    bool insertWord(TrieNode *root, string word) {
        // Base case
        if (word.size() == 0) {
            if (!root->isTerminal) {
                root->isTerminal = true;
                return true;
            } else {
                return false;
            }
        }

        // Small calculation
        int index = word[0] - 'a';
        TrieNode *child;

        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursive call
        return insertWord(child, word.substr(1));
    }

    void insertWord(string word) {
        if (insertWord(root, word)) {
            this->count++;
        }
    }
    
    TrieNode* searchNode(TrieNode* root,string word)
    {
        if(word.size()==0)
            return root;
        int index=word[0]-'a';
        if(root->children[index]!=NULL)
            return searchNode(root->children[index],word.substr(1));
    }
    TrieNode* searchNode(string word){
        return searchNode(root,word);
    }
/////////////////////if isTerminal is true then print//////////////////////////////////    
    void search(TrieNode *root,string word)
    {
        if(root==NULL)
            return;
        if(root->isTerminal)
             cout<<word<<endl;
        for(int i=0;i<26;i++)
        {
            if(root->children[i]!=NULL)
                search(root->children[i],word+root->children[i]->data);
        }    
    }

    void autoComplete(vector<string> input, string pattern) {
        // Write your code here
        for(int i=0;i<input.size();i++)
            insertWord(input[i]);
///////////////////////////find node of last character of pattern word/////////////        
        TrieNode* temp=searchNode(pattern);
/////////////////////search all possible word from above node///////////////////////        
        search(temp,pattern);
    }
};
