object Form1: TForm1
  Left = 406
  Top = 188
  Width = 429
  Height = 525
  Caption = #1064#1072#1083#1099#1075#1080#1085' '#1040'.'#1054'., '#1083#1072#1073'. '#1088#1072#1073'. 2, 121701'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnActivate = FormActivate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 48
    Top = 24
    Width = 19
    Height = 20
    Caption = 'Z='
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 48
    Top = 64
    Width = 20
    Height = 20
    Caption = 'A='
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 48
    Top = 112
    Width = 21
    Height = 20
    Caption = 'D='
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 128
    Top = 153
    Width = 178
    Height = 20
    Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090' '#1042#1099#1095#1077#1089#1083#1077#1085#1080#1081
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Edit1: TEdit
    Left = 72
    Top = 24
    Width = 121
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    Text = '1'
  end
  object Edit2: TEdit
    Left = 72
    Top = 64
    Width = 121
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    Text = '1'
  end
  object Edit3: TEdit
    Left = 72
    Top = 104
    Width = 121
    Height = 28
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    Text = '1'
  end
  object Button1: TButton
    Left = 32
    Top = 411
    Width = 361
    Height = 49
    Caption = #1042#1099#1095#1080#1089#1083#1080#1090#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = Button1Click
  end
  object Results: TMemo
    Left = 32
    Top = 183
    Width = 361
    Height = 217
    Lines.Strings = (
      '')
    TabOrder = 4
  end
  object RadioGroup1: TRadioGroup
    Left = 232
    Top = 16
    Width = 161
    Height = 113
    Caption = #1060#1091#1085#1082#1094#1080#1103' f(x)'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    Items.Strings = (
      '2x'
      'x^2'
      'x/3')
    ParentFont = False
    TabOrder = 5
  end
end
