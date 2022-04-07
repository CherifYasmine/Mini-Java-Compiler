from tkinter import *
from tkinter.filedialog import *
from tkinter.messagebox import *
from tkinter.scrolledtext import *
from menu import main as menu

def rgb_hack(rgb):
    return "#%02x%02x%02x" % rgb 

root = Tk()
root.title("Mini Java IDE")
root.geometry("800x500")
photo = PhotoImage(file='java.png')
root.iconphoto(False, photo)
root.minsize(width=400, height=400)

panedWindow = PanedWindow(root,orient=VERTICAL)
panedWindow.pack(fill=BOTH, expand=1)

code = ScrolledText(state='normal', height=20, width=100, wrap='word', undo=True)
code.configure(bg=rgb_hack((55, 55, 55)),fg="white")
code.pack(fill=Y, expand=1)
panedWindow.add(code)

run = ScrolledText(state='normal', height=7, width=100, wrap='none', undo=True)
run.pack(fill=Y, expand=1)
run.configure(bg=rgb_hack((55, 55, 55)),fg="light green")
panedWindow.add(run)


menubar = Menu(root)

menu(root, code, menubar, run)
root.mainloop()
