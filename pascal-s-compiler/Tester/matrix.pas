program matrix_multiply(input, output);
    var m0,m1,result:array [0..2,0..2] of integer;
        i,j,k:integer;
    begin
        {读取矩阵0}
        write_string('Input matrix 0 (3*3):');
        for i:=0 to 2 do
            for j:=0 to 2 do
                read_int(m0[i,j]);
        {读取矩阵2}
        write_string('Input matrix 2 (3*3):');
        for i:=0 to 2 do
            for j:=0 to 2 do
                read_int(m1[i,j]);
        {矩阵乘法}
        for i:=0 to 2 do
            for j:=0 to 2 do
                begin
                    result[i,j]:=0;
                    for k:=0 to 2 do
                        result[i,j]:=result[i,j]+m0[i,k]*m1[k,j]
                end;
        {输出结果}
        for i:=0 to 2 do
            for j:=0 to 2 do
                begin
                    write_int(result[i,j]);
                    write_char(' ')
                end;
    end.