
// sudokuDlg.h: 头文件
//

#pragma once


// CsudokuDlg 对话框
class CsudokuDlg : public CDialogEx
{
// 构造
public:
	CsudokuDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SUDOKU_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
//	afx_msg void OnEnChangeEdit10();
//	afx_msg void OnEnChangeEdit65();
//	afx_msg void OnEnChangeEdit14();
	afx_msg void OnBnClickedOk();
	int numval2;
	int numval3;
	int numval4;
	int numval5;
	int numval6;
	int numval7;
	int numval8;
	int numval9;
	int numval1;
	int numval10;
	int numval11;
	int numval12;
	int numval13;
	int numval14;
	int numval15;
	int numval16;
	int numval17;
	int numval18;
	int numval19;
	int numval20;
	int numval21;
	int numval22;
	int numval23;
	int numval24;
	int numval25;
	int numval26;
	int numval27;
	int numval28;
	int numval29;
	int numval30;
	int numval31;
	int numval32;
	int numval33;
	int numval34;
	int numval35;
	int numval36;
	int numval37;
	int numval38;
	int numval39;
	int numval40;
	int numval41;
	int numval42;
	int numval43;
	int numval44;
	int numval45;
	int numval46;
	int numval47;
	int numval48;
	int numval49;
	int numval50;
	int numval51;
	int numval52;
	int numval53;
	int numval54;
	int numval55;
	int numval56;
	int numval57;
	int numval58;
	int numval59;
	int numval60;
	int numval61;
	int numval62;
	int numval63;
	int numval64;
	int numval65;
	int numval66;
	int numval67;
	int numval68;
	int numval69;
	int numval70;
	int numval71;
	int numval72;
	int numval73;
	int numval74;
	int numval75;
	int numval76;
	int numval77;
	int numval78;
	int numval79;
	int numval80;
	int numval81;
	int text[9] = { 0 };
	bool sign = false;
	int sodunum[9][9] =
	{
		{ numval1,numval2,numval3,numval4,numval5,numval6,numval7,numval8,numval9 },
		{ numval10,numval11,numval12,numval13,numval14,numval15,numval16,numval17,numval18 },
		{ numval19,numval20,numval21,numval22,numval23,numval24,numval25,numval26,numval27 },
		{ numval28,numval29,numval30,numval31,numval32,numval33,numval34,numval35,numval36 },
		{ numval37,numval38,numval39,numval40,numval41,numval42,numval43,numval44,numval45 },
		{ numval46,numval47,numval48,numval49,numval50,numval51,numval52,numval53,numval54 },
		{ numval55,numval56,numval57,numval58,numval59,numval60,numval61,numval62,numval63 },
		{ numval64,numval65,numval66,numval67,numval68,numval69,numval70,numval71,numval72 },
		{ numval73,numval74,numval75,numval76,numval77,numval78,numval79,numval80,numval81 },
	};
	int iaTriedTimes[9][9];	//累积回退到当前位置的次数，如果回退到前一次，改为初始化为0
	bool bRecycleFlag;		//回退标志，回退查找一次，该标志置位
	afx_msg void OnBnClickedHelp();
	afx_msg void Setnum();
	afx_msg void Getnum();
	afx_msg void OnBnClickedCancel();
	afx_msg int chachong(int a[9]);
	afx_msg void chushihua();
	afx_msg int check();
	afx_msg int DFS(int n);
	afx_msg bool Check(int n, int key);
	afx_msg void OnEnChangeEdit19();
	afx_msg void OnBnClickedRESET();
};


