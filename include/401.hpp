class Solution
{
  public:
    vector<string> readBinaryWatch(int num)
    {
        if (num == 0)
            return {"0:00"};

        function<vector<int>(int, int)> helper = [](int start, int num) -> vector<int> {
            vector<int> list{64, 128, 256, 512, 1, 2, 4, 8, 16, 32};

            vector<int> r;
            if (10 - start < num)
                return r;

            if (num == 1)
            {
                for (int i = start; i < 10; ++i)
                {
                    r.push_back(list[i]);
                }
                return r;
            }

            vector<int>  vec = helper(start + 1, num - 1);
            for (const auto t : vec)
            {
                int sum = list[start] + t;
                if ((sum >> 6) > 11 || (sum & 0x3f) > 59)
                    continue;
                r.push_back(sum);
            }
            vec = helper(start + 1, num);
            for (const auto t : vec)
            {
                r.push_back(t);
            }
            return r;
        };

        vector<string> res;
        vector<int>  vec = helper(0, num);
        for (const int v : vec)
        {
            const int hour = v >> 6;
            const int minute = v & 0x3f;
            string s = (minute < 10) ? ":0" : ":";
            res.push_back(to_string(hour) + s + to_string(minute));
        }
        return res;
    }
};