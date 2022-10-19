class TrieNode {
    private:
    TrieNode* child[26];
    bool flag;
    
    public:
	// check if reference to the given character is present
    bool containsKey(char ch) {
        return (child[ch - 'a'] != NULL);
    }
    
	// create a new reference
    void putTrieNode(char ch, TrieNode* node) {
        child[ch-'a'] = node;
    }
    
	// return a node for the given character
    TrieNode* getTrieNode(char ch) {
        return child[ch-'a'];
    }
    
	// set flag as true for when the word is completed
    void setEndTrieNode() {
        flag = true;
    }
    
	// check status of the last reference node
    bool isEndTrieNode() {
        return flag;
    }
};

class Trie {
private:
    TrieNode* root;
    
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* node = root;    
        
        for(int i = 0; i < word.length(); i++)
        {
            if(!node->containsKey(word[i])) {
                node->putTrieNode(word[i], new TrieNode());
            }
            
            node = node->getTrieNode(word[i]);
        }
        
        node->setEndTrieNode();
    }
    
    bool search(string word) {
        TrieNode* node = root;    
        
        for(int i = 0; i < word.length(); i++)
        {
            if(!node->containsKey(word[i])) {
                return false;
            }
            
            node = node->getTrieNode(word[i]);
        }
        
        return node->isEndTrieNode();
    }
    
    bool startsWith(string prefix) {
        TrieNode* node = root;   
        
         for(int i = 0; i < prefix.length(); i++)
        {
            if(!node->containsKey(prefix[i])) {
                return false;
            }
            
            node = node->getTrieNode(prefix[i]);
        }
        
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */