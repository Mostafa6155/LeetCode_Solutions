class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
    vector<int> freq(26, 0);
    for (char task : tasks) {
        freq[task - 'A']++;
    }
    sort(freq.begin(), freq.end(), greater<int>());
    
    int maxFreq = freq[0];
    int idleSlots = (maxFreq - 1) * n;
    
    for (int i = 1; i < 26 && idleSlots > 0; ++i) {
        idleSlots -= min(maxFreq - 1, freq[i]);
    }
    idleSlots = max(0, idleSlots);
    
    return tasks.size() + idleSlots;
}

};