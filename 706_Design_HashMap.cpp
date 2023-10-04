/*
Design a HashMap without using any built-in hash table libraries.
Implement the MyHashMap class:
MyHashMap() initializes the object with an empty map.
void put(int key, int value) inserts a (key, value) pair into the HashMap. If the key already exists in the map, update the corresponding value.
int get(int key) returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key.
void remove(key) removes the key and its corresponding value if the map contains the mapping for the key.

Example 1:
Input
["MyHashMap", "put", "put", "get", "get", "put", "get", "remove", "get"]
[[], [1, 1], [2, 2], [1], [3], [2, 1], [2], [2], [2]]
Output
[null, null, null, 1, -1, null, 1, null, -1]

Explanation
MyHashMap myHashMap = new MyHashMap();
myHashMap.put(1, 1); // The map is now [[1,1]]
myHashMap.put(2, 2); // The map is now [[1,1], [2,2]]
myHashMap.get(1);    // return 1, The map is now [[1,1], [2,2]]
myHashMap.get(3);    // return -1 (i.e., not found), The map is now [[1,1], [2,2]]
myHashMap.put(2, 1); // The map is now [[1,1], [2,1]] (i.e., update the existing value)
myHashMap.get(2);    // return 1, The map is now [[1,1], [2,1]]
myHashMap.remove(2); // remove the mapping for 2, The map is now [[1,1]]
myHashMap.get(2);    // return -1 (i.e., not found), The map is now [[1,1]]

Constraints:
0 <= key, value <= 106
At most 104 calls will be made to put, get, and remove.
*/
#include <vector>
class MyHashMap {
    private:
            int size = 1000;
public:
    vector<vector<int>> vobj;
    MyHashMap() : vobj(size, vector<int>())
    {
        
        
    }
    
    void put(int key, int value) 
    {
        //key exists, then update value
        int index = key % size;
        int i = 0;
        for(i = 0; i < vobj[index].size(); i+=2)
        {
            if(vobj[index][i] == key)
            {
                vobj[index][i + 1] = value;
                return;
            }
        }

        vobj[index].push_back(key);
                vobj[index].push_back(value);

        
    }
    
    int get(int key) 
    {
        int index = key % size;
        //key doesn't exist
        int val = -1;
        for(int i = 0; i < vobj[index].size(); i+=2)
        {
            if(vobj[index][i] == key)
            {
                val = vobj[index][i + 1];
            }
        }
        return val;
        
    }
    
    void remove(int key) 
    {
        int index = key % size;
        for(int i = 0; i < vobj[index].size(); i++)
        {
           if(vobj[index][i] == key)
            {
               vobj[index].erase(vobj[index].begin() + i, vobj[index].begin() + i + 2);
               return;

            }
            
        }
    }
   
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
