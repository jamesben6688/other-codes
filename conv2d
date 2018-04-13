def conv2d(input, filter, strides, padding, biases, data_format=None):
	"""
	filter: h, w, c, n
	"""
	if data_format == "channel_first":
		channel_axis=1  # N C H W
		input_height, input_width = input[2], input[3]
	else:
		channel_axis=-1  # N H W C
		input_height, input_width = input[1], input[2]
	input_dim = input[channel_axis]  # 输入数据的channel
	output_dim = filter[-1]
	output_height = (input_height-filter[0]+2*padding)/strides[0] + 1
	output_width = (input_width-filter[1]+2*padding)/strides[1] + 1
	output = np.zeros(shape=[input[0],output_dim, output_height, output_width])
	for i in input[0]:
		for j in output_dim:
			for h in output_height:
				for w in output_width:
					output[i, j, h, w] = 
					np.sum(np.dot(
					input[i, :, input_height*h:input_height*(h+1), input_width*w:input_width*(w+1)], filter[:, :, :, j]))+
					biases[j]  ##filter是不分图片的，每张图片都一样
