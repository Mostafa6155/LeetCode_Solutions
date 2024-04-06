#include <algorithm>
class Solution {
public:
    string bin_t0_hex(string s) {
   // reverse(s.begin(),s.end());
    string m;
    int sum;
    for (int i = 0; i+3 < s.length(); i+=4) {
        sum=0;
        sum+=((int)(s[i]-'0')*1);
        sum+=((int)(s[i+1]-'0')*2);
        sum+=((int)(s[i+2]-'0')*4);
        sum+=((int)(s[i+3]-'0')*8);
        if (sum>9&&sum<16)
            m+=(char)(87+sum);
        else
            m+= to_string(sum);

    }
    reverse(m.begin(),m.end());
    return m;
}
string toHex_negative(int num){
    string s;
    int copy= abs(num);
    int mod;
    int c=0;
    while (copy>0){
        mod=copy%2;
        s+= to_string(mod);
        copy/=2;
        c++;
    }
    int c2=32-c;
    while (c2--){
        s+='0';
    }
    string s2;
    int flag=0;
    for (char i : s) {
        if (i=='1'&&flag==0) {
            s2 += i;
            flag=1;
        }
        else if (i=='0'&&flag==0)
            s2+=i;
        else if (flag>0){
            if (i=='0')
                s2+=\1\;
            else
                s2+=\0\;
        }
    }
    return bin_t0_hex(s2);
}
string toHex2(int num) {
      string s;
      int mod;
    while (num>0){
        mod=num%16;
        if (mod>9&&mod<16)
            s+=(char)(87+mod);
        else
            s+= to_string(mod);
        num/=16;
    }
    reverse(s.begin(),s.end());
    return s;
}
string toHex(int num){
    if (num>0)
        return toHex2(num);
    else if(num==0)
        return \0\;
    else
        return toHex_negative(num);
}
};