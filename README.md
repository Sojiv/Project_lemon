Project_lemon
=============

A clone of Project-Lemon on Google code (https://code.google.com/p/project-lemon/)

请用git clone源代码，或使用右方的Download ZIP功能。

```sh
sudo apt-get install qt4-dev-tools
```

进入源代码目录编译：
```sh
qmake lemon.pro
make
```
Fedora16下的安装注意事项（By litimetal）： 1、安装 qt-devel 2、不要输入qmake, 而是qmake-qt4

 - argv[1]: 标准输入文件 
 - argv[2]: 选手输出文件
 - argv[3]: 标准输出文件
 - argv[4]: 本测试点满分
 - argv[5]: 分数输出文件（必须创建），仅一行，包含一个非负整数，表示得分。
 - argv[6]: 额外信息文件（可以不创建）
