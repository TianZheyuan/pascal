program example(input,output);
	const a = 3;
	var  x,y : array [1..100]of integer;i,u:integer;c,d:char;
	function gcd(var a,b:integer):integer; 
	var x,y:integer;
        begin
            y := 3;
            if b=0 then gcd:=a
            else gcd:=gcd(b, a mod b)
        end;

	begin
	y :=3;
	i := gcd(c,u);
end.