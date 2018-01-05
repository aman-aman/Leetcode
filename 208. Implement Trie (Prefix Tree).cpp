//aman kumar jha
class Trie
{
public:
    struct trienode
    {
        trienode *child[26];
        bool endis;
    };
    struct trienode *getnode()
    {
        trienode *p=new trienode();
        p->endis=false;
        for(int i=0;i<26;i++)
            p->child[i]=NULL;
        return p;
    }
    trienode *root;
    /** Initialize your data structure here. */
    Trie()
    {
       root=getnode();
    }

    /** Inserts a word into the trie. */
    void insert(string word)
    {
        trienode *p=root;
        for(int i=0;i<word.length();i++)
        {
            int index=word[i]-'a';
            if(!p->child[index])
                p->child[index]=getnode();
            p=p->child[index];
        }
        p->endis=true;

    }

    /** Returns if the word is in the trie. */
    bool search(string word)
    {
        trienode *p=root;
        for(int i=0;i<word.length();i++)
        {
            int index=word[i]-'a';
            if(!p->child[index])
                return false;
            p=p->child[index];
        }
        return (p!=NULL&&p->endis);
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix)
    {
        trienode *p=root;
        for (int i=0;i<prefix.size()&&p; i++)
        {
            int index=prefix[i]-'a';
            p=p->child[index];
        }
        return p;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie obj = new Trie();
 * obj.insert(word);
 * bool param_2 = obj.search(word);
 * bool param_3 = obj.startsWith(prefix);
 */
