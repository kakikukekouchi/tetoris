/*******************************************
*プログラミング実習(テトリス編)
********************************************/
#include "DxLib.h"
#include "FreamControl.h"
#include "SceneManager.h"
#include "InputControl.h"

/******************************************
*マクロ定義
*******************************************/
#define SCREEN_HEIGHT (720)
#define SCREEN_WIDTH (1280)
#define SCREEN_COLORBIT  (32)
#define FONT_SIZE (20)

/******************************************
*型定義
*******************************************/


/******************************************
*グローバル変数宣言
*******************************************/


/******************************************
*プロトタイプ宣言
*******************************************/


/******************************************
*プログラムの開始
*******************************************/

int WINAPI WinMain(_In_ HINSTANCE hinstance, _In_opt_ HINSTANCE hPrevInstance, _In_
	LPSTR lpCmdLine, _In_ int nShowCmd)
{
	//タイトルを設定
	SetMainWindowText("テトリス");

	//ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	//ウィンドウサイズの決定
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_COLORBIT);

	if (DxLib_Init() == -1)
	{
		//エラー終了
		return-1;
	}

	//フレーム制御機能初期化処理
	FreamControl_Initialize();

	//シーン管理機能初期化処理
	SceneManager_Initialize(E_TITLE);

	//入力制御機能初期化処理
	InputControl_Initialize();

	//描画先画面を裏にする
	SetDrawScreen(DX_SCREEN_BACK);

	//文字サイズを設定
	SetFontSize(FONT_SIZE);

	//ゲームループ
	//Dxライブラリの初期化処理
	if (DxLib_Init() == -1)
	{
		return-1;
	}

	//入力待機
	WaitKey();

	//Dxライブラリ使用の終了処理
	DxLib_End();

	return 0;

}