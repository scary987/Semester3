# Dieses Skript kann mit awk -F ";" -f convert.awk studip.csv aufgerufen werden, um die CSV-Dateien zu verarbeiten, die aus Stud.IP exportiert werden können

NR > 1 {
  gsub(/"/, "", $1); 
  gsub("Gruppe ", "", $1); 
  gsub(/"/, "", $6); groupMembers[$1]=groupMembers[$1]?groupMembers[$1]","$6:$6; 
} 
END {
  groupPrefix = "ip2019-"
  for (group in groupMembers) {
    groupNumber = sprintf("%02d", group)
    print groupPrefix groupNumber " = " groupMembers[group];
  }
}
