// 1472. Design Browser History
// by using the vector of string 
class BrowserHistory {
public:
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        cur_idx = 0;
    }
    
    void visit(string url) {
        // Clear forward history
        history.resize(cur_idx + 1);
        history.push_back(url);
        cur_idx++;
    }
    
    string back(int steps) {
        int prev_idx = max(0, cur_idx - steps);
        cur_idx = prev_idx;
        return history[cur_idx];
    }
    
    string forward(int steps) {
        int next_idx = min((int)history.size() - 1, cur_idx + steps);
        cur_idx = next_idx;
        return history[cur_idx];
    }

private:
    vector<string> history;
    int cur_idx;
};

