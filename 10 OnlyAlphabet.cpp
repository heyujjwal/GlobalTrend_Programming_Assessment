bool isOnlyAlphabetString( string &str) {

    for (char c : str) {

        if (!isalpha(c)) {
            return false;
        }

    }

    return true;
}
