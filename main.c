#include <iostream>
#include <vector>
#include <queue>
#include <iomanip>
#include <algorithm>

using namespace std;

struct Process {
    int id;
    int burstTime;
    int remainingTime;
    int completionTime;
    int turnaroundTime;
    int waitingTime;
};

void roundRobinScheduling(vector<Process>& processes, int timeQuantum) {
    queue<Process> processQueue;
    
    for (auto& p : processes) {
        p.remainingTime = p.burstTime;
        processQueue.push(p);
    }
    
    int currentTime = 0;
    cout << "\nGantt Chart: | ";
    
    while (!processQueue.empty()) {
        Process current = processQueue.front();
        processQueue.pop();
        
        int executionTime = min(current.remainingTime, timeQuantum);
        current.remainingTime -= executionTime;
        currentTime += executionTime;
        
        cout << "P" << current.id << " (" << executionTime << " ms) | ";
        
        if (current.remainingTime == 0) {
            current.completionTime = currentTime;
            processes[current.id - 1] = current;
        } else {
            processQueue.push(current);
        }
    }
    cout << endl;
    
    double totalWaitingTime = 0, totalTurnaroundTime = 0;
    
    for (auto& p : processes) {
        p.turnaroundTime = p.completionTime;
        p.waitingTime = p.turnaroundTime - p.burstTime;
        totalWaitingTime += p.waitingTime;
        totalTurnaroundTime += p.turnaroundTime;
    }
    
    cout << "\nProcess\tBurst Time\tCompletion Time\tTurnaround Time\tWaiting Time\n";
    for (const auto& p : processes) {
        cout << "P" << p.id << "\t" << p.burstTime << "\t\t"
             << p.completionTime << "\t\t"
             << p.turnaroundTime << "\t\t"
             << p.waitingTime << endl;
    }
    
    cout << fixed << setprecision(2);
    cout << "\nAverage Turnaround Time: " << (totalTurnaroundTime / processes.size()) << " ms" << endl;
    cout << "Average Waiting Time: " << (totalWaitingTime / processes.size()) << " ms" << endl;
}

int main() {
    int numProcesses, timeQuantum;
    
    cout << "Enter number of processes: ";
    cin >> numProcesses;
    
    cout << "Enter time quantum (in ms): ";
    cin >> timeQuantum;
    
    vector<Process> processes(numProcesses);
    for (int i = 0; i < numProcesses; i++) {
        cout << "Enter burst time for process P" << (i + 1) << ": ";
        cin >> processes[i].burstTime;
        processes[i].id = i + 1;
    }
    
    roundRobinScheduling(processes, timeQuantum);
    
    return 0;
}