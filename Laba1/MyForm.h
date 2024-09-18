#pragma once
#include <cmath>
#include <ctime>

namespace Laba1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(168, 39);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(577, 40);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 162);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"a = ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(73, 159);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(137, 26);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(47, 209);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"b = ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(73, 205);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(137, 26);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 252);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"k = ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(73, 249);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(137, 26);
			this->textBox3->TabIndex = 6;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(249, 162);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(216, 312);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(489, 159);
			this->chart1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(554, 316);
			this->chart1->TabIndex = 8;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(51, 329);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 70);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Протабулуювати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(51, 429);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 46);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1056, 551);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double a, b, k, h, x, y;
		a = Convert::ToDouble(textBox1->Text);
		b = Convert::ToDouble(textBox2->Text);
		k = Convert::ToDouble(textBox3->Text);
		h = (b - a) / k;
		richTextBox1->AppendText("x\t\t|  y\t\t\n");
		richTextBox1->AppendText("------------------------------------");
		x = a;
		while (x<=b)
		{
			y = sin(log(x) + exp(x));
			richTextBox1->AppendText(x.ToString("0.0") + "\t\t" + y.ToString("0.00") + "\n");
			chart1->Series["Series1"]->Points->AddXY(x, y);
			x += h;
		}

	}
};
}
