/*
 *  NO2 Web and Mobile Applications, S.L CONFIDENTIAL
 *
 *  Strawberry SDK ( OpenGL + HTML + CSS  cross-platform framework )
 *  Copyright 2010-2012 NO2 Web and Mobile Applications, S.L. All rights reserved.
 *
 * 
 *  NOTICE:  All information contained herein is, and remains
 *  the property of NO2 Web and Mobile Applications, S.L and its suppliers,
 *  if any.  The intellectual and technical concepts contained
 *  herein are proprietary to NO2 Web and Mobile Applications, S.L
 *  and its suppliers, and are protected by trade secret or copyright law.
 *  Dissemination of this information or reproduction of this material
 *  is strictly forbidden unless prior written permission is obtained
 *  from NO2 Web and Mobile Applications, S.L.
 */ 

#include "MainScene.h"

MainScene::MainScene():NO2Scene(){
	loadHTML("main.html");
}

MainScene::~MainScene(){

}

// ******** Begin of Scene methods ********
void MainScene::onSceneWillAppear() {
    NO2Scene::onSceneWillAppear();
    
    g_sharedDirector->callCustomMethod(_NO2STRING("sayHello"));
}

void MainScene::onSceneDidDisappear(){
	NO2Scene::onSceneDidDisappear();
}

void MainScene::onCommand(int command, int subcommand, NO2Object *object) {
	switch (command) {
		case COMMAND_APPLICATION_IN_BACKGROUND: {
			break;
		}
		case COMMAND_APPLICATION_IN_FOREGROUND: {
			break;
		}
		default: {
			break;
		}
	}
}
// ****************************************
