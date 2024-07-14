int longestUniqueSubstring(string str)
{
    // if string length is 0
    if (str.length() == 0)
        return 0;
    // if string length 1
    if (str.length() == 1)
        return 1;

    // if string length is more than 2
    int maxlen = 0;
    bool visited[256] = { false };
    // left and right pointer of sliding window
    int left = 0, right = 0;
    while (right < str.length()) {
        // if character is visited
        if (visited[str[right]] == true) {
            while (visited[str[right]] == true) {
                visited[str[left]] = false;
                left++;
            }
        }
       // if character is not visited
        visited[str[right]] = true;
       // increment the counter of length 
        maxlen = max(maxlen, (right - left + 1));
        right++;
    }
    return maxlen;
}
