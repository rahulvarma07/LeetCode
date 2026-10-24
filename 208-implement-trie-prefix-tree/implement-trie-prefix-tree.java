class Node {
    Node[] nodes = new Node[26];
    boolean flag = false;

    boolean isPresent(char ch) {
        return (nodes[ch - 'a'] != null);
    }

    void put(char ch, Node node) {
        nodes[ch - 'a'] = node;
    }

    Node get(char ch) {
        return nodes[ch - 'a'];
    }

    void setEnd() {
        flag = true;
    }

    boolean isEnd() {
        return flag;
    }
}

class Trie {
    private Node root;
    public Trie() {
        root = new Node();
    }
    
    public void insert(String word) {
        Node temp = root;
        for(int i = 0; i < word.length(); i++) {
            char ch = word.charAt(i);
            if(!temp.isPresent(ch)) {
                temp.put(ch, new Node());
            }
            temp = temp.get(ch);
        }
        temp.setEnd();
    }
    
    public boolean search(String word) {
        Node temp = root;
        for(int i = 0; i < word.length(); i++) {
            char ch = word.charAt(i);
            if(!temp.isPresent(ch)) return false;
            temp = temp.get(ch);
        }
        // apple
        // applepromax
        return temp.isEnd();
    }
    
    public boolean startsWith(String prefix) {
        Node temp = root;
        for(int i = 0; i < prefix.length(); i++) {
            char ch = prefix.charAt(i);
            if(!temp.isPresent(ch)) return false;
            temp = temp.get(ch);
        }
        return true;
    }
}

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * boolean param_2 = obj.search(word);
 * boolean param_3 = obj.startsWith(prefix);
 */