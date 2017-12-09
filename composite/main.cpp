#include "component.h"
#include "composite.h"
#include "leaf.h"

int main() {
	Component* co = new Composite("国内新闻");
	co->Add(new Leaf("实时新闻"));
	co->Add(new Leaf("社会新闻"));
	co->operation();
	
	delete co;
	co = NULL;

	co = new Composite("国际新闻");
	co->Add(new Leaf("国际要闻"));
	co->Add(new Leaf("环球视野"));
	co->operation();

	delete co;
	co = NULL;
}
