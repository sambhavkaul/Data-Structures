class Trie {
    public:
        vector<Trie*> children;
        bool isEnd;

        Trie() {
            children.resize(26, NULL);
            isEnd = false;
        }

        // Adding add and search word
        void add(string word) {
            Trie* node = this; // Root node

            for(int i = 0; i < word.size(); i++) {
                if(node -> children[word[i] - 'a'] != NULL) {
                } else {
                    // We need to add this character
                    node -> children[word[i] - 'a'] = new Trie();
                }
                node = node -> children[word[i] - 'a'];
            }

            node -> isEnd = true;
        }

        bool search(string word) {
            Trie* node = this; // Root node

            for(int i = 0; i < word.size(); i++) {
                if(node -> children[word[i] - 'a'] != NULL) {
                    node = node -> children[word[i] - 'a'];
                } else {
                    return false;
                }
            }

            return node -> isEnd;
        }

        bool startsWith(string prefix) {
            TrieNode* node = this; // Root node
    
            for(int i = 0; i < prefix.size(); i++) {
                if(node -> children[prefix[i] - 'a'] != NULL) {
                    node = node -> children[prefix[i] - 'a'];
                } else {
                    return false;
                }
            }
            return true;
        }
};
