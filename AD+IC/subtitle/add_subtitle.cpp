#include <cstdlib> // 用于system()
#include <assert.h>
#include <stdio.h>

int main() {
    // 命令构建：添加字幕
    const char* cmd = "ffmpeg -i /Users/htp/Desktop/subtitle/P01_11.mp4 -vf subtitles=subtitles.srt output.mp4";

    // 执行FFmpeg命令
    int result = system(cmd);

    // 检查命令执行结果
    if(result == 0) {
        printf("字幕添加成功。\n");
    } else {
        printf("字幕添加失败。\n");
    }

    return 0;
}

// g++ add_subtitle.cpp -o add_subtitle
// ./add_subtitle