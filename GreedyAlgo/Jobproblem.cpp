#include <bits/stdc++.h>
using namespace std;

// Profit ke descending order mein sort karega
bool compare(pair<int, int> p1, pair<int, int> p2) {
    return p1.second > p2.second;
}

int maxprofit(vector<pair<int, int>> jobs) {

    
    sort(jobs.begin(), jobs.end(), compare);

    // first -> deadline
    // second -> profit

    int profit = 0;

    // Next available time slot
    int safeDeadline = 1;

    for(int i = 0; i < jobs.size(); i++) {

        // Job ka deadline current available slot se
        // bada ya equal hai to job kar sakte hain
        if(jobs[i].first >= safeDeadline) {

            profit += jobs[i].second;
            safeDeadline++;
        }
    }

    cout << "max profit = " << profit << endl;

    return profit;
}

int main() {

    int n = 4;

    vector<pair<int, int>> jobs(n, make_pair(0, 0));

    jobs[0] = make_pair(4, 20);
    jobs[1] = make_pair(1, 10);
    jobs[2] = make_pair(1, 40);
    jobs[3] = make_pair(1, 30);

    maxprofit(jobs);

    return 0;
}