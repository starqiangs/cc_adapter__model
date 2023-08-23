#include <iostream>
#include <memory>

class VGA
{
public:
    virtual void Play() = 0;
};

class HDMI
{
    virtual void Play() = 0;
};

class Tv01 : public VGA
{
public:
    void Play()
    {
        std::cout << "用vga进行连接用于视频播放" << std::endl;
    }
};

// tv02 只支持hdmi
class Tv02 : public HDMI
{
public:
    void Play()
    {
        std::cout << "用HDMI进行连接用于视频播放" << std::endl;
    }
};


class Computer
{
public:
    void PlayVideo(VGA *vga)
    {
        vga->Play();
    }
};

int main()
{
    Computer computer;
    computer.PlayVideo(new Tv01());
    // 接口传入的对象不兼容
    // 方案 写一个转换头 vga信号转换成hdmi信号（适配器）
    computer.PlayVideo(new Tv02());

    return 0;
}
