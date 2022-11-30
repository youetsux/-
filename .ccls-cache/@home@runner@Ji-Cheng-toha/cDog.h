#include "cAnimal.h"

class cDog :
    public cAnimal
{
//cAnimalクラスが全部含まれいる
public:
	cDog()
	:cAnimal("None") //親クラスcAnimalのコントラクタを呼ぶ
	{
		//SetName("None");
	}
	cDog(string name)
	:cAnimal(name)
	{
	
	}
	void bark(); //barkは英語で犬が吠える
};