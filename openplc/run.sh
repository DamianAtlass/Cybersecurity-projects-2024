#!/bin/bash
echo "Current working directory: $(pwd)"
echo "Files in the current directory:"
ls -la
ls -l /home/openplc/scripts

if [ ! -f /home/openplc/scripts/script.st ]; then
    echo "Structured text file missing!"
    exit 1
fi


SQL_SCRIPT1="INSERT INTO Programs (Name, Description, File, Date_upload) VALUES ('Assembly Station FactoryI/O', 'Desc', 'script.st', strftime('%s', 'now'));"
SQL_SCRIPT2="INSERT INTO Programs (Name, Description, File, Date_upload) VALUES ('Cyclic Assembly Station', 'Desc', 'script_cyclic.st', strftime('%s', 'now'));"

SQL_AUTOST="UPDATE Settings SET Value = 'true' WHERE Key = 'Start_run_mode';"

cp /home/openplc/scripts/script.st /root/OpenPLC_v3/webserver/st_files
cp /home/openplc/scripts/script_cyclic.st /root/OpenPLC_v3/webserver/st_files

sqlite3 /root/OpenPLC_v3/webserver/openplc.db "$SQL_SCRIPT1"
sqlite3 /root/OpenPLC_v3/webserver/openplc.db "$SQL_SCRIPT2"



SQL_DEVICE1="INSERT INTO Slave_dev (dev_name, dev_type, slave_id, ip_address, ip_port, di_start, di_size, coil_start, coil_size, ir_start, ir_size, hr_read_start, hr_read_size, hr_write_start, hr_write_size) VALUES ('AssemblyStation', 'TCP', 1, '172.28.0.15', 503, 0, 10, 0, 10, 0, 5, 0, 2, 0, 2);"

sqlite3 /root/OpenPLC_v3/webserver/openplc.db "$SQL_DEVICE1"




sqlite3 /root/OpenPLC_v3/webserver/openplc.db "$SQL_AUTOST"


/root/OpenPLC_v3/start_openplc.sh