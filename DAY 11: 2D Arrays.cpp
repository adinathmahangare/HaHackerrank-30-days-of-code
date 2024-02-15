#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int sum(vector<vector<int>> arr, int stx, int sty){
    return (arr[stx][sty] + arr[stx][sty+1] + arr[stx][sty+2] +
            arr[stx+1][sty+1] +
            arr[stx+2][sty] + arr[stx+2][sty+1] + arr[stx+2][sty+2]);
}

int main()
{

    vector<vector<int>> arr(6);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < 6; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }
    
    // Initialize ans to cover the lower bound of the possible hourglass sums
    int ans = numeric_limits<int>::min(); // Lower bound for int

    // Calculate hourglass sums and update ans if a new maximum sum is found
    for(int i = 0 ; i < 4 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            int current_sum = sum(arr, i, j);
            ans = max(ans , current_sum);
        }
    }
    
    // Print the maximum hourglass sum
    cout << ans << endl;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
