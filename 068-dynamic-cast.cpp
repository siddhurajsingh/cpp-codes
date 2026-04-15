#include <iostream>
using namespace std;

class View {
public:
    virtual void render() = 0;
    virtual void update() = 0;
    virtual ~View() {}
};

class ListView : public View {
public:
    void render() override { cout << "Rendering list view..." << endl; }
    void update() override { cout << "Updating list view..." << endl; }
};

class GridView : public View {
public:
    void render() override { cout << "Rendering grid view..." << endl; }
    void update() override { cout << "Updating grid view..." << endl; }
};

int main() {
    ListView lv;
    lv.render();
    lv.update();
    return 0;
}
