#include "manager.h"
#include "scenemanager.h"
#include "allscenes.h"


static SceneID sceneid;

void SceneID::SceneManager() 
{

	if (sceneid.id == 0) 
	{

		ManageMenuScreen();

	}
	else if (sceneid.id == 1)
	{

		ManageControlMenu();

	}
}

