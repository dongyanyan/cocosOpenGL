//
//  mainScene.cpp
//  dinky2d
//
//  Created by Vincent Yao on 2017/7/16.
//  Copyright © 2017年 ookcode. All rights reserved.
//

#include "MainScene.hpp"
#include "GameScene.hpp"
MainScene::MainScene() {
    glm::vec2 winSize = Director::getInstance()->getWinSize();

    Layer* layer = new Layer(winSize.x, winSize.y, glm::vec4(0.3f, 0.3f, 0.3f, 1.0f));
    this->addChild(layer);
    
    Label *lbl = new Label("欢迎来到Dinky的世界", 20);
    lbl->setAnchorPoint(glm::vec2(0.5f, 1.0f));
    lbl->setPosition(glm::vec2(winSize.x / 2, winSize.y - 10));
    this->addChild(lbl);
    
    Label *lbl2 = new Label("这是一个使用Dinky开发的贪吃蛇小游戏", 20);
    lbl2->setAnchorPoint(glm::vec2(0.5f, 1.0f));
    lbl2->setPosition(glm::vec2(winSize.x / 2, winSize.y - 60));
    this->addChild(lbl2);
    
    Label *lbl3 = new Label("你需要同时控制两条小蛇、WASD控制绿色小蛇、↑←↓→控制红色小蛇", 20);
    lbl3->setAnchorPoint(glm::vec2(0.5f, 1.0f));
    lbl3->setPosition(glm::vec2(winSize.x / 2, winSize.y - 110));
    this->addChild(lbl3);
    
    Label *lbl4 = new Label("Enter键开始游戏...", 20);
    lbl4->setAnchorPoint(glm::vec2(0.5f, 0.0f));
    lbl4->setPosition(glm::vec2(winSize.x / 2, 20));
    this->addChild(lbl4);
    
    Sprite* red = new Sprite("../dinky2d/resources/image.jpg");
    red->setColor(glm::vec3(1.0f, 0.0f, 0.0f));
    // red->setOpacity(0.5f);
    red->setSize(glm::vec2(100.0f, 100.0f));
    red->setPosition(winSize / 2.0f);
    red->setRotation(30.0f);
    layer->addChild(red);
    _sp = red;

    Sprite* green = new Sprite("../dinky2d/resources/image.jpg");
    green->setColor(glm::vec3(0.0f, 1.0f, 0.0f));
    green->setSize(glm::vec2(100.0f, 100.0f));
    green->setAnchorPoint(glm::vec2(1.0f, 1.0f));
    green->setRotation(-30.0f);
    red->addChild(green);
    
    Sprite* blue = new Sprite("../dinky2d/resources/image.jpg");
    blue->setColor(glm::vec3(0.0f, 0.0f, 1.0f));
    blue->setSize(glm::vec2(100.0f, 100.0f));
    blue->setPosition(glm::vec2(100.0f, 0.0f));
    blue->setAnchorPoint(glm::vec2(0.0f, 0.0f));
    blue->setRotation(60.0f);
    green->addChild(blue);

    this->schedule(SCHEDULE(MainScene::update));
    Director::getInstance()->registerKeyboardDelegate(this);
}

void MainScene::onKeyUp(int key, bool isSpecialKey) {
    printf("onKeyUp %d\n", key);
    if (key == 13) {
        Director::getInstance()->runWithScene(new GameScene());
    }
}

void MainScene::onKeyDown(int key, bool isSpecialKey) {
    printf("onKeyDown %d\n", key);
}

void MainScene::update(float dt) {
    _sp->setRotation(_sp->getRotation() + 1.0f);
}

MainScene::~MainScene() {
    Director::getInstance()->unregisterKeyboardDelegate(this);
    this->unschedule(SCHEDULE(MainScene::update));
}
