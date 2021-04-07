#pragma once

namespace ПР22 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ IstMenu;
	private: System::Windows::Forms::ListBox^ IstZakaz;
	private: System::Windows::Forms::Button^ btnOk;

	protected:

	protected:


	private: System::Windows::Forms::Button^ btnRemove;

	private: System::Windows::Forms::Button^ btnAdd;







	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->IstMenu = (gcnew System::Windows::Forms::ListBox());
			this->IstZakaz = (gcnew System::Windows::Forms::ListBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// IstMenu
			// 
			this->IstMenu->FormattingEnabled = true;
			this->IstMenu->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"���� ��������", L"�������", L"������� �������",
					L"����� �����", L"������", L"������ �������", L"��������", L"������� �������"
			});
			this->IstMenu->Location = System::Drawing::Point(12, 83);
			this->IstMenu->Name = L"IstMenu";
			this->IstMenu->Size = System::Drawing::Size(105, 108);
			this->IstMenu->TabIndex = 0;
			// 
			// IstZakaz
			// 
			this->IstZakaz->FormattingEnabled = true;
			this->IstZakaz->Location = System::Drawing::Point(205, 83);
			this->IstZakaz->Name = L"IstZakaz";
			this->IstZakaz->Size = System::Drawing::Size(113, 108);
			this->IstZakaz->TabIndex = 1;
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(124, 92);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(75, 23);
			this->btnOk->TabIndex = 2;
			this->btnOk->Text = L"��������";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnRemove
			// 
			this->btnRemove->Location = System::Drawing::Point(123, 130);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(75, 23);
			this->btnRemove->TabIndex = 3;
			this->btnRemove->Text = L"�������";
			this->btnRemove->UseVisualStyleBackColor = true;
			this->btnRemove->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(227, 244);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(75, 23);
			this->btnAdd->TabIndex = 4;
			this->btnAdd->Text = L"��������";
			this->btnAdd->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(330, 403);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnRemove);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->IstZakaz);
			this->Controls->Add(this->IstMenu);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->IstZakaz->Items->Add(this->
			IstMenu->Text);

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->IstZakaz->Items->Remove(this->IstZakaz->SelectedItem);
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void lstMenu_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
