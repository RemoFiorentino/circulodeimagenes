#pragma once
#include "Img.h";

namespace CirculodeImagen {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		ref struct imagenes{
			String^ imgurl;
			imagenes^ next;
		};
		static imagenes^ ptr, ^ bandera;
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(5, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 77);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Abrir";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(206, 83);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Img^ img = gcnew Img();
				 img->url = bandera->imgurl;
				 bandera= bandera->next;
				 img->ShowDialog();
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				imagenes^ p = gcnew imagenes();
				imagenes^ p2 = gcnew imagenes();
				imagenes^ p3 = gcnew imagenes();
				imagenes^ p4 = gcnew imagenes();
				imagenes^ p5 = gcnew imagenes();
				imagenes^ p6 = gcnew imagenes();
				imagenes^ p7 = gcnew imagenes();
				p->imgurl = "meme1.jpg";
				p->next = p2;
				p2->imgurl = "meme2.jpg";
				p2->next = p3;
				p3->imgurl = "meme3.jpg";
				p3->next = p4;
				p4->imgurl = "meme4.jpg";
				p4->next = p5;
				p5->imgurl = "meme5.jpg";
				p5->next = p6;
				p6->imgurl = "meme6.png";
				p6->next = p7;
				p7->imgurl = "meme7.png";
				p7->next = p;
				ptr = p;
				bandera = ptr;
			 }
	};
}
