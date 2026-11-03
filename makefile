CC=cc
target=stud_add.o main.o stud_del.o stud_show.o stud_mod.o stud_save.o stud_count.o stud_rev.o stud_sort.o

exe: $(target)
        $(CC) $(target) -o student

stud_add.o:stud_add.c 
        $(CC) -c stud_add.c
main.o:main.c 
        $(CC) -c main.c
stud_del.o:stud_del.c
        $(CC) -c stud_del.c
stud_show.o:stud_show.c
        $(CC) -c stud_show.c
stud_mod.o:stud_mod.c
        $(CC) -c stud_mod.c
stud_save.o:stud_save.c
        $(CC) -c stud_save.c
stud_count.o:stud_count.c
        $(CC) -c stud_count.c
stud_rev.o:stud_rev.c
        $(CC) -c stud_rev.c
stud_sort.o:stud_sort.c
        $(CC) -c stud_sort.c

clear:  
        @echo "clearing......"
        @rm -r *.o
