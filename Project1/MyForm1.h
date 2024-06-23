#pragma once
#include "MyForm2.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;











	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Algerian", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(47, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"BIRYANI";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Algerian", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(307, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"VEG";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Wide Latin", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(263, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 29);
			this->label3->TabIndex = 4;
			this->label3->Text = L"MENU";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(320, 289);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"CONFIRM";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Algerian", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(523, 58);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 18);
			this->label4->TabIndex = 7;
			this->label4->Text = L"NON-VEG";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"Chicken Biryani - 250/-", L"Spl Chicken Biryani - 250/-",
					L"Mutton Biryani - 250/-", L"Fish Biryani - 250/-", L"Veg Biryani - 250/-", L"Panner Biryani - 250/-", L"Spl Veg Biryani - 250/-",
					L"Prawns Biryani - 250/-", L"Chicken kebab - 250/-"
			});
			this->comboBox1->Location = System::Drawing::Point(12, 92);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 21);
			this->comboBox1->TabIndex = 9;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Chana Masala - 150/-", L"Kadhi Paneer - 150/-",
					L"Paneer Curry - 150/-", L"Panner Tikkangan - 150/-", L"Bagara Bai - 150/-", L"Rajma Masala - 150/-", L"Garlic Mushroom - 150/-",
					L"Curd Rice - 150/-", L"Veg Shangai rolls - 150/-", L"Veg Manchiria - 150/-"
			});
			this->comboBox2->Location = System::Drawing::Point(268, 92);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(160, 21);
			this->comboBox2->TabIndex = 10;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"Chicken Curry - 200/-", L"Kadai Chicken - 200/-",
					L"Chicken Tikka - 200/-", L"Schezwan Chiken - 200/-", L"Mutton Curry - 200/-", L"Pepper Mutton - 200/-", L"Chicken Lollipop - 200/-",
					L"Chicken Drumsticks - 200/-", L"Chicken 65 - 200/-", L"Chilli Chicken - 200/-", L"Chicken Manchiria - 200/-", L"Chicken Majestic - 200/-",
					L"Chicken Schezwan - 200/-"
			});
			this->comboBox3->Location = System::Drawing::Point(498, 92);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(159, 21);
			this->comboBox3->TabIndex = 11;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(723, 363);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
	{


	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (comboBox1->Text == "" && comboBox2->Text == "" && comboBox3->Text =="")
		{
			MessageBox::Show("please select atleast one item", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
			else
			{
				String^ biryani = comboBox1->Text;
				String^ veg = comboBox2->Text;
				String^ staters = comboBox3->Text;
				
				String^ con = "Data Source=gnanenderreddy\\SQLEXPRESS;Initial Catalog=sanju;Integrated Security=True;Encrypt=False";
				SqlConnection conn(con);
				conn.Open();
				String^ sqlq = "INSERT INTO items_name(biryani,veg,staters) VALUES(@biryani,@veg,@staters);";
				SqlCommand cmd(sqlq, % conn);
				cmd.Parameters->AddWithValue("@biryani", biryani);
				cmd.Parameters->AddWithValue("@veg", veg);
				cmd.Parameters->AddWithValue("@staters", staters);
			
				cmd.ExecuteNonQuery();
				conn.Close();
				this->Hide();
				MyForm2^ mf2 = gcnew MyForm2();
				mf2->ShowDialog();
				
			}

	}

private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{

}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		
	}
};
}
