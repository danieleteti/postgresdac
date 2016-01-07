unit PSQLBatchTest;
{$I PSQLDAC.inc}
{

  Delphi DUnit Test Case
  ----------------------
  This unit contains a skeleton test case class generated by the Test Case Wizard.
  Modify the generated code to correctly setup and call the methods from the unit 
  being tested.

}

interface

uses
  TestFramework, Db, Windows, PSQLTypes, Classes, PSQLDbTables, SysUtils, PSQLBatch, TestExtensions,
  Forms, PSQLConnFrm;

type

  TDbSetup = class(TTestSetup)
  protected
    procedure SetUp; override;
    procedure TearDown; override;
  end;

  TestTPSQLBatchExecute = class(TTestCase)
  strict private
    FPSQLBatchExecute: TPSQLBatchExecute;
  public
    procedure SetUp; override;
    procedure TearDown; override;
  published
    procedure TestExecDollarQuoting;
  end;

var
  QryDB: TPSQLDatabase;

implementation

uses TestHelper;

procedure TestTPSQLBatchExecute.SetUp;
begin
  FPSQLBatchExecute := TPSQLBatchExecute.Create(nil);
  FPSQLBatchExecute.Database := QryDB;
end;

procedure TestTPSQLBatchExecute.TearDown;
begin
  FPSQLBatchExecute.Free;
  FPSQLBatchExecute := nil;
end;

procedure TestTPSQLBatchExecute.TestExecDollarQuoting;
var IsOK: boolean;
begin
  FPSQLBatchExecute.SQL.Text := 'CREATE OR REPLACE FUNCTION return_version() RETURNS text LANGUAGE SQL AS '+
                                '$_$ SELECT version() $_$;';
  FPSQLBatchExecute.ExecSQL;
  Check(QryDB.SelectString('SELECT return_version()', IsOk) > '', 'Creating function as dollar-quoted string failed');
end;

{ TDbSetup }

procedure TDbSetup.SetUp;
begin
  inherited;
  SetUpTestDatabase(QryDB, 'PSQLBatchTest.conf');
  QryDB.Execute('CREATE TEMP TABLE IF NOT EXISTS requestlive_test ' +
                '(' +
                '  id serial NOT NULL PRIMARY KEY,' + //Serial will create Sequence -> not Required
                '  intf integer NOT NULL,' + //NotNull ->Required
                '  string character varying(100) NOT NULL DEFAULT ''abc'',' + //NotNull + Default -> not Required
                '  datum timestamp without time zone,' + //not Required etc.
                '  notes text,' +
                '  graphic oid,' +
                '  b_graphic bytea,' +
                '  b boolean,' +
                '  floatf real,' +
                '  datef date,' +
                '  timef time' +
                ')');
  QryDB.Execute('CREATE TEMP TABLE IF NOT EXISTS required_test ' +
                '(' +
                '  id serial NOT NULL PRIMARY KEY,' + //Serial will create Sequence -> not Required
                '  intf integer NOT NULL,' + //NotNull ->Required
                '  string character varying(100) NOT NULL DEFAULT ''abc'',' + //NotNull + Default -> not Required
                '  datum timestamp without time zone)'); //not Required.
end;

procedure TDbSetup.TearDown;
begin
  inherited;
  QryDB.Close;
  ComponentToFile(QryDB, 'PSQLBatchTest.conf');
  QryDB.Free;
end;

initialization
  // Register any test cases with the test runner
  RegisterTest(TDbSetup.Create(TestTPSQLBatchExecute.Suite, 'TPSQLBatchExecute tests'));
end.

