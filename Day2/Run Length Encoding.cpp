string encode(string str)
{     
  int n = str.length();
  string s;
    for (int i = 0; i < n; i++) {
        s += str[i];
        int count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
         s += to_string(count);
    }
    return s;
}     
