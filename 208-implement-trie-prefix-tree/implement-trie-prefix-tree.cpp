struct TrieNode{
    TrieNode* links[26];
    bool flag = false;

    bool containsChar(char ch){
        return (links[ch-'a'] != NULL);
    }

    void put(char ch, TrieNode* node){
        links[ch-'a'] = node;
    }

    TrieNode* get(char ch){
        return links[ch - 'a'];
    }

    void markEnding(){
        flag = true;
    }

    bool isEnding(){
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
        for(int i = 0; i < word.size(); i++){
            if(!node->containsChar(word[i])){
                node->put(word[i], new TrieNode());
            }
            node = node->get(word[i]);
        }
        node->markEnding();
    }
    
    bool search(string word) {
        TrieNode* node = root;
        for(char ch : word) {
            if(!node->containsChar(ch)) return false;
            node = node->get(ch);
        }
        return node->isEnding();
    }
    
    bool startsWith(string prefix) {
        TrieNode* node = root;
        for(int i = 0; i < prefix.size(); i++){
            if(!node->containsChar(prefix[i])) return false;
            else{
                node = node->get(prefix[i]);
            }
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