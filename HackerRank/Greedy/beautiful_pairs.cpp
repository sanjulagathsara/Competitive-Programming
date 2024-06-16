#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'beautifulPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY A
 *  2. INTEGER_ARRAY B
 */

int beautifulPairs(vector<int> A, vector<int> B) {
    //vector<vector <int> > pairs;

    int zero_pairs = 0;
    int one_pairs = 0;
    int more_one_pairs = 0;

    for(int i=0;i<A.size();i++){
        //vector<int> temp_pair;
        //temp_pair.push_back(A[i]);
        int cnt = count(B.begin(), B.end(), A[i]);
        //temp_pair.push_back(cnt);
        //pairs.push_back(temp_pair);
        if(cnt == 0){
            zero_pairs++;
        }
        else if(cnt == 1){
            one_pairs++;
        }
        else{
            more_one_pairs++;
        }
        printf("%d %d\n", A[i], cnt);
        
    }

    printf("zero_pairs: %d\n", zero_pairs);
    printf("one_pairs: %d\n", one_pairs);
    printf("more_one_pairs: %d\n", more_one_pairs);

    if(zero_pairs > 0 && more_one_pairs != 0){
        // make one change in B
        zero_pairs--;
        one_pairs+=2;
        more_one_pairs--;
    }
    printf("%d\n",one_pairs+more_one_pairs);
    return (one_pairs+more_one_pairs);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string A_temp_temp;
    getline(cin, A_temp_temp);

    vector<string> A_temp = split(rtrim(A_temp_temp));

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
        int A_item = stoi(A_temp[i]);

        A[i] = A_item;
    }

    string B_temp_temp;
    getline(cin, B_temp_temp);

    vector<string> B_temp = split(rtrim(B_temp_temp));

    vector<int> B(n);

    for (int i = 0; i < n; i++) {
        int B_item = stoi(B_temp[i]);

        B[i] = B_item;
    }

    int result = beautifulPairs(A, B);

    fout << result << "\n";

    fout.close();

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
