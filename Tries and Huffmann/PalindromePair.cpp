class TrieNode {
   public:
    char data;
    TrieNode **children;
    bool isTerminal;
    int childCount;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
        childCount = 0;
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

    bool add(TrieNode *root, string word) {
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
            root->childCount++;
        }

        // Recursive call
        return add(child, word.substr(1));
    }

    void add(string word) {
        if (add(root, word)) {
            this->count++;
        }
    }

    /*..................... Palindrome Pair................... */
    
     string reverseWord(string word){
        string reverse="";
        for(int i=word.size()-1;i>=0;i--){
            reverse=reverse+word[i];
        }
        return reverse;
    }

    bool isPalindromePair(vector<string> words) {
        // Write your code here
        if(words.size()==0)
            return false;
        for(int i=0;i<words.size();i++){
            this->add(reverseWord(words[i]));
        }
        return isPalindromePair(this->root,words);
    }
    
     bool isPalindromePair(TrieNode*root,vector<string>words){
        if(words.size()==0 || root==NULL)
            return false;
        for(int i=0;i<words.size();i++){
            if(doesPairExistFor(root,words[i],0)){
                return true;
            }
        }
        return false;
    }
     bool doesPairExistFor(TrieNode*root,string word,int startIndex){
        if(word.length()==0)
            return true;
        if(startIndex==word.length()){
            if(root->isTerminal)
                return true;
            return checkRemainingBranchesInTrie(root,"");
        }
        int charIndex=word[startIndex]-'a';
        TrieNode *child=root->children[charIndex];
        if(child==NULL){
            if(root->isTerminal){
                return checkWordForPalindrome(word.substr(startIndex));
            }
            return false;
        }
        return doesPairExistFor(child,word,startIndex+1);
    }
    
    bool checkRemainingBranchesInTrie(TrieNode* root,string word){
        if(root->isTerminal){
            if(checkWordForPalindrome(word))
                return true;
        }
        for(int i=0;i<26;i++){
            TrieNode *child=root->children[i];
            if(child==NULL){
                continue;
            }
            string fwd=word+child->data;
                if(checkRemainingBranchesInTrie(child,fwd))
                    return true;
        }
      return false;  
    }
    
    bool checkWordForPalindrome(string word){
       int startIndex=0;
       int endIndex=word.length()-1;
        while(startIndex < endIndex){
            if(word[startIndex]!=word[endIndex])
                return false;
            startIndex+=1;
            endIndex-=1;
        }
        return true; 
    }
};
