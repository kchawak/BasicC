// Leetcode solution for reversing a string

char* reverseString(char* s) {
    char temp;
    int i, j;
    int len = strlen(s);
    
    j = len - 1;
    
    for(i = 0; i < len; i++)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        j--;
        
        if(j == (len / 2) - 1)
        {
            break;
        }
    }
    return s;
}
