//�v���W�F�N�g�v���p�e�B->�ڍ�->C++/CLI�v���p�e�B->���ʌ��ꃉ���^�C���T�|�[�g
//
#pragma once

using namespace ::WindowsFormsControlLibrary1;
using namespace ::System;
using namespace ::System::Windows::Forms;
using namespace ::System::Drawing;

namespace test_cppcli_namespace
{
	ref class TestClass
	{
	public:
		void ShowDialog(::System::String^ title)
		{
			auto form = gcnew ::WindowsFormsControlLibrary1::CS_TestForm1();
			form->Text = title;
			form->Tag = this;
			form->ShowDialog();
			form->Dispose();
		};

		
		virtual System::String^ ToString() override
		{
			return gcnew System::String(L"C++/CLI Class");
		}
	};

}

