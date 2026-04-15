#include <iostream>
using namespace std;

class Renderer {
public:
    virtual void render() = 0;
    virtual ~Renderer() {}
};

class OpenGLRenderer : public Renderer {
public:
    void render() override { cout << "Rendering with OpenGL..." << endl; }
};

class VulkanRenderer : public Renderer {
public:
    void render() override { cout << "Rendering with Vulkan..." << endl; }
};

int main() {
    OpenGLRenderer ogl;
    ogl.render();
    return 0;
}
