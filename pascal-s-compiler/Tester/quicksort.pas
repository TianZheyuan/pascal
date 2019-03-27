program sort (input, output);
    var a: array[3..9] of integer;
        x: integer;
    procedure readarray;
        var i: integer;
        begin
            for i:=0 to 8 do read_int(a[i])
        end;
    function partition (y,z: integer): integer;
        var i,j: integer;
            pivot: integer;
        begin
            pivot:=a[y];
            i:=y;
            j:=z;
            while i<j do
                begin
                    while (i<j) and (a[j] >= pivot) do j:=j-1;
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
            if (m < n) then
                begin
                    k:=partition(m, n);
                    quicksort(m, k-1);
                    quicksort(k+1, n)
                end;
        end;
    begin
        write_string('Please input a sequence:');
        readarray;
        quicksort(1, 9);
        for x:=0 to 8 do 
            begin
                write_int(a[x]);
                write_char(' ')
            end;
    end.
