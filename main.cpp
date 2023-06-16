// [1]ヘッダーをインクルードする場所

#include <conio.h>

// [2]定数を定義する場所
// [3]列挙定数を定義する場所

// [3-1]モンスターの種類を定義する
enum {
	MONSTER_PLAYER,			// [3-1-1]プレイヤー
	MONSTER_MAX				// {3-1-4]モンスターの種類の数
};

// [4]構造体を定義する場所

// [4-1]キャラクターの構造体を宣言する
typedef struct {
	int hp;					// [4-1-1]HP
	int maxHp;				// [4-1-2]最大HP
	int mp;					// [4-1-3]MP
	int maxMp;				// [4-1-4]最大MP
	char name[4 * 2 + 1];	// [4-1-5]名前
}CHARACTER;

// [5]変数を宣言する場所

// [5-1]モンスターのステータスの配列を宣言する
CHARACTER monsters[MONSTER_MAX] =
{
	// [5-1-1]MONSTER_PLAYER	プレイヤー
	{
		15,				// [5-1-2]int hp				HP
		15,				// [5-1-3]int maxHp				最大HP
		15,				// [5-1-4]int mp				MP
		15,				// [5-1-5]int maxMp				最大HP
		"ゆうしゃ",		// [5-1-6]char name[4*2 + 1]	名前
	},
};

// [6]関数を宣言する場所

// [6-4]戦闘シーンの関数を宣言する
void Battle() {
	// [6-4-6]キーボード入力を待つ
	_getch();
}

// [6-6]プログラムの実行開始点を宣言する
int main() {
	// [6-6-3]battle関数を呼び出す
	Battle();
}