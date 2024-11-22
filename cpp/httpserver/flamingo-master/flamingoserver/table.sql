//????????
CREATE TABLE IF NOT EXISTS  t_user  (
         f_id  bigint(20) NOT NULL AUTO_INCREMENT COMMENT '????ID',
		 f_user_id  bigint(20) NOT NULL COMMENT '???ID',
		 f_username  varchar(64) NOT NULL COMMENT '?????',
         f_nickname  varchar(64) NOT NULL COMMENT '??????',
         f_password  varchar(64) DEFAULT NULL COMMENT '???????',
		 f_facetype  int(10) DEFAULT 0 COMMENT '??????????',
		 f_customface  varchar(32) DEFAULT NULL COMMENT '??????????',
		 f_customfacefmt  varchar(6) DEFAULT NULL COMMENT '??????????',
		 f_gender  int(2) DEFAULT 0 COMMENT '???',
		 f_birthday  bigint(20) DEFAULT 19900101 COMMENT '????',
		 f_signature  varchar(256) DEFAULT NULL COMMENT '???????',
		 f_address  varchar(256) DEFAULT NULL COMMENT '???',
		 f_phonenumber  varchar(64) DEFAULT NULL COMMENT '?��',
		 f_mail  varchar(256) DEFAULT NULL COMMENT '????',
         f_register_time  datetime NOT NULL COMMENT '??????',
		 f_owner_id  bigint(20) DEFAULT 0 COMMENT '???????userid',
         f_remark  varchar(64) DEFAULT NULL COMMENT '???',
         f_update_time  timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '???????',
         f_teaminfo blob DEFAULT NULL COMMENT '??????????',       
         PRIMARY KEY ( f_user_id ),
		 INDEX f_user_id (f_user_id),
         KEY  f_id  ( f_id )
        ) ENGINE=InnoDB DEFAULT CHARSET=utf8

//alter table t_user add f_teaminfo blob default null comment "??????????";
//alter table t_user drop column f_teaminfo;

//????????
//?????????????????f_user_id1��??f_user_id2
CREATE TABLE IF NOT EXISTS  t_user_relationship  (
         f_id  bigint(20) NOT NULL AUTO_INCREMENT COMMENT '????ID',
         f_user_id1  bigint(20) NOT NULL COMMENT '????????id',
         f_user_id2  bigint(20) NOT NULL COMMENT '????????id',		 
		 f_user1_teamname VARCHAR(32) NOT NULL DEFAULT "??????" COMMENT "???2?????1????????????",
		 f_user1_markname VARCHAR(32) COMMENT "???2?????1????????",		 
		 f_user2_teamname VARCHAR(32) NOT NULL DEFAULT "??????" COMMENT "???1?????2????????????",
		 f_user2_markname VARCHAR(32) COMMENT "???1?????2????????",
         f_update_time  timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '???????',
         f_remark  varchar(64) DEFAULT NULL COMMENT '???',
         PRIMARY KEY ( f_id ),
         KEY  f_id  ( f_id )
        ) ENGINE=InnoDB DEFAULT CHARSET=utf8

//ALTER TABLE t_user_relationship CHANGE f_create_time f_update_time timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '???????';		
//alter table t_user_relationship modify f_user1_teamname varchar(32) not null default "??????" comment "???2?????1????????????";
//alter table t_user_relationship modify f_user2_teamname varchar(32) not null default "??????" comment "???1?????2????????????";
//alter table t_user_relationship add f_user1_markname VARCHAR(32) COMMENT "???2?????1????????";
//alter table t_user_relationship add f_user2_markname VARCHAR(32) COMMENT "???1?????2????????";

//????????
CREATE TABLE IF NOT EXISTS  t_chatmsg  (
         f_id  bigint(20) NOT NULL AUTO_INCREMENT COMMENT '????ID',
         f_senderid  bigint(20) NOT NULL COMMENT '??????id',
         f_targetid  bigint(20) NOT NULL COMMENT '??????id',
		 f_msgcontent  BLOB NOT NULL COMMENT '????????',
         f_create_time  timestamp NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP COMMENT '???????',
         f_remark  varchar(64) DEFAULT NULL COMMENT '???',
         PRIMARY KEY ( f_id ),
         KEY  f_id  ( f_id )
        ) ENGINE=InnoDB DEFAULT CHARSET=utf8
