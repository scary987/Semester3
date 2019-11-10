function swt 
switch (echo $argv[1])
case cd
  if  ( test -d argv[2] )
     set SWTPATH $SWTPATH/argv[2..-1]
  else
    set SWTPATH https://svn.informatik.uni-rostock.de/swt/projekte/swt2033
  end
  echo $SWTPATH
case add
  #to add a function which automatically copies files to swtpath
  svn add $argv[2..-1]
case '*'
  svn $argv[1] SWTPATH/$argv[2..-1]
end
