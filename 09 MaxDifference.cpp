int maxDifference(vector<int>& arr) {

    if (arr.size() < 2) {
        return 0;
    }

    int max_diff = INT_MIN;

    int min_element = arr[0];

    for (int i = 1; i < arr.size(); ++i) {

        max_diff = max(max_diff, arr[i] - min_element);
        min_element = min(min_element, arr[i]);

    }

    return max_diff;
}
