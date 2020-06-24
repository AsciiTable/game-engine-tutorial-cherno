#include <GameEngine.h>

class TutorialGameOne : public GameEngine::Application {
public:
	TutorialGameOne() {

	}

	~TutorialGameOne() {
	}
};


GameEngine::Application* GameEngine::CreateApplication() {
	return new TutorialGameOne();
}