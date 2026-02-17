#include <bits/stdc++.h>
using namespace std;

class TaskManager {
    // Heap stores {priority, taskId, userId}
    priority_queue<tuple<int,int,int>> maxHeap;
    unordered_map<int, pair<int,int>> taskMap; 
    // taskId -> {userId, priority}

public:
    TaskManager(vector<vector<int>>& tasks) {
        for (auto &t : tasks) {
            int userId = t[0], taskId = t[1], priority = t[2];
            taskMap[taskId] = {userId, priority};
            maxHeap.push({priority, taskId, userId});
        }
    }
    
    void add(int userId, int taskId, int priority) {
        taskMap[taskId] = {userId, priority};
        maxHeap.push({priority, taskId, userId});
    }
    
    void edit(int taskId, int newPriority) {
        auto [userId, oldPriority] = taskMap[taskId];
        taskMap[taskId] = {userId, newPriority};
        maxHeap.push({newPriority, taskId, userId}); 
        // Old entry will be ignored in execTop
    }
    
    void rmv(int taskId) {
        taskMap.erase(taskId); 
        // Lazy deletion: old entry will be skipped when popped
    }
    
    int execTop() {
        while (!maxHeap.empty()) {
            auto [priority, taskId, userId] = maxHeap.top();
            if (taskMap.count(taskId) && taskMap[taskId].second == priority) {
                // valid entry
                maxHeap.pop();
                taskMap.erase(taskId);
                return userId;
            }
            maxHeap.pop(); // stale entry, skip
        }
        return -1; // no tasks available
    }
};


// --> Solved on LeetCode(3408) (Try Again Later)