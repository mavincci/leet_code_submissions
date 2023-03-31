class Solution {
public:
    vector<string> fizzBuzz(int n) {
        stringstream temp;
        vector<string> temp_v;

        for(auto count{1}; count <= n; ++count, temp.str("")) {
            bool three_er{count % 3 == 0};
            bool five_er{count % 5 == 0};

            if(!three_er && !five_er)
                temp << count;
            else {
                if(three_er)
                    temp << "Fizz";
                
                if(five_er)
                    temp << "Buzz";
            }

            temp_v.push_back(temp.str());
        }
        return temp_v;
    }
};