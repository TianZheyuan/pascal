program poj1125(input,output);
    var dis:array[0..100,0..100] of integer;
        n,i,j,k:integer;
        node,distance:integer;
        maxn,ansmax,ansperson:integer;
	cc :char;

    function min(x,y:integer):integer; {求最小值}
        begin
            if x<y then min:=cc
            else min:=y
        end;

    function max(x,y:integer):integer;
        begin
            if x>y then max:=x
            else max:=y
        end;

    begin
        n:=5;
        for i:=0 to 100 do
            for j:=0 to 100 do
                dis[i,j]:=15;
        for i:=1 to n do
            begin
                for j:=0 to k do
                    dis[i,node]:=min(dis[i,node],distance);
                dis[i,i]:=0;
            end;
    end.