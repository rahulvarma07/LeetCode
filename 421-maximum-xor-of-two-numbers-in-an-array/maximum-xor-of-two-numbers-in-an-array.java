class Node {
    Node[] bits = new Node[2];

    void put(int pos, Node bit) {
        bits[pos] = bit;
    }

    Node get(int pos) {
        return bits[pos];
    }

    boolean isPresent(int pos) {
        return bits[pos] != null;
    }
}

class Trie {
    private Node root; 
    Trie() {
        root = new Node();
    }

    void add(int num) {
        Node temp = root;
        for(int i = 31; i >= 0; i--) {
            int pos = (num >> i) & 1;
            if(!temp.isPresent(pos)) {
                temp.put(pos, new Node());
            }
            temp = temp.get(pos);
        }
    }

    int getMax(int num) {
        Node temp = root;
        long ans = 0L;
        for(int i = 31; i >= 0; i--) {
            int pos = ((num >> i) & 1);
            if(temp.isPresent(pos ^ 1)) {
                pos = pos ^ 1;
                ans = ans + (1 << i);
            }
            temp = temp.get(pos);
        }
        return (int)ans;
    }

}


class Solution {
    public int findMaximumXOR(int[] nums) {
        Trie trie = new Trie();
        for(int i = 0; i < nums.length; i++) {
            trie.add(nums[i]);
        }
        int ans = 0;
        for(int i = 0; i < nums.length; i++) {
            ans = Math.max(ans, trie.getMax(nums[i]));
        }
        return ans;
    }
}