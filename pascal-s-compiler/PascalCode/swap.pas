program swap_program(input, output);
    const a = 1;b = a;
    var x,y:integer;
    procedure swap(var a,b:integer);
        var t:integer;
        begin
            t:=a;
            a:=b;
            b:=t
        end;
    begin
        a := 2;
        read_int(x);
        read_int(y);
        swap(x,y);
        write_int(x);
        write_int(y)
    end.