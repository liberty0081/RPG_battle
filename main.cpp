// [1]�w�b�_�[���C���N���[�h����ꏊ

#include <conio.h>

// [2]�萔���`����ꏊ
// [3]�񋓒萔���`����ꏊ

// [3-1]�����X�^�[�̎�ނ��`����
enum {
	MONSTER_PLAYER,			// [3-1-1]�v���C���[
	MONSTER_MAX				// {3-1-4]�����X�^�[�̎�ނ̐�
};

// [4]�\���̂��`����ꏊ

// [4-1]�L�����N�^�[�̍\���̂�錾����
typedef struct {
	int hp;					// [4-1-1]HP
	int maxHp;				// [4-1-2]�ő�HP
	int mp;					// [4-1-3]MP
	int maxMp;				// [4-1-4]�ő�MP
	char name[4 * 2 + 1];	// [4-1-5]���O
}CHARACTER;

// [5]�ϐ���錾����ꏊ

// [5-1]�����X�^�[�̃X�e�[�^�X�̔z���錾����
CHARACTER monsters[MONSTER_MAX] =
{
	// [5-1-1]MONSTER_PLAYER	�v���C���[
	{
		15,				// [5-1-2]int hp				HP
		15,				// [5-1-3]int maxHp				�ő�HP
		15,				// [5-1-4]int mp				MP
		15,				// [5-1-5]int maxMp				�ő�HP
		"�䂤����",		// [5-1-6]char name[4*2 + 1]	���O
	},
};

// [6]�֐���錾����ꏊ

// [6-4]�퓬�V�[���̊֐���錾����
void Battle() {
	// [6-4-6]�L�[�{�[�h���͂�҂�
	_getch();
}

// [6-6]�v���O�����̎��s�J�n�_��錾����
int main() {
	// [6-6-3]battle�֐����Ăяo��
	Battle();
}