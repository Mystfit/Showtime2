*** Todo List for ShowtimeV2 ***


** Messages **

* Old structure *

0: reply_register_method
1: {
	u'zst_method_args': {
		u'category': None, u'deviceindex': None, u'trackindex': None, u'value': None, u'parameterindex': None
	}, 
	u'zst_method_name': u'set_value', 
	u'zst_method_orig': u'LiveNode', 
	u'zst_method_Accessmode': u'write', 
	u'zst_method_output': None
}


* New structure A *

Message Types:
Notify (READ), Command, (WRITE), Respond (RESPONDER)

0: [nodeOriginId, nodeMethodId, messageType]
1: [arg1, arg2, arg3] || output


* New structure B *

Message Types:
Announcement, Command, Respond

0: [messageOwnerId, messageTypeId]
1: payload ([args1, args2, args3] || "output")	


Node has one input(commands), outputs(announcements), and responders
Worker has one input(tasks), outputs(result), and responders(task status)