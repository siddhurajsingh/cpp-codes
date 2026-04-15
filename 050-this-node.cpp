#include <iostream>
using namespace std;

class ConfigManager {
public:
    virtual string getConfig(string key) = 0;
    virtual void setConfig(string key, string value) = 0;
    virtual ~ConfigManager() {}
};

class FileConfigManager : public ConfigManager {
public:
    string getConfig(string key) override { return "file_" + key; }
    void setConfig(string key, string value) override { cout << "Setting " << key << " = " << value << endl; }
};

int main() {
    FileConfigManager fcm;
    cout << fcm.getConfig("theme") << endl;
    fcm.setConfig("theme", "dark");
    return 0;
}
