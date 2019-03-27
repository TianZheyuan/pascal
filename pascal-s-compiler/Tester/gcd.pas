program gcd_program(input,output);
    var x,y:integer;
    function gcd(a,b:integer):integer; 
        begin
            if b=0 then gcd:=a
            else gcd:=gcd(b, a mod b)
        end;
    begin
        write_string('Input a, b:');
        read_int(x);
        read_int(y);
        write_int(gcd(x, y));
end.
