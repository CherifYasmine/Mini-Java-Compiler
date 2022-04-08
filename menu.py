import subprocess
from tkinter import *
from tkinter.filedialog import *
from tkinter.messagebox import *

filename = ''


class File():

    def __init__(self, code, root):
        self.filename = None
        self.code = code
        self.root = root 

    def openFile(self):
        file = askopenfile(mode='r')
        self.filename = file.name
        global filename 
        filename = file.name
        self.root.title(filename)
        t = file.read()
        self.code.delete(0.0, END)
        self.code.insert(0.0, t)
        
    def newFile(self):
        self.filename = "Untitled"
        global filename 
        filename = "Untitled"
        self.root.title(filename)
        self.code.delete(0.0, END)

    def saveFile(self):
        try:
            t = self.code.get(0.0, END)
            f = open(self.filename, 'w')
            f.write(t)
            f.close()
        except:
            self.saveAs()

    def saveAs(self):
        file = asksaveasfile(mode='w', defaultextension='.java')
        t = self.code.get(0.0, END)
        global filename 
        filename = file.name
        self.root.title(filename)
        try:
            file.write(t.rstrip())
        except:
            showerror(title="Can't save file!", message="Can't save file...")


    def quit(self):
        entry = askyesno(title="Quit", message="Are you sure you want to quit?")
        if entry == True:
            self.root.destroy()

class Run():

    def __init__(self, code, compiled, menuObject):
        self.compiled = compiled  
        self.code = code  
        self.menuObject = menuObject
    
    def save(self):
        if (filename == 'Untitled' or filename == '' ):
            self.menuObject.saveAs()
        else:
            self.menuObject.saveFile()

    def compileFile(self):
        self.save()
        output = subprocess.getoutput('cd syntax'+ " && "+ 'miniJava.exe < ' + filename)
        self.compiled.delete("1.0", END)
        if output == '' or output=='""' :
            output = "File compiled successfully"
        self.compiled.insert(1.0,chars=output)



def main(root, code, menubar, compiled):
    filemenu = Menu(menubar, tearoff=0)
    menuObject = File(code, root)
    filemenu.add_command(label="New", command=menuObject.newFile)
    filemenu.add_command(label="Open", command=menuObject.openFile)
    filemenu.add_command(label="Save", command=menuObject.saveFile)
    filemenu.add_command(label="Save As...", command=menuObject.saveAs)
    filemenu.add_command(label="Quit", command=menuObject.quit)
    menubar.add_cascade(label="File", menu=filemenu)
    root.config(menu=menubar)

    runner = Run(code, compiled, menuObject)

    executeMenu = Menu(menubar, tearoff=0)
    executeMenu.add_command(label="Run", command=runner.compileFile)
    menubar.add_cascade(label="Run", menu=executeMenu)

    root.config(menu=menubar)

