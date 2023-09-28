//==============================================
//
//数字関係(ui.cpp)
//Author: fujiwara ryuki
//
//==============================================
#include"main.h"
#include"manager.h"
#include"renderer.h"
#include"input.h"
#include"UI.h"

//****************//
//   マクロ定義   //
//****************//
#define VECTOR_INIT		(D3DXVECTOR3(0.0f,0.0f, 0.0f))		//位置の初期値
//==============================================
//コンストラクタ
//==============================================
CUI::CUI()
{
	//初期設定
	m_pTexture = NULL;		//テクスチャのポインタ
	m_pVtxBuffer = NULL;	//バッファのポインタ

	m_pos = POS_INIT;		//位置
}
//==============================================
//デスストラクタ
//==============================================
CUI::~CUI()
{

}
//==============================================
//数字関係の初期化処理
//==============================================
HRESULT CUI::Init(void)
{
	//初期化処理
	CObject2D::Init();

	return S_OK;
}
//==============================================
//数字関係の終了処理
//==============================================
void CUI::Uninit(void)
{
	//終了処理
	CObject2D::Uninit();
}
//==============================================
//数字関係のメモリ生成処理
//==============================================
CUI *CUI::Create(void)
{
	CUI *pUI;	//数字関係のインスタンス生成

	//メモリ生成
	pUI = new CUI;

	if (pUI != NULL)
	{
		//初期化処理
		pUI->Init();
	}

	return pUI;
}
//==============================================
//数字関係の更新処理
//==============================================
void CUI::Update(void)
{

}
//==============================================
//数字関係の描画処理
//==============================================
void CUI::Draw(void)
{
	//描画処理
	CObject2D::Draw();
}
