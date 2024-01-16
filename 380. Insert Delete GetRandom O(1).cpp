class RandomizedSet {
private:
    unordered_map<int,int> mp;
    vector<int> arr;
public:
    RandomizedSet() {
    }
    bool insert(int val) {
        if(mp.count(val))return false;
        arr.push_back(val);
        mp[val] = arr.size()-1;
        return true;
    }
    bool remove(int val) {
        if(mp.count(val)){
        int index= mp[val];
        int v= arr.back();
        arr[index] = v;
        mp[v] = index;
        arr.pop_back();
        mp.erase(val);
        return true;
        }
        return false;
    }
    int getRandom() {
        int index = rand()%arr.size();
        return arr[index];
    }
};
