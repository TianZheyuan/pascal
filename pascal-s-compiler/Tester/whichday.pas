program which_day(input,output);
    var wd:integer;
        weekday:string;
    begin
        write_string('Which day is today in a week?');
        read_int(wd);
        if wd = 0 then
            weekday := 'Sunday'
        else if wd = 1 then
            weekday := 'Monday'
        else if wd = 2 then
            weekday := 'Tuesday'
        else if wd = 3 then
            weekday := 'Wednesday'
        else if wd = 4 then
            weekday := 'Thursday'
        else if wd = 5 then
            weekday := 'Friday'
        else if wd = 6 then
            weekday := 'Saturday'
        else if wd = 0 then
            weekday := 'Sunday'
        else weekday := 'WROOOOOOOONG!';
        write_string('Today is ');
        write_string(weekday)
    end.