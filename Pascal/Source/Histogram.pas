(*
 * Project: Pascal
 * User: Mathi
 * Date: 2022-02-13
 *)
unit Histogram;

{$MODE OBJFPC}
{$M+}

interface

type
  THistogram = class
  public
    class function Hist(strng: string): string; static;
  end;

implementation

uses sysutils;

class function THistogram.Hist(strng: string): string;

type
  TCount = array[char] of Int16;

var
  count: TCount;
  letter: Char;
  i: Integer;
  res: string;
  value: Integer;

begin
  for letter := 'a' to 'z' do
    count[letter] := 0;

  for i := 1 to Length(strng) do
    count[strng[i]] := count[strng[i]] + 1;

  res := '';
  for i := 1 to 4 do
  begin
    letter := 'uwxz'[i];
    value := count[letter];
    if value > 0 then
      res := res + Format('%s  %-5d %*.*s\n', [letter, value, value, value, '*******************************************']);
  end;

  Result := Copy(res, 0, Length(res) - 2);
end;

end.