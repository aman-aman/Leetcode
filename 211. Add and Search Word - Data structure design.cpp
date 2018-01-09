//aman kumar jha
class trienode {
public:
    bool isKey;
    trienode* children[26];
    trienode(): isKey(false) {
        memset(children, NULL, sizeof(trienode*) * 26);
    }
};

class WordDictionary {
public:
    WordDictionary() {
        root = new trienode();
    }

    // Adds a word into the data structure.
    void addWord(string word) {
        trienode* p = root;
        for (char c : word) {
            if (!(p -> children[c - 'a']))
                p -> children[c - 'a'] = new trienode();
            p = p -> children[c - 'a'];
        }
        p -> isKey = true;
    }

    // Returns if the word is in the data structure. A word could
    // contain the dot character '.' to represent any one letter.
    bool search(string word) {
        return query(word.c_str(), root);
    }

private:
    trienode* root;

    bool query(const char* word, trienode* node) {
        trienode* p = node;
        for (int i = 0; word[i]; i++) {
            if (p && word[i] != '.')
                p = p -> children[word[i] - 'a'];
            else if (p && word[i] == '.') {
                trienode* tmp = p;
                for (int j = 0; j < 26; j++) {
                    p = tmp -> children[j];
                    if (query(word + i + 1, p))
                        return true;
                }
            }
            else break;
        }
        return p && p -> isKey;
    }
};
