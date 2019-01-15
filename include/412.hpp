class Solution
{
  public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> r;
        r.reserve(n);
        for (int i = 1; i <= n; ++i)
        {
            const bool b3 = (i % 3) == 0;
            const bool b5 = (i % 5) == 0;
            if (!b3 && !b5)
            {
                r.push_back(to_string(i));
                continue;
            }
            if (b3 && b5)
            {
                r.push_back("FizzBuzz");
                continue;
            }
            r.push_back((b3) ? "Fizz" : "Buzz");
        }
        return r;
    }
};