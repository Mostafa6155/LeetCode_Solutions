class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
    int time = 0;
    std::multiset<int> ms;
    int before = 0;
    for (int i = 0; i < tickets.size(); i++) {
        if (tickets[i] < tickets[k]) {
            ms.insert(tickets[i]);
        }
        if (i < k && tickets[i] >= tickets[k]) {
            before++;
        }
    }
    int n = tickets.size();
    auto it = ms.begin();
    int last = 0;
    for (int i = 0; it != ms.end() && !ms.empty(); ++i) {
        time += (*it - last) * n;
        n--;
        last = *it;
        it++;
    }
    time += (tickets[k] - last - 1) * n;
    time += (before + 1);
    return time;
}
};