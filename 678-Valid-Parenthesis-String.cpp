class Solution {
public:
    bool checkValidString(string s) {
    int balance = 0; 
    int flexible = 0; 

   
    for (char c : s) {
        if (c == '(') {
            balance++;
        } else if (c == ')') {
            balance--;
        } else {
            flexible++; 
        }

      
        if (balance + flexible < 0) {
            return false;
        }
    }

    balance = 0;
    flexible = 0;
    for (int i = s.length() - 1; i >= 0; --i) {
        if (s[i] == ')') {
            balance++;
        } else if (s[i] == '(') {
            balance--;
        } else {
            flexible++; 
        }
        if (balance + flexible < 0) {
            return false;
        }
    }
    return true;
}

};