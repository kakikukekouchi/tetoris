#pragma once

#include "InputControl.h"

/*************************
*�}�N����`
*************************/

/*************************
*�^��`
*************************/

/*************************
*�v���g�^�C�v�錾
*************************/
void InputControl_Initialize(void);          //����������
void InputControl_Update(void);            //�X�V����

int GetButton(int button);                   //��������Ă������菈��
int GetButtonDown(int button);               //�������u�ԉ������菈��
int GetButtonUp(int button);                 //�����������菈��

int GetExitButton(void);                     //�Q�[���I���p�̃{�^�����菈��