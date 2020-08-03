/* 32 inputs to each node, 10 output nodes*/
const static float node_0[32] = {0.265625,0.51953125,0.328125,0.30078125,0.28125,0.08154296875,0.0086669921875,0.00103759765625,0.07666015625,0.041748046875,0.0205078125,0.1279296875,0.173828125,0.25,0.2734375,0.08349609375,0.1845703125,0.25390625,0.5703125,0.326171875,0.294921875,0.279296875,0.0869140625,0.341796875,0.1572265625,0.26171875,0.08447265625,0.0213623046875,0.09326171875,0.140625,0.1669921875,0.1728515625};
const static float node_1[32] = {0.1865234375,0.318359375,0.177734375,0.03515625,0.55078125,0.2578125,0.1259765625,0.359375,0.1611328125,0.07177734375,0.0625,0.60546875,0.296875,0.328125,0.3359375,0.28125,0.140625,0.142578125,0.578125,0.34765625,0.3203125,0.27734375,0.1826171875,0.279296875,0.3046875,0.302734375,0.326171875,0.09228515625,0.185546875,0.01092529296875,0.326171875,0.3046875};
const static float node_2[32] = {0.263671875,0.298828125,0.3046875,0.294921875,0.08740234375,0.275390625,0.515625,0.314453125,0.328125,0.3359375,0.150390625,0.287109375,0.271484375,0.171875,0.126953125,0.34765625,0.042236328125,0.271484375,0.27734375,0.08837890625,0.0703125,0.26171875,0.287109375,0.373046875,0.1513671875,0.1298828125,0.07080078125,0.265625,0.3125,0.1484375,0.318359375,0.1650390625};
const static float node_3[32] = {0.1767578125,0.32421875,0.015869140625,0.1279296875,0.1357421875,0.07177734375,0.328125,0.1298828125,0.32421875,0.359375,0.03759765625,0.3515625,0.021728515625,0.357421875,0.330078125,0.1298828125,0.345703125,0.349609375,0.259765625,0.279296875,0.1787109375,0.3515625,0.27734375,0.0196533203125,0.1474609375,0.263671875,0.0888671875,0.064453125,0.01153564453125,0.267578125,0.1455078125,0.341796875};
const static float node_4[32] = {0.259765625,0.171875,0.64453125,0.1640625,0.17578125,0.16015625,0.359375,0.1259765625,0.1259765625,0.265625,0.318359375,0.142578125,0.1376953125,0.1513671875,0.365234375,0.177734375,0.001373291015625,0.30859375,0.140625,0.25,0.35546875,0.15625,0.25,0.045654296875,0.1640625,0.369140625,0.333984375,0.26953125,0.039794921875,0.0113525390625,0.15625,0.287109375};
const static float node_5[32] = {0.173828125,0.06298828125,0.30078125,0.173828125,0.07666015625,0.0654296875,0.287109375,0.171875,0.08056640625,0.134765625,0.365234375,0.1337890625,0.25,0.03515625,0.130859375,0.373046875,0.2734375,0.0908203125,0.29296875,0.0419921875,0.08544921875,0.162109375,0.045654296875,0.00946044921875,0.1796875,0.37109375,0.30859375,0.1728515625,0.162109375,0.0218505859375,0.30078125,0.5};
const static float node_6[32] = {0.07666015625,0.0712890625,0.1591796875,0.294921875,0.1513671875,0.302734375,0.6953125,0.1416015625,0.1337890625,0.37109375,0.263671875,0.35546875,0.330078125,0.171875,0.267578125,0.291015625,0.072265625,0.150390625,0.043212890625,0.25,0.1748046875,0.25,0.169921875,0.13671875,0.091796875,0.5,0.07177734375,0.52734375,0.31640625,0.07861328125,0.0400390625,0.142578125};
const static float node_7[32] = {0.30078125,0.3203125,0.5234375,0.5078125,0.169921875,0.30078125,0.5078125,0.6015625,0.2890625,0.0751953125,0.1845703125,0.283203125,0.1435546875,0.1572265625,0.291015625,0.267578125,0.1435546875,0.302734375,0.349609375,0.185546875,0.16796875,0.271484375,0.031494140625,0.1748046875,0.251953125,0.31640625,0.042724609375,0.1650390625,0.07080078125,0.279296875,0.3046875,0.1259765625};
const static float node_8[32] = {0.1806640625,0.140625,0.50390625,0.04248046875,0.0927734375,0.3515625,0.03125,0.251953125,0.14453125,0.021728515625,0.314453125,0.515625,0.306640625,0.035400390625,0.26171875,0.130859375,0.251953125,0.06298828125,0.26953125,0.130859375,0.279296875,0.134765625,0.173828125,0.34375,0.0012969970703125,0.314453125,0.515625,0.08740234375,0.0322265625,0.01092529296875,0.279296875,0.314453125};
const static float node_9[32] = {0.0023193359375,0.091796875,0.2734375,0.1435546875,0.5390625,0.298828125,0.373046875,0.283203125,0.181640625,0.1357421875,0.16015625,0.06591796875,0.283203125,0.6171875,0.0054931640625,0.022705078125,0.185546875,0.275390625,0.07275390625,0.0703125,0.07861328125,0.0634765625,0.373046875,0.34375,0.032958984375,0.291015625,0.31640625,0.294921875,0.09326171875,0.068359375,0.15234375,0.08544921875};
