program program_sum(input,output);
    var sum,i:integer;
    begin
        sum:=0;
        for i:=1 to 100 do
            sum:=sum+i;
        write_int(sum);
    end.