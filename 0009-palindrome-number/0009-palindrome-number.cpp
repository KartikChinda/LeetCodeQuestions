class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
        return false;
    if (x < 10)
        return true;
    if (x % 10 == 0)
        return false;

    int palChecker = 0, noOfZeroes = 0, temp1 = x, temp2 = x;
    while (temp1)
    {
        temp1 = temp1 / 10;
        noOfZeroes++;
    }
    // cout << "No of zeroes: " << noOfZeroes << endl;
    noOfZeroes--;
    long long increaser = pow(10, noOfZeroes);
    if (noOfZeroes == 2)
        increaser = 100;

    // cout << "Increaser: " << increaser << endl;
    while (temp2)
    {
        int digit = temp2 % 10;
        palChecker += digit * increaser;
        increaser /= 10;
        temp2 /= 10;
    }
    // palChecker = palChecker / 10;
    // cout << palChecker << endl;

    if (palChecker == x)
        return true;
    return false;
    }
};