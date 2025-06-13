#include <string>
using namespace std;

class task {
    private:
        string title;
        bool isDone;
    public:
        // Constructor
        task(string title);

        // Methods

        void markDone();
        bool getStatus();
        string getTitle();
};