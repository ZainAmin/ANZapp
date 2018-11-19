#pragma once

namespace ANZapp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ANZapp
	/// </summary>
	public ref class ANZapp : public System::Windows::Forms::Form
	{
	public:
		ANZapp(void)
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
		~ANZapp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::Button^  button11;

	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ANZapp::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(856, 605);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(22, 25);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(817, 554);
			this->axWindowsMediaPlayer1->TabIndex = 1;
			this->axWindowsMediaPlayer1->Enter += gcnew System::EventHandler(this, &ANZapp::axWindowsMediaPlayer1_Enter);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Black;
			this->panel1->Controls->Add(this->trackBar1);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(900, 45);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(225, 523);
			this->panel1->TabIndex = 2;
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(53, 127);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(118, 45);
			this->trackBar1->TabIndex = 13;
			this->trackBar1->Value = 50;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &ANZapp::trackBar1_Scroll);
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button11->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(53, 417);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(118, 31);
			this->button11->TabIndex = 10;
			this->button11->Text = L"Open Player";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &ANZapp::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::GrayText;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(124, 322);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(47, 33);
			this->button10->TabIndex = 9;
			this->button10->Text = L"8";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &ANZapp::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::GrayText;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(53, 322);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(47, 33);
			this->button9->TabIndex = 8;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &ANZapp::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::GrayText;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(124, 283);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(47, 33);
			this->button8->TabIndex = 7;
			this->button8->Text = L"6";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &ANZapp::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::GrayText;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(53, 283);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(47, 33);
			this->button7->TabIndex = 6;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &ANZapp::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::GrayText;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(124, 244);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(47, 33);
			this->button6->TabIndex = 5;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &ANZapp::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::GrayText;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(53, 244);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(47, 33);
			this->button5->TabIndex = 4;
			this->button5->Text = L"3";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &ANZapp::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::GrayText;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(124, 205);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(47, 33);
			this->button4->TabIndex = 3;
			this->button4->Text = L"2";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &ANZapp::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::GrayText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(53, 205);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(47, 33);
			this->button3->TabIndex = 2;
			this->button3->Text = L"1";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &ANZapp::button3_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->Location = System::Drawing::Point(124, 22);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 71);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &ANZapp::button2_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->Location = System::Drawing::Point(28, 22);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 71);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ANZapp::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"All files (*.*)|*.*";
			this->openFileDialog1->Title = L"Choose Media File";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &ANZapp::openFileDialog1_FileOk);
			// 
			// ANZapp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GrayText;
			this->ClientSize = System::Drawing::Size(1168, 607);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Controls->Add(this->pictureBox1);
			this->MaximizeBox = false;
			this->Name = L"ANZapp";
			this->Text = L"ANZapp";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void axWindowsMediaPlayer1_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		axWindowsMediaPlayer1->Ctlcontrols->play();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	axWindowsMediaPlayer1->Ctlcontrols->pause();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	axWindowsMediaPlayer1->URL = ".\\Channels\\FoxNews.wmv";
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	axWindowsMediaPlayer1->URL = ".\\Channels\\BBCNews.wmv";
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	axWindowsMediaPlayer1->URL = ".\\Channels\\CNBCNews.wmv";
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	axWindowsMediaPlayer1->URL = ".\\Channels\\Disney.wmv";
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	axWindowsMediaPlayer1->URL = ".\\Channels\\CNNNews.wmv";
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	axWindowsMediaPlayer1->URL = ".\\Channels\\Discovery.wmv";
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	axWindowsMediaPlayer1->URL = ".\\Channels\\CartoonNetwork.wmv";
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	axWindowsMediaPlayer1->URL = ".\\Channels\\AMHQChannel.wmv";
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	openFileDialog1->ShowDialog();
}
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	axWindowsMediaPlayer1->URL = openFileDialog1->FileName;
}
private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
	axWindowsMediaPlayer1->settings->volume = trackBar1->Value;
}
};
}
