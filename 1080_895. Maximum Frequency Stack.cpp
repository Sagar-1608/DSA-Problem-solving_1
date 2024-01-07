// 895. Maximum Frequency Stack
class FreqStack {

    // by using hash map or priority_queue
    // T(n)= log(n)
    // S(n)= number of operation done in process;
    priority_queue<pair<int,pair<int,int>>> pq;
    unordered_map<int, int> freq;
    int pos=0;
public:


    FreqStack() {
        
    }
    
    void push(int val) {
        pq.push(make_pair(freq[val]++, make_pair(pos++,val)));
        
    }
    
    int pop() {
        auto val = pq.top();
        pq.pop();
        int x = val.second.second;
        freq[x]--;
        return x;
    }
};


