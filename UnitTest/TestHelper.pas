unit TestHelper;

interface

uses Classes, SysUtils, PSQLDbTables, Forms, PSQLConnFrm, Controls;

procedure ComponentToFile(Component: TComponent; Name: string);
procedure FileToComponent(Name: string; Component: TComponent);
procedure SetUpTestDatabase(var DB: TPSQLDatabase; ConfFileName: string);

implementation

procedure SetUpTestDatabase(var DB: TPSQLDatabase; ConfFileName: string);
var
  Frm: TPSQLConnForm;
begin
  DB := TPSQLDatabase.Create(nil);
  if FileExists(ConfFileName) then
  try
    FileToComponent(ConfFileName, DB);
    DB.Close;
  except
    on E: EPSQLDatabaseError do //nothing, failed connection
  end;
  Application.CreateForm(TPSQLConnForm, Frm);
  try
    with Frm do
     begin
      GetDatabaseProperty(DB);
      if ShowModal = mrOk then
        SetDatabaseProperty(DB)
      else
        begin
         FreeAndNil(DB);
         raise EInvalidOperation.Create('Test cancelled by operator!');
        end;
     end;
  finally
   Frm.Free;
  end;
  DB.Open;
end;

procedure ComponentToFile(Component: TComponent; Name: string);

var
  BinStream: TMemoryStream;
  StrStream: TFileStream;
begin
  BinStream := TMemoryStream.Create;
  try
    StrStream := TFileStream.Create(Name, fmCreate);
    try
      BinStream.WriteComponent(Component);
      BinStream.Seek(0, soFromBeginning);
      ObjectBinaryToText(BinStream, StrStream);
    finally
      StrStream.Free;
    end;
  finally
    BinStream.Free
  end;
end;

procedure FileToComponent(Name: string; Component: TComponent);
var
  StrStream:TFileStream;
  BinStream: TMemoryStream;
begin
  StrStream := TFileStream.Create(Name, fmOpenRead);
  try
    BinStream := TMemoryStream.Create;
    try
      ObjectTextToBinary(StrStream, BinStream);
      BinStream.Seek(0, soFromBeginning);
      BinStream.ReadComponent(Component);

    finally
      BinStream.Free;
    end;
  finally
    StrStream.Free;
  end;
end;

end.
