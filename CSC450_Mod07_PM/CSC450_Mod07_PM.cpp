#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

// Thread 1: count up
void countUp()
{
    for (int i = 0; i <= 20; i++)
    {
    	cout << "Counting Up: " << i << endl;
        this_thread::sleep_for(chrono::milliseconds(100));
    }
}

// Thread 2: count down
void countDown()
{
    for (int i = 20; i >= 0; i--)
    {
        cout << "Counting Down: " << i << endl;
        this_thread::sleep_for(chrono::milliseconds(100));
    }
}

int main()
{
	// Start first thread
	cout << "Starting Thread 1 (Count Up)..." << endl;
    thread t1(countUp);
    t1.join();  // wait until finished

    // Start second thread AFTER first thread is complete
    cout << "Starting Thread 2 (Count Down)..." << endl;
    thread t2(countDown);
    t2.join();

    cout << "Program complete." << endl;

    return 0;
}
