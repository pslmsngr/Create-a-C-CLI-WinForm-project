#include "stdafx.h"
#include "Form1.h"

CppCliWinForm::Form1::Form1(void)
{
  InitializeComponent();
  //
  //TODO: Add the constructor code here
  //
}

CppCliWinForm::Form1::~Form1()
{
  if (components)
  {
    delete components;
  }
}

void CppCliWinForm::Form1::InitializeComponent(void)
{
  this->SuspendLayout();
  // 
  // Form1
  // 
  this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
  this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
  this->ClientSize = System::Drawing::Size(800, 450);
  this->Name = L"Form1";
  this->Text = L"Form1";
  this->ResumeLayout(false);

}
