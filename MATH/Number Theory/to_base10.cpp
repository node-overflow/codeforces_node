string to_base10(string s, int b) {
    string x = "0";

    for (char it : s) {
        int dig = ('0' <= it && it <= '9') ? it - '0' : it - 'A' + 10;

        int carry = 0;
        for (int i = x.size() - 1; i >= 0; i--) {
            int cur = (x[i] - '0') * b + carry;
            x[i] = (cur % 10) + '0';
            carry = cur / 10;
        }

        while (carry) {
            x.insert(x.begin(), (carry % 10) + '0');
            carry /= 10;
        }

        carry = dig;
        for (int i = x.size() - 1; i >= 0 && carry; i--) {
            int cur = (x[i] - '0') + carry;
            x[i] = (cur % 10) + '0';
            carry = cur / 10;
        }

        while (carry) {
            x.insert(x.begin(), (carry % 10) + '0');
            carry /= 10;
        }
    }

    return x;
}
