int t;
    cin >> t;
    int l, r, max1;
    while (t--)
    {
        cin >> l >> r;
        max1 = 0;
        for (int i = 0; i < 20; i++)
            max1 = max(max1, _v[r][i] - _v[l - 1][i]);
        cout << r - l - max1 << '\n';
    