class TaskManager {
public:

    map<int, set<int>> ranks;
    unordered_map<int, int> userIDS;
    unordered_map<int, int> taskIDS;

    TaskManager(vector<vector<int>>& tasks) {
        for(vector<int> a: tasks){
            ranks[a[2]].insert(a[1]);
            userIDS[a[1]] = a[0];
            taskIDS[a[1]] = a[2];
        }
    }
    
    void add(int userId, int taskId, int priority) {
        ranks[priority].insert(taskId);
        userIDS[taskId] = userId;
        taskIDS[taskId] = priority;
    }
    
    void edit(int taskId, int newPriority) {
        int oldRank = taskIDS[taskId];
        ranks[oldRank].erase(taskId);
        taskIDS[taskId] = newPriority;
        ranks[newPriority].insert(taskId);
    }
    
    void rmv(int taskId) {
        int rank = taskIDS[taskId];
        ranks[rank].erase(taskId);
        userIDS.erase(taskId);
        taskIDS.erase(taskId);
    }
    
    int execTop() {
        if (ranks.empty()) return -1;
        auto it = ranks.rbegin();
        int lastKey = it->first;
        auto &ranksSet = it->second; 
        if (ranksSet.empty()) {
            ranks.erase(lastKey);
            return execTop();
        }
        int ans = *ranksSet.rbegin();
        ranksSet.erase(ans);
        if (ranksSet.empty()) {
            ranks.erase(lastKey);
        }
        int finalAns = userIDS[ans];
        userIDS.erase(ans);
        taskIDS.erase(ans);
        return finalAns;
    }
};

/**
 * Your TaskManager object will be instantiated and called as such:
 * TaskManager* obj = new TaskManager(tasks);
 * obj->add(userId,taskId,priority);
 * obj->edit(taskId,newPriority);
  * obj->rmv(taskId);
 * int param_4 = obj->execTop();
 */