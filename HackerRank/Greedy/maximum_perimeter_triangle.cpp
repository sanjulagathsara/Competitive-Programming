#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'maximumPerimeterTriangle' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY sticks as parameter.
 */

vector<int> maximumPerimeterTriangle(vector<int> sticks) {
    vector<vector<int> > triangles;

    sort(sticks.begin(), sticks.end());

    int stickSize = sticks.size();

    for(int i1 = 0;i1 < stickSize-2;i1++){
        for(int i2 = i1+1;i2 < stickSize-1;i2++){
            for(int i3 = i2+1;i3 < stickSize;i3++){
                if(sticks[i1] + sticks[i2] > sticks[i3]){
                    vector<int> triangle;
                    triangle.push_back(sticks[i1]);
                    triangle.push_back(sticks[i2]);
                    triangle.push_back(sticks[i3]);
                    triangle.push_back(sticks[i1] + sticks[i2] + sticks[i3]);
                    triangles.push_back(triangle);
                }
                else{
                    break;
                }
            }
        }
    }

    triangles.erase(unique(triangles.begin(), triangles.end()), triangles.end());

    if(triangles.size() == 0){
        vector<int> triangle2;
        triangle2.push_back(-1);
        printf("-1\n");
        return triangle2;
    }

    for(int i=0;i<triangles.size();i++){
        for(int j=0;j<4;j++){
            printf("%d ", triangles[i][j]);
        }
        printf("\n");
    }

    int n = triangles.size();


    if(triangles.size() == 1){
        printf("%d %d %d\n", triangles[0][0], triangles[0][1], triangles[0][2]);
        vector<int> triangle3;
        triangle3.push_back(triangles[0][0]);
        triangle3.push_back(triangles[0][1]);
        triangle3.push_back(triangles[0][2]);
        return triangle3;
    }
    else if(triangles[n-1][3] > triangles[n-2][3]){
        printf("%d %d %d\n", triangles[n-1][0], triangles[n-1][1], triangles[n-1][2]);
        vector<int> triangle3;
        triangle3.push_back(triangles[n-1][0]);
        triangle3.push_back(triangles[n-1][1]);
        triangle3.push_back(triangles[n-1][2]);
        return triangle3;
    }
    else if(triangles[n-1][2] > triangles[n-2][2]){
        printf("%d %d %d\n", triangles[n-1][0], triangles[n-1][1], triangles[n-1][2]);
        vector<int> triangle3;
        triangle3.push_back(triangles[n-1][0]);
        triangle3.push_back(triangles[n-1][1]);
        triangle3.push_back(triangles[n-1][2]);
        return triangle3;
    }
    else if(triangles[n-1][0] > triangles[n-2][0]){
        printf("%d %d %d\n", triangles[n-1][0], triangles[n-1][1], triangles[n-1][2]);
        vector<int> triangle3;
        triangle3.push_back(triangles[n-1][0]);
        triangle3.push_back(triangles[n-1][1]);
        triangle3.push_back(triangles[n-1][2]);
        return triangle3;
    }
    else{
        vector<int> triangle3;
        triangle3.push_back(triangles[n-1][0]);
        triangle3.push_back(triangles[n-1][1]);
        triangle3.push_back(triangles[n-1][2]);
        return triangle3;
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string sticks_temp_temp;
    getline(cin, sticks_temp_temp);

    vector<string> sticks_temp = split(rtrim(sticks_temp_temp));

    vector<int> sticks(n);

    for (int i = 0; i < n; i++) {
        int sticks_item = stoi(sticks_temp[i]);

        sticks[i] = sticks_item;
    }

    vector<int> result = maximumPerimeterTriangle(sticks);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

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
