////////////////////////////// //////////////////////////////
//	プロジェクト	：T-Lib
//	開発環境		：Autotools
//	最適タブ数		：4
//	担当者			：tatra
//	ファイル名		：
//	内包データ		▼

#pragma once
#ifndef TLIB_HEADER
#define TLIB_HEADER

#if defined(DEBUG) || defined(_DEBUG)
	//デバッグ用処理
#endif
namespace TLIB{

	template <typename T>
	struct tPOINT2D{
	public:
		T x;
		T y;
	} ;

}

#endif
