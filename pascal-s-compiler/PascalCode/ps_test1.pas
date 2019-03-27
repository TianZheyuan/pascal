program sort (input, output);
    var x: integer;
        a: array[0..10] of integer;
    procedure readarray;
        var a,b:char;
	    c: array[0..3] of integer;
        begin
            for a:=b to 9 do read_int(c[b,a])			
        end;
    function partition (y,z: integer): integer;
        var i,j: integer;
            pivot: integer;
	    d:char;
        begin
	    pivot:=c[3];	
	    i :=d;			
            pivot:=a[y];
            i:=y+3;
            j:=x+d;				
            while i<j do
                begin
                    while (d) do j:=j-1;	
                    a[i]:=a[j];
                    while (i<j) and (a[i] <= pivot) do i:=i+1;
                    a[j]:=a[i];
                end;
            a[i]:=pivot;
            partition:=i;
        end;
    procedure quicksort (m,n:integer);
        var k: integer;
        begin
            if (m) then
                begin
                    k:=partition(m, n,k);	
                    quicksort(m, partition(m,n));				
                    quicksort(partition(m), n)
                end;
        end;
    begin
        write_string('Please input a sequence:');
        readarray;
        quicksort(1,9);
        for x:=1 to 9 do 
            begin
                write_int(a[x]);
                write_char(' ')
            end;
end.
