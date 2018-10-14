
#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

using namespace std;

int main(void)
{
    cout << "Father: " << getpid() << endl;
    for (int i = 0; i < 2; ++i) {
        int result = fork();
        if (result == 0) {
            cout << "New Process: " << getpid() << " Father: " << getppid() << endl;
        }
        cout << '-' << endl;
    }
    int result = wait(NULL);
    int result = wait(NULL);

    cout << "Process " << getpid() << " exits" << endl;

    return 0;
}

