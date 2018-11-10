object Form1: TForm1
  Left = 0
  Top = 0
  BorderStyle = bsSingle
  Caption = 'Form1'
  ClientHeight = 564
  ClientWidth = 422
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 0
    Top = 0
    Width = 265
    Height = 265
  end
  object Image2: TImage
    Left = 0
    Top = 291
    Width = 265
    Height = 265
  end
  object Image3: TImage
    Left = 0
    Top = 0
    Width = 265
    Height = 265
  end
  object Image4: TImage
    Left = 0
    Top = 291
    Width = 265
    Height = 265
  end
  object Label1: TLabel
    Left = 8
    Top = 271
    Width = 3
    Height = 13
  end
  object Label2: TLabel
    Left = 291
    Top = 75
    Width = 68
    Height = 13
    Caption = 'Czerwony: [s]'
  end
  object Label3: TLabel
    Left = 305
    Top = 102
    Width = 54
    Height = 13
    Caption = 'Zielony: [s]'
  end
  object Label4: TLabel
    Left = 281
    Top = 129
    Width = 78
    Height = 13
    Caption = 'Miganie ziel. [s]:'
  end
  object Button1: TButton
    Left = 291
    Top = 41
    Width = 75
    Height = 25
    Caption = 'W'#322#261'cz'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 365
    Top = 72
    Width = 49
    Height = 21
    TabOrder = 1
    Text = '5'
  end
  object Edit2: TEdit
    Left = 365
    Top = 99
    Width = 49
    Height = 21
    TabOrder = 2
    Text = '5'
  end
  object Edit3: TEdit
    Left = 365
    Top = 126
    Width = 49
    Height = 21
    TabOrder = 3
    Text = '3'
  end
  object Button2: TButton
    Left = 291
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Sprawd'#378
    TabOrder = 4
    OnClick = Button2Click
  end
  object Timer1: TTimer
    Interval = 5000
    OnTimer = Timer1Timer
    Left = 272
    Top = 168
  end
  object Timer2: TTimer
    Interval = 5000
    OnTimer = Timer2Timer
    Left = 320
    Top = 168
  end
  object Timer3: TTimer
    Interval = 333
    OnTimer = Timer3Timer
    Left = 368
    Top = 168
  end
end
