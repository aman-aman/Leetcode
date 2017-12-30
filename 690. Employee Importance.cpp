//aman kumar jha
/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee

    int id;
    // the importance value of this employee

    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        unordered_map<int, Employee*> es;
        for (auto e : employees)
            es.emplace(e->id, e);
        return dfs(id, es);
    }
private:
    int dfs(int id, const unordered_map<int, Employee*>& es) {
        const auto e = es.at(id);
        int sum = e->importance;
        //cout<<sum<<"\n";
        for (int rid : e->subordinates)
            sum += dfs(rid, es);
        return sum;
    }
};
