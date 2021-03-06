# Dinky2D

[![Language: C++](https://img.shields.io/badge/language-C++-fc487d.svg)](https://isocpp.org/)
[![License](https://img.shields.io/badge/license-MIT-000000.svg)](https://github.com/ookcode/Dinky2D/blob/master/LICENSE)

## 介绍

这是一个仿造cocos引擎编写的超精简2D游戏引擎，该引擎仅用于：

* 学习cocos2d-x引擎结构
* 学习OpenGL

## 进度

| 目标     | 是否完成 | 备注               |
| ------ | :--: | ---------------- |
| 基本渲染流程 |  ✔️  | TODO: 渲染批次合并问题   |
| 基本矩阵变换 |  ✔️  | 坐标，缩放，旋转，锚点，层次   |
| Node   |  ✔️  | 颜色，可见度，透明度       |
| Sprite |  ✔️  | 加载图片，纹理渲染        |
| Layer  |  ✔️  | 自定义颜色            |
| 定时器    |  ✔️  | 绑定在Node上，可自动释放   |
| 键盘输入   |  ✔️  | 代理模式，IMEDelegate |
| 鼠标输入   |  ✘   | TODO             |
| 动作     |  ✘   | TODO             |
| Label  |  ✔️  | TODO:对齐操作，自动换行操作 |
| Demo   |  ✔️  | 贪吃蛇Demo          |

## 附录

个人总结的cocos2d-x渲染流程。 [点击查看大图](https://raw.githubusercontent.com/ookcode/Dinky2D/master/README/cocos_rendering.png)  

![](README/cocos_rendering.png)

## 作者

Vincent Yao, ookcode@gmail.com

## 协议

![](https://upload.wikimedia.org/wikipedia/commons/thumb/f/f8/License_icon-mit-88x31-2.svg/128px-License_icon-mit-88x31-2.svg.png)

Dinky2D 基于 MIT 协议进行分发和使用，更多信息参见协议文件。
