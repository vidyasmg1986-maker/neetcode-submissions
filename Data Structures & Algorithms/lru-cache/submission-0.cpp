class LRUCache {
public:
    vector<pair<int,int>> arr;
    int cap = 0;
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        for(int i=0;i<arr.size();i++){
            auto p = arr[i];
            if(p.first == key){
                arr.erase(arr.begin()+i);
                arr.insert(arr.begin(),p);
                return p.second;
            }
        }
        return -1;
    }
    
    void put(int key, int value) {
        for(int i=0;i<arr.size();i++){
            auto p = arr[i];
            if(p.first == key){
                arr.erase(arr.begin()+i);
                arr.insert(arr.begin(),{key,value});
                return ;
            }
        }
        arr.insert(arr.begin(),{key,value});

        if (arr.size() > cap) {
            arr.pop_back();
        }
    }
};
