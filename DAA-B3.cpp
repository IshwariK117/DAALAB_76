#include <iostream>
#include <cmath>
using namespace std;

bool canCompleteTasks(int tasks[], int n, int perDay, int totalDays) {
    int requiredDays = 0;
    for (int i = 0; i < n; i++) {
        requiredDays += ceil(static_cast<double>(tasks[i]) / perDay);
        if (requiredDays > totalDays) {
            return false;
        }
    }
    return true;
}

int minimumTasksPerDay(int tasks[], int n, int totalDays) {
    int left = 1, right = tasks[0];
    for (int i = 1; i < n; i++) {
        right = max(right, tasks[i]);
    }
    int minTasksPerDay = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (canCompleteTasks(tasks, n, mid, totalDays)) {
            minTasksPerDay = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return minTasksPerDay;
}

int main() {
    int tasks[] = {3, 4, 7, 15};
    int n = sizeof(tasks) / sizeof(tasks[0]);
    int totalDays = 10;

    int result = minimumTasksPerDay(tasks, n, totalDays);
    cout << "Minimum tasks per day: " << result << endl;

    return 0;
}
