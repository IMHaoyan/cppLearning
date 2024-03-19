void removeSpace(string& s) {
    int slow = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            continue;
        }
        if (slow != 0) {
            s[slow++] = ' ';
        }
        while (i < s.size() && s[i] != ' ') {
            s[slow++] = s[i++];
        }
    }
    s.resize(slow);
}