class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
    vector<int> sortedDeck = deck;
    sort(sortedDeck.rbegin(), sortedDeck.rend());
    std::deque<int> revealedOrder;
    for (int card : sortedDeck) {
        if (!revealedOrder.empty()) {
            revealedOrder.push_front(revealedOrder.back());
            revealedOrder.pop_back();
        }
        revealedOrder.push_front(card);
    }
    return vector<int>(revealedOrder.begin(), revealedOrder.end());
}

};