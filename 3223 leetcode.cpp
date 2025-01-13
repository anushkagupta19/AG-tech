class Solution {
public:
int minimumLength(string s) {

    //o(n)
        int n = s.length();
        vector<int> freq(26, 0);
        int deleted = 0;

        for(int i = 0; i < n; i++) {
            
            freq[s[i] - 'a'] += 1;

            if(freq[s[i]-'a'] == 3) {
                freq[s[i] - 'a'] -= 2; //we delete two characters
                deleted += 2; //we have deleted 2 characters here
            }
        }

        return n - deleted;


        
    }
};
