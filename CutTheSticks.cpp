vector <int> cutSticks(vector <int> lengths) {

    vector<int> res;
    int min1 = INT_MAX;
    for(int i:lengths)
    {
        if(i<min1)
            min1 = i;
    }

    res.push_back(lengths.size());
    while(lengths.size())
    {
        int count =0;
        int min2 = min1;

        vector<int>temp;
        min1 = INT_MAX;
        for(int i: lengths)
        {
            if((i-min2)>0)
            {
                temp.push_back(i-min2);
                count++;
                if(min1> (i-min2))
                    min1 = (i - min2);
            }

        }

        if(count)
            res.push_back(count);
        lengths = temp;

    }

    return res;

}
