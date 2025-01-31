int romanToInt(char* s) {
    int ans = 0;
    int roman[128] = {0};
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;

    int len = strlen(s);
    for(int i=0; i < len - 1; i++)
    {
        if(roman[s[i]] < roman[s[i+1]])
        {
            ans = ans - roman[s[i]];
        }
        else
        {
            ans = ans + roman[s[i]];
        }
    }

    return ans + roman[s[len - 1]];
}