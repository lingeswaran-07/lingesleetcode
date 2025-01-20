class Trienode{
    public:
    Trienode *child[26];
    bool worde;
    Trienode(){
    worde=false;
    for(auto &a:child){
      a=NULL;
    }
    }
};

class Trie {
    Trienode *root; 
    
public:
    Trie() {
        root=new Trienode();

    }
    
    void insert(string word) {
        Trienode *node=root;
        for(char c:word){
            if(node->child[c-'a']==NULL){
                node->child[c-'a']=new Trienode();

            }
            node=node->child[c-'a'];

        }
        node->worde=true;
    }
    
    bool search(string word ,bool prefix=false) {
        Trienode *node=root;
        for(char c:word){
            if(node->child[c-'a']==NULL){
              return false;

            }
            node=node->child[c-'a'];
        }
        if(prefix==false) return node->worde;
        return true;
        
    }
    
    bool startsWith(string prefix) {
         return search(prefix,true);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */