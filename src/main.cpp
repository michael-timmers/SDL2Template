
#include "appmanager.hpp"

int main(void) {
    AppManager app;
    app.intro();  // just messages

    // check if SDL was initialised correctly.
    if (app.init() == 0) {
        app.run();
    }

    app.quit();

    return 0;
}