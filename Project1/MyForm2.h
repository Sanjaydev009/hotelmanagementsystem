#pragma once
#include "MyForm3.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm2::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(26, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Customer Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(26, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Mobile Number";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(26, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Customer Address";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(174, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(108, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(174, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(108, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(174, 106);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(108, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm2::textBox3_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(71, 198);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(94, 34);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(26, 148);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"E-Mail Address";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm2::label4_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(174, 145);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(108, 20);
			this->textBox4->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Silver;
			this->label5->Font = (gcnew System::Drawing::Font(L"Rockwell", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Location = System::Drawing::Point(39, 325);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(170, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"NOTE: ONLY COD AVAILABLE";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(185, 199);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 34);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(624, 380);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "" && textBox2->Text == "" && textBox3->Text == "" && textBox4->Text == "")
		{
			MessageBox::Show("please enter your details", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
			if (textBox1->Text == "")
			{
				MessageBox::Show("please enter your Name", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				if (textBox2->Text == "")
				{
					MessageBox::Show("please enter your Mobile Number", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else
				{
					if (textBox3->Text == "")
					{
						MessageBox::Show("please enter your Current Address", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					else
					{
						if (textBox4->Text == "")
						{
							MessageBox::Show("please enter your Email_id", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
						else
						{

							
							{
								String^ c_name = textBox1->Text;
								String^ number = textBox2->Text;
								String^ c_address = textBox3->Text;
								String^ e_mail = textBox4->Text;
								String^ con = "Data Source=gnanenderreddy\\SQLEXPRESS;Initial Catalog= sanju;Integrated Security=True;Encrypt=False";
								SqlConnection sqconn(con);
								sqconn.Open();
								String^ sqlq = "INSERT INTO COD (c_name,number,c_address,e_mail) VALUES (@c_name,@number,@c_address,@e_mail)";
								SqlCommand cmd(sqlq, % sqconn);
								cmd.Parameters->AddWithValue("@c_name", c_name);
								cmd.Parameters->AddWithValue("@number", number);
								cmd.Parameters->AddWithValue("@c_address", c_address);
								cmd.Parameters->AddWithValue("@e_mail", e_mail);
								MessageBox::Show("Updated Successfully", "success", MessageBoxButtons::OK, MessageBoxIcon::Information);
								cmd.ExecuteNonQuery();
								sqconn.Close();
								this->Hide();
								MyForm3^ mf3 = gcnew MyForm3();
								mf3->ShowDialog();
							}
						}
					}

				}
			}
	}
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "" && textBox2->Text == "" && textBox3->Text == "" && textBox4->Text == "")
		{
			MessageBox::Show("please enter valid details", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else
			if (textBox1->Text == "")
			{
				MessageBox::Show("please enter valid details", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
			{
				if (textBox2->Text == "")
				{
					MessageBox::Show("please enter valid details", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				else
				{
					if (textBox3->Text == "")
					{
						MessageBox::Show("please enter valid details", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					else
					{
						if (textBox4->Text == "")
						{
							MessageBox::Show("please enter valid details", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
						else
						{
							{
								this->Hide();
								MyForm3^ mf3 = gcnew MyForm3();
								mf3->ShowDialog();
							}
						}
					}
				}

			}
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
}
};
}