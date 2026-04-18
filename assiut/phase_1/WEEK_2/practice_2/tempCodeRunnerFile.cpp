   ans = (n * (n - 1)) / 2;
    for (int i = 0; i < firstPos; i++)
    {
        temp = lower_bound(_v.begin(), _v.end(), 0 - _v[i]) - _v.begin();
        ans = ans + (n - temp);
    }