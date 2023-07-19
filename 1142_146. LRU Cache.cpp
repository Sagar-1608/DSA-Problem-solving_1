// 146. LRU Cache
class LRUCache {
public:
    int cnt;
    unordered_map<int,int> mp;
    deque<int> dq;
    set<pair<int,int>> st;
    unordered_map<int,int> val;
    int res=0;
    LRUCache(int capacity) {
        cnt=capacity;
    }
    
    int get(int key) {
        if(mp.count(key)){
            int v=val[key];
            st.erase({v,key});
            res++;
            st.insert({res,key});
            val[key]=res;
            return mp[key];
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(!mp.count(key)){
            if(mp.size()==cnt){
                int r=st.begin()->second;
                st.erase(st.begin());
                mp.erase(r);
                val.erase(r);
            }
            res++;
            mp[key]=value;
            val[key]=res;
            st.insert({res,key});
        }
        else{
            int v=val[key];
            st.erase({v,key});
            res++;
            st.insert({res,key});
            mp[key]=value;
            val[key]=res;
        }

    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
