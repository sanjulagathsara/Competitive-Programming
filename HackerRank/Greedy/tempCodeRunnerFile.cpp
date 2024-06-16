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
        
        
    }
    if(zero_pairs > 0 && more_one_pairs != 0){
        // make one change in B
        zero_pairs--;
        one_pairs++;
    }
    printf("%d/n",one_pairs);
    return one_pairs;