class Trie {

public:
    /** Initialize your data structure here. */
    struct trie{
        int mp[26];
        bool end;
        trie(){
            end = false;
            memset(mp, -1, sizeof(mp));
        }
    };
    vector<trie> tree;
    Trie() {

        trie root=trie();
        tree.push_back(root);
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        int pos=0;
        for(int i=0;i<word.length();i++)
        {
            if(tree[pos].mp[word[i]-'a']==-1)
            {
                tree[pos].mp[word[i]-'a']=tree.size();
                tree.push_back(trie());
            }
            pos=tree[pos].mp[word[i]-'a'];
        }
        tree[pos].end=true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        int pos=0;
        for(int i=0;i<word.length();i++)
        {
            if(tree[pos].mp[word[i]-'a']==-1)
                    return false;

            pos=tree[pos].mp[word[i]-'a'];
        }
        return (tree[pos].end==true);
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string word) {
        int pos=0;
       int i=0;
        for( i=0;i<word.length();i++)
        {
            if(tree[pos].mp[word[i]-'a']==-1)
                return false;
            pos=tree[pos].mp[word[i]-'a'];
        }
        if(i<word.length())
                return false;

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
