object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Dobrodo'#353'li!'
  ClientHeight = 323
  ClientWidth = 327
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 32
    Top = 25
    Width = 60
    Height = 13
    Caption = 'Prijavite se: '
  end
  object Button1: TButton
    Left = 32
    Top = 184
    Width = 97
    Height = 41
    Caption = 'Prijavi se '
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 200
    Top = 80
    Width = 97
    Height = 41
    Caption = 'Kreiraj korisnika'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 200
    Top = 144
    Width = 97
    Height = 41
    Caption = 'Izlaz'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Password: TEdit
    Left = 32
    Top = 144
    Width = 121
    Height = 21
    TabOrder = 3
  end
  object Username: TEdit
    Left = 32
    Top = 90
    Width = 121
    Height = 21
    TabOrder = 4
  end
  object Xlogin: TXMLDocument
    FileName = 'login.xml'
    Left = 152
    Top = 24
  end
end
