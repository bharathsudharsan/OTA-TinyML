#pragma once
const int NUM_SAMPLES = 50;
const int NUM_FEATURES = 48
float X[50][48] = {{-3.778e-06, -3.0902e-05, -9.3374e-05, -4.043e-06, 1.251e-06, 1.4466e-05, -0.026988, -0.026957, -0.026864, -0.034027, -0.034028, -0.034043, 0.00083278, 0.0011556, 0.010877, 0.00080874, 0.0002646, 0.00059752, 1.838, 1.838, 1.8372, 1.8369, 1.8369, 1.8369, 0.0081513, -0.2264, 0.51284, 0.013498, 0.2856, -0.33361, -0.0035818, -0.0035424, -0.003506, 0.0015265, 0.0015283, 0.001503, -0.49321, 21.47, 14.24, -0.43905, 2.9973, 10.385, -1.4978, -1.4978, -1.4977, -1.4992, -1.4992, -1.4992}, {-3.542e-06, -4.569e-06, -4.373e-06, -4.906e-06, 2.203e-06, 1.2376e-05, -0.036671, -0.036667, -0.036663, -0.023588, -0.02359, -0.023603, 0.00075861, 0.00022871, 0.00064217, 0.00075274, 0.00031093, 0.00079462, 0.82473, 0.82473, 0.82471, 0.82707, 0.82707, 0.82706, 0.0082285, -0.036691, -0.24353, 0.011878, -0.511, -0.023386, -0.0051027, -0.0050913, -0.005085, 0.0033733, 0.003342, 0.0033735, -0.64349, 2.3873, 3.7349, -0.62968, 21.881, 7.9314, -1.5015, -1.5015, -1.5015, -1.4974, -1.4974, -1.4975}, {-1.242e-05, -4.174e-05, 2.1637e-05, 1.253e-06, 2.0441e-05, 0.00018593, 0.013388, 0.01343, 0.013408, -0.021411, -0.021432, -0.021618, 0.0023425, 0.0012379, 0.0041066, 0.0023613, 0.0012742, 0.0038219, 1.5127, 1.5127, 1.5123, 1.5066, 1.5064, 1.5059, 0.025295, -0.18072, -0.39799, 0.028423, 0.091364, 0.60561, -0.0094655, -0.0093985, -0.010019, -0.0080714, -0.0081138, -0.0082827, -0.66925, 0.8424, 5.6157, -0.7089, 0.77827, 4.5335, -1.4986, -1.4986, -1.4983, -1.4985, -1.4986, -1.4981}, {-2.0885e-05, -4.3001e-05, -0.00013218, 4.461e-06, -0.00011735, -0.00038852, 0.0013721, 0.0014151, 0.0015473, -0.041963, -0.041845, -0.041457, 0.0029805, 0.001725, 0.0050963, 0.002979, 0.0022559, 0.0062366, 2.3556, 2.3555, 2.3544, 2.3377, 2.3374, 2.3366, 0.025797, -0.075043, 0.16757, 0.0013184, -1.0772, -0.518, -0.014779, -0.014751, -0.014399, -0.0071267, -0.0070993, -0.0073863, -0.49519, 0.66843, 6.151, -0.53195, 5.9976, 3.9986, -1.4959, -1.496, -1.4962, -1.5013, -1.5014, -1.5013}, {-2.0224e-05, -7.8084e-05, 0.00015173, -2.4012e-05, -6.3435e-05, -0.00048802, 0.02133, 0.021408, 0.021256, 0.034564, 0.034628, 0.035116, 0.0025414, 0.0014794, 0.0037126, 0.0025439, 0.0016216, 0.0053465, 1.8212, 1.8212, 1.8205, 1.817, 1.817, 1.8163, 0.0049889, -0.22879, 1.233, 0.030576, -0.2966, -1.5707, 0.014437, 0.01453, 0.014313, 0.0077327, 0.0078287, 0.0080715, -0.62415, 1.2941, 9.9269, -0.63275, 2.9969, 21.059, -1.4935, -1.4935, -1.4937, -1.5042, -1.5042, -1.5042}, {2.024e-06, 1.845e-06, 3.7672e-05, -1.295e-06, -9.13e-07, 1.6166e-05, 0.0053543, 0.0053525, 0.0053148, 0.0049931, 0.004994, 0.0049778, 0.00078982, 0.00022629, 0.00089222, 0.00078428, 0.00021219, 0.00056801, 1.3, 1.3, 1.3, 1.2987, 1.2987, 1.2986, -0.0043759, 0.054849, 2.5153, 0.004899, 0.13617, 0.63639, -0.0015205, -0.0015186, -0.0016421, -0.0018496, -0.0018431, -0.0018297, -0.59799, 1.0783, 42.43, -0.56427, 2.2345, 7.6904, -1.4969, -1.4969, -1.4969, -1.4977, -1.4977, -1.4977}, {-3.444e-06, 1.172e-06, 1.2581e-05, -2.51e-06, 2.85e-07, -6.481e-06, -0.028927, -0.028928, -0.02894, -0.042311, -0.042311, -0.042304, 0.00079569, 0.00023794, 0.00061605, 0.00079008, 0.00022175, 0.00049098, 1.0743, 1.0743, 1.0742, 1.0761, 1.0761, 1.0761, 0.0031019, 0.137, 0.013729, -0.0031149, -0.06874, 0.012063, -0.0047979, -0.0048062, -0.004801, 0.001358, 0.0013657, 0.0013648, -0.59651, 4.6881, 5.6283, -0.56483, 2.4564, 3.6985, -1.4963, -1.4963, -1.4963, -1.4992, -1.4992, -1.4992}, {-4.335e-06, 4.276e-06, 1.95e-05, 6.1e-07, -1.06e-06, 1.148e-05, -0.11271, -0.11271, -0.11273, -0.1935, -0.1935, -0.19351, 0.0008134, 0.00029233, 0.00063889, 0.00082121, 0.00027541, 0.00066762, 1.8302, 1.8302, 1.8302, 1.8247, 1.8247, 1.8246, 0.0034105, 0.9379, 0.55995, -0.006764, -0.12576, -0.22928, -0.0039906, -0.0040007, -0.0040187, -0.0011927, -0.0011917, -0.0011931, -0.50063, 10.857, 7.7365, -0.47899, 5.8475, 10.819, -1.4946, -1.4946, -1.4946, -1.4965, -1.4965, -1.4965}, {6.104e-06, -8.4833e-05, -0.0008113, -2.4141e-05, -4.0778e-05, -0.00018793, 0.018734, 0.018819, 0.01963, -0.025826, -0.025785, -0.025597, 0.0026259, 0.0016831, 0.0069705, 0.0025639, 0.0016097, 0.004633, 1.8701, 1.8699, 1.8685, 1.8622, 1.8621, 1.8616, 0.019886, -0.45152, -1.1801, 0.022279, -0.056769, 0.29829, 0.011375, 0.011504, 0.012462, 0.0014738, 0.0015205, 0.0012646, -0.64945, 4.5703, 9.4817, -0.64151, 1.4723, 7.6461, -1.4956, -1.4957, -1.496, -1.5039, -1.504, -1.5037}, {-1.1792e-05, 1.6134e-05, 0.00048769, -1.483e-06, -3.7759e-05, 0.00011681, 0.049785, 0.049769, 0.049281, 0.093165, 0.093203, 0.093086, 0.0028339, 0.001707, 0.0058769, 0.002895, 0.0015973, 0.0073165, 2.1979, 2.1979, 2.1967, 2.1981, 2.198, 2.1969, -0.0038903, -0.15726, 0.84079, 0.002743, -0.14623, -0.29894, 0.0078227, 0.0078487, 0.0084307, 0.0053436, 0.0053849, 0.0054318, -0.48608, 1.0177, 4.0603, -0.5462, 1.4495, 3.2772, -1.5074, -1.5074, -1.5073, -1.4974, -1.4974, -1.4968}, {4.89e-07, 3.895e-06, -2.963e-06, 9.95e-07, 6.462e-06, -9.3597e-05, 0.052863, 0.052859, 0.052862, 0.11398, 0.11397, 0.11407, 0.00075728, 0.00023579, 0.00046726, 0.00075126, 0.00025952, 0.00088851, 0.8794, 0.87939, 0.87939, 0.8795, 0.8795, 0.87949, 0.00065691, 0.29265, 0.19853, 0.0055042, 0.57585, -0.93799, 0.01295, 0.012939, 0.012946, -0.0042568, -0.004245, -0.0041177, -0.59601, 7.1864, 7.5662, -0.63116, 6.4457, 8.1871, -1.4959, -1.4959, -1.4959, -1.4948, -1.4948, -1.4949}, {-6.472e-06, 2.2343e-05, 3.4809e-05, 3.67e-07, 3.802e-05, -7.7661e-05, 0.0055613, 0.005539, 0.0055042, 0.0050798, 0.0050418, 0.0051194, 0.0013751, 0.0012172, 0.002127, 0.0013349, 0.0012243, 0.0027929, 1.9758, 1.9757, 1.9755, 1.9753, 1.9753, 1.975, 0.0010234, 0.1287, 0.29176, 0.0048262, 1.3621, -0.21604, -0.003089, -0.0031051, -0.0031585, -0.00045651, -0.00050854, -0.00040966, -0.76927, 26.508, 8.7117, -0.81357, 42.513, 13.195, -1.5017, -1.5017, -1.5016, -1.4985, -1.4984, -1.4983}, {1.866e-06, -2.9095e-05, 0.00016981, -1.7001e-05, -1.3081e-05, -0.00033702, 0.019335, 0.019364, 0.019194, 0.0085051, 0.0085182, 0.0088552, 0.0022635, 0.0011305, 0.0020854, 0.0022432, 0.0012491, 0.0040292, 1.3606, 1.3606, 1.3603, 1.3596, 1.3596, 1.3591, 0.023012, -0.14352, 0.32808, 0.032945, -0.048164, -1.3025, 0.010728, 0.010738, 0.010791, 0.003155, 0.0031807, 0.0036727, -0.70556, 0.61432, 3.1551, -0.70232, 1.3488, 5.0426, -1.4987, -1.4987, -1.4985, -1.4994, -1.4995, -1.4986}, {-1.843e-06, 1.3029e-05, 0.00012074, 8.16e-07, 3.62e-05, -1.946e-06, 0.025622, 0.025609, 0.025488, -0.044649, -0.044685, -0.044683, 0.0013368, 0.00096504, 0.0021412, 0.0013662, 0.00069744, 0.0016242, 2.0071, 2.007, 2.0067, 2.005, 2.005, 2.0048, -0.0071351, -0.76469, 0.21434, -0.0035513, 0.46124, -0.31055, 0.002951, 0.0029479, 0.0028785, -0.0032263, -0.0032647, -0.003259, -0.80401, 15.922, 5.3603, -0.83146, 2.5636, 5.8574, -1.5004, -1.5005, -1.5004, -1.4997, -1.4997, -1.4995}, {-2.9051e-05, -2.769e-05, -1.3588e-05, 1.5873e-05, -7.037e-06, -2.8106e-05, -0.1181, -0.11807, -0.11805, -0.12831, -0.1283, -0.12828, 0.0022536, 0.0011707, 0.0022234, 0.0021867, 0.0013041, 0.0030002, 1.3684, 1.3683, 1.3679, 1.3737, 1.3736, 1.3729, 0.025564, 0.18465, -0.11172, -0.02084, -0.2323, 0.1678, 0.011043, 0.011109, 0.011113, -0.0072611, -0.0072674, -0.0071112, -0.67132, 0.58519, 2.0855, -0.70089, 1.5211, 2.9007, -1.5016, -1.5016, -1.5016, -1.4954, -1.4955, -1.4953}, {-1.006e-05, -2.3968e-05, 0.00018602, 1.6001e-05, 8.326e-05, 0.00013023, 0.008724, 0.0087479, 0.0085619, -0.024967, -0.025051, -0.025181, 0.0026013, 0.0014328, 0.0031058, 0.0026432, 0.0015398, 0.004809, 1.8922, 1.8921, 1.8915, 1.8872, 1.8871, 1.8863, -0.0029549, -0.11114, 0.41522, -0.031809, 0.21781, 0.3985, -0.010018, -0.0099611, -0.010225, -0.00060852, -0.00065776, -0.00022438, -0.66076, 1.2506, 4.5011, -0.60694, 1.1715, 3.7753, -1.4991, -1.4991, -1.4991, -1.5, -1.5, -1.4997}, {2.1482e-05, -0.00010761, -0.0002968, -1.87e-05, 4.611e-06, -0.00021653, 0.018287, 0.018394, 0.018691, 0.056003, 0.055998, 0.056214, 0.002653, 0.0017099, 0.0047253, 0.0026086, 0.0014037, 0.0050163, 1.8874, 1.8872, 1.8867, 1.887, 1.8869, 1.886, 0.026093, -0.86501, -0.55475, 0.013293, 0.00076068, -0.71636, 0.0061209, 0.0062278, 0.0066771, 0.0071194, 0.0070891, 0.0070142, -0.60601, 4.6473, 15.108, -0.6384, 0.30306, 8.819, -1.4995, -1.4996, -1.4996, -1.5018, -1.5018, -1.5015}, {2.46e-07, 3.9149e-05, -7.2007e-05, 4.282e-06, 2.5591e-05, 0.00018056, -0.031082, -0.031121, -0.031049, -0.037855, -0.03788, -0.038061, 0.0013985, 0.00096947, 0.0023741, 0.001404, 0.0010076, 0.002973, 2.1207, 2.1206, 2.1201, 2.1212, 2.1212, 2.1207, 0.00053651, 1.8611, -0.20041, -0.011244, 0.62681, 0.80845, -0.0024937, -0.0025004, -0.0023136, 0.00051878, 0.00047473, 0.00033772, -0.81531, 16.599, 5.0397, -0.79242, 15.003, 11.542, -1.5009, -1.5008, -1.5009, -1.4978, -1.4978, -1.4978}, {-5.029e-06, 5.7119e-05, 0.00014253, -5.82e-06, -5.8632e-05, 4.128e-05, 0.0077823, 0.0077252, 0.0075826, -0.02258, -0.022521, -0.022562, 0.0026005, 0.0019009, 0.0050108, 0.0025702, 0.0017327, 0.0056406, 1.8885, 1.8884, 1.888, 1.8825, 1.8823, 1.882, 0.00016678, 1.3758, 0.023246, -0.0037623, -0.28113, -1.0806, -0.010602, -0.010639, -0.010475, -0.00027836, -0.00019316, 0.00014452, -0.65664, 9.5709, 3.0569, -0.62145, 1.2078, 8.0726, -1.499, -1.4989, -1.4989, -1.5012, -1.5012, -1.5006}, {-6.544e-06, 2.095e-06, 1.8228e-05, -3.002e-06, -2.895e-06, 7.669e-06, -0.032325, -0.032327, -0.032345, -0.015891, -0.015888, -0.015896, 0.0007583, 0.00021242, 0.00055555, 0.00075198, 0.00023171, 0.0006254, 0.82004, 0.82004, 0.82002, 0.82548, 0.82548, 0.82547, 0.013711, 0.0078645, 0.52727, 0.0078237, -0.10635, -0.094079, -0.01632, -0.016312, -0.016302, 0.0021563, 0.0021721, 0.0021854, -0.64839, 1.5246, 4.0947, -0.60757, 4.2633, 4.6038, -1.4955, -1.4955, -1.4955, -1.5033, -1.5033, -1.5033}, {1.444e-06, 3.2017e-05, 0.00013845, 3.34e-07, -4.5098e-05, 0.00010036, -0.038442, -0.038474, -0.038612, -0.019165, -0.019119, -0.01922, 0.0014303, 0.00099057, 0.0029705, 0.0013987, 0.0014459, 0.0035238, 2.0788, 2.0787, 2.0785, 2.0773, 2.0772, 2.077, -0.0033377, 0.64568, 0.53145, 0.005779, -1.9992, 1.0713, -0.0042918, -0.0043214, -0.00445, -0.0023126, -0.0022414, -0.0024666, -0.86607, 10.471, 17.715, -0.8418, 53.635, 10.072, -1.4992, -1.4992, -1.4992, -1.4995, -1.4995, -1.4993}, {5.029e-06, 4.9809e-05, 6.3861e-05, -1.0584e-05, 1.3338e-05, 9.0647e-05, 0.0095182, 0.0094684, 0.0094045, -0.0016205, -0.0016338, -0.0017245, 0.0022029, 0.0012838, 0.0031464, 0.0021271, 0.0011872, 0.0023665, 1.288, 1.2879, 1.2873, 1.2867, 1.2867, 1.2863, -0.020672, 0.48979, 0.38802, 0.013881, -0.071268, 0.76565, 0.0082924, 0.0082004, 0.0080004, -0.0094445, -0.0094322, -0.0097297, -0.71904, 2.8816, 4.8786, -0.6967, 0.025782, 4.7646, -1.4992, -1.4992, -1.4991, -1.4965, -1.4966, -1.4967}, {-1.2765e-05, 1.1773e-05, -0.00074045, -9.268e-06, 2.8648e-05, -7.0954e-05, 0.020818, 0.020807, 0.021547, 0.014439, 0.014411, 0.014481, 0.0025967, 0.0013288, 0.0085397, 0.0025796, 0.0016718, 0.0068176, 1.8177, 1.8177, 1.8164, 1.8225, 1.8224, 1.8216, 0.031081, 0.12996, 0.10285, 0.011521, 0.29603, 0.30339, 0.0084521, 0.0084297, 0.0077704, -0.0037469, -0.0037794, -0.0045401, -0.61682, 1.9028, 5.4403, -0.64753, 2.4623, 4.3039, -1.5053, -1.5053, -1.5042, -1.4985, -1.4987, -1.4973}, {-1.502e-06, -9.35e-07, 1.037e-05, -1.107e-06, 4.46e-07, -7.791e-06, 0.061849, 0.06185, 0.06184, 0.10859, 0.10859, 0.10859, 0.00080521, 0.00025284, 0.00050099, 0.00079582, 0.00031275, 0.0004571, 1.6915, 1.6915, 1.6915, 1.6885, 1.6885, 1.6884, 0.0074991, 0.050682, -0.33202, 0.0020494, -0.86103, -0.26258, 0.005382, 0.0053858, 0.0054022, -0.0024729, -0.0024625, -0.0024531, -0.52087, 2.3943, 6.9694, -0.49266, 14.917, 9.0778, -1.4983, -1.4983, -1.4983, -1.4987, -1.4987, -1.4987}, {-5.007e-06, 1.5584e-05, 0.00056406, 6.467e-06, 4.7662e-05, -0.00036229, -0.026678, -0.026693, -0.027257, -0.027334, -0.027382, -0.02702, 0.0026121, 0.0014088, 0.0075045, 0.0025529, 0.0015131, 0.0041937, 1.8372, 1.8371, 1.8365, 1.8401, 1.84, 1.8394, -0.028305, -0.057062, 1.2594, -0.007268, 0.059937, -0.64631, -0.00015868, -0.00019485, 0.00085625, 0.0037518, 0.0036882, 0.0038188, -0.66597, 1.3323, 7.2546, -0.59521, 2.0848, 3.622, -1.5092, -1.5092, -1.5088, -1.4989, -1.4989, -1.4987}, {3.336e-06, -3.8921e-05, 1.806e-06, 1.375e-06, -2.3839e-05, -0.0001783, 0.0013645, 0.0014034, 0.0014016, 0.039521, 0.039545, 0.039723, 0.0022722, 0.0012615, 0.00277, 0.0022641, 0.0012547, 0.0031715, 1.3924, 1.3923, 1.3918, 1.3921, 1.3921, 1.3914, 0.01395, -0.37681, -0.021704, 0.007229, -0.38087, -0.71609, -0.01452, -0.014478, -0.014366, 0.0069842, 0.0069864, 0.0071444, -0.72242, 0.77727, 3.1662, -0.72549, 4.7266, 7.5791, -1.4988, -1.4989, -1.4988, -1.4993, -1.4993, -1.4993}, {-3.477e-06, -6.5069e-05, 0.00030364, -2.351e-06, -5.7909e-05, -0.00032272, 0.024697, 0.024762, 0.024458, 0.019693, 0.019751, 0.020074, 0.0022833, 0.0014222, 0.005217, 0.0021623, 0.0012629, 0.002428, 1.342, 1.3419, 1.3413, 1.3411, 1.341, 1.3406, 0.016169, -0.2374, 1.9779, -0.0026489, -0.35907, -0.73757, -0.0087893, -0.0086951, -0.0084475, 0.02184, 0.021942, 0.022096, -0.71251, 3.0782, 9.6721, -0.70733, 1.0651, 8.8837, -1.5025, -1.5026, -1.5013, -1.4941, -1.4941, -1.494}, {-1.4029e-05, 5.75e-07, -0.00060048, -1.7579e-05, -1.3856e-05, -0.0004099, 0.028901, 0.0289, 0.029501, 0.010589, 0.010603, 0.011013, 0.0029447, 0.0019441, 0.0046172, 0.0028946, 0.0017218, 0.0074424, 2.2521, 2.2519, 2.2514, 2.2521, 2.252, 2.2508, 0.023926, -0.26206, -1.2337, 0.025815, 0.29576, -1.5177, 0.0088658, 0.0088277, 0.0093325, -0.010977, -0.011004, -0.012254, -0.52616, 3.0083, 6.2625, -0.55404, 2.9993, 13.538, -1.5049, -1.5049, -1.5045, -1.4905, -1.4905, -1.4907}, {-5.714e-06, -1.036e-06, -1.1117e-05, -7.354e-06, 2.914e-06, 2.227e-06, 0.0095231, 0.0095241, 0.0095353, 0.016942, 0.01694, 0.016937, 0.0012271, 0.00056373, 0.0012235, 0.0011847, 0.00056009, 0.0011513, 1.4873, 1.4872, 1.4872, 1.4877, 1.4877, 1.4876, 0.0020829, 0.26349, 0.98426, 0.011022, 0.11185, 0.44816, -0.0021543, -0.0021649, -0.0021716, 0.0015787, 0.001569, 0.0015219, -0.76911, 1.1438, 14.83, -0.7053, 1.7471, 9.5739, -1.4978, -1.4978, -1.4978, -1.4987, -1.4987, -1.4986}, {-9.161e-06, 2.23e-06, -0.00012342, -3.674e-06, -7.429e-06, 1.063e-05, -0.07164, -0.071642, -0.071519, -0.19317, -0.19316, -0.19317, 0.0011253, 0.00059137, 0.0014739, 0.0011726, 0.00052562, 0.001441, 1.2196, 1.2196, 1.2193, 1.2229, 1.2228, 1.2227, 0.015862, 0.79613, -2.1563, 0.016123, -0.024247, -0.0098711, -0.01203, -0.012056, -0.011898, -0.018688, -0.018695, -0.018688, -0.70695, 11.405, 16.563, -0.7361, 2.4204, 8.9448, -1.4981, -1.4981, -1.4982, -1.4943, -1.4943, -1.4942}, {-2.22e-07, 3.736e-06, -3.3508e-05, -5.219e-06, -8.28e-07, 1.413e-05, 0.0213, 0.021296, 0.021329, -0.018942, -0.018942, -0.018956, 0.00081928, 0.00029907, 0.00073654, 0.00080913, 0.0002487, 0.00043555, 1.8182, 1.8182, 1.8181, 1.8127, 1.8127, 1.8127, 0.0037432, -0.24687, -2.5179, 0.014306, 0.081108, 0.26764, 0.00082131, 0.00082483, 0.00090257, -0.0013035, -0.0013034, -0.0013067, -0.47917, 7.0225, 19.173, -0.47101, 3.1683, 3.738, -1.4977, -1.4977, -1.4978, -1.4988, -1.4988, -1.4988}, {-2.762e-06, 9.498e-06, -4.7168e-05, -8.613e-06, -3.0398e-05, -0.00010226, 0.015979, 0.01597, 0.016017, 0.03831, 0.038341, 0.038443, 0.001279, 0.00094432, 0.0017088, 0.0012505, 0.00068183, 0.0016844, 1.6422, 1.6422, 1.642, 1.6361, 1.6361, 1.6358, 0.0042815, 0.71212, -0.51469, 0.015657, -0.87291, -0.10699, 0.0028356, 0.0028189, 0.0029094, 0.0034355, 0.0034786, 0.0035763, -0.81425, 33.716, 9.7651, -0.73297, 10.864, 8.2881, -1.4979, -1.498, -1.4979, -1.4984, -1.4984, -1.4983}, {-1.1974e-05, 0.00017219, -0.00026021, 1.1447e-05, 3.4433e-05, 0.0002948, -0.031191, -0.031363, -0.031103, -0.02535, -0.025385, -0.025679, 0.0028939, 0.0021075, 0.003991, 0.0029322, 0.001818, 0.0075971, 2.277, 2.2767, 2.2758, 2.2632, 2.2631, 2.2622, 0.012458, 1.072, -0.44431, -0.0040179, 0.17119, -0.48042, -0.010725, -0.010856, -0.010583, -0.003524, -0.0035482, -0.0032309, -0.52294, 4.8046, 2.7056, -0.50565, 2.1305, 14.965, -1.4965, -1.4966, -1.4966, -1.5019, -1.5019, -1.5009}, {-5.723e-06, -7.0034e-05, 0.00040955, -3.2879e-05, -4.475e-06, 0.00024964, 0.033946, 0.034016, 0.033606, 0.040236, 0.04024, 0.03999, 0.0030296, 0.0018281, 0.0085049, 0.0029957, 0.0018459, 0.0047047, 2.3693, 2.3692, 2.368, 2.3651, 2.365, 2.3645, 0.013272, -0.03725, 1.2714, 0.011978, 0.5317, 0.61403, 0.002897, 0.0029285, 0.0029546, -0.013306, -0.013325, -0.013722, -0.51689, 2.1507, 10.889, -0.51327, 4.5439, 7.1244, -1.503, -1.503, -1.5021, -1.4933, -1.4933, -1.4932}, {1.438e-06, 7.6044e-05, -6.6977e-05, 3.778e-06, -3.7432e-05, 1.2036e-05, 0.052651, 0.052575, 0.052642, 0.096646, 0.096683, 0.096671, 0.0028728, 0.0017128, 0.0035851, 0.0028454, 0.0017048, 0.0060889, 2.2012, 2.2011, 2.2005, 2.2063, 2.2061, 2.2054, -0.0022149, 0.22388, -0.98518, -0.0089743, -0.35449, -0.0090948, 0.014517, 0.01446, 0.014495, 0.00049819, 0.00057523, -0.00015379, -0.44624, 1.383, 8.1755, -0.59536, 1.6356, 5.439, -1.5043, -1.5043, -1.5043, -1.4959, -1.496, -1.4957}, {-2.528e-06, 9.404e-06, -0.00022176, 6.788e-06, 3.2233e-05, 0.00012934, 0.036031, 0.036021, 0.036243, 0.077385, 0.077353, 0.077223, 0.0021477, 0.0011551, 0.0024749, 0.0021708, 0.0011781, 0.003016, 1.2458, 1.2458, 1.2456, 1.2397, 1.2397, 1.2393, -0.0067523, 0.17117, -0.90619, -0.028521, -0.24285, 0.68752, -0.015342, -0.015302, -0.015357, 0.015065, 0.015055, 0.01509, -0.71386, 1.3203, 6.0649, -0.65137, 2.5051, 6.0402, -1.497, -1.4971, -1.4969, -1.5045, -1.5045, -1.5045}, {3.061e-06, 2.203e-06, -0.00015634, 1.8123e-05, 2.7253e-05, 2.339e-06, 0.013618, 0.013616, 0.013772, 0.0029152, 0.0028879, 0.0028856, 0.0024732, 0.0013262, 0.0054976, 0.0025212, 0.0014613, 0.0053223, 1.7076, 1.7076, 1.7067, 1.7146, 1.7146, 1.714, -0.0078504, -0.1339, -0.44004, 0.00055689, 0.15481, -0.13181, 0.01277, 0.012797, 0.012801, -0.0055085, -0.0055449, -0.0058178, -0.61727, 0.92861, 5.8766, -0.69508, 1.6534, 3.8304, -1.5042, -1.5042, -1.5038, -1.4948, -1.4948, -1.494}, {-1.016e-05, -2.111e-05, -0.00025285, -1.22e-06, -6.0075e-05, 0.00033931, 0.019218, 0.019239, 0.019492, 0.0073307, 0.0073908, 0.0070515, 0.0022484, 0.0011989, 0.0034936, 0.0022506, 0.0011843, 0.0033592, 1.3646, 1.3646, 1.3639, 1.361, 1.361, 1.3604, 0.0078274, -0.035481, -0.78256, 0.017797, -0.092144, -0.055747, 0.012946, 0.012933, 0.01335, 0.0026108, 0.002689, 0.0025462, -0.66966, 1.2792, 5.19, -0.69263, 0.29731, 2.8357, -1.4984, -1.4984, -1.4983, -1.5033, -1.5033, -1.5034}, {3.8e-08, 1.667e-05, 3.2735e-05, 8.09e-07, -1.6406e-05, 4.788e-05, 0.0068609, 0.0068442, 0.0068115, -0.031289, -0.031273, -0.031321, 0.0011667, 0.00076141, 0.0021472, 0.0011414, 0.0005807, 0.0011662, 1.2467, 1.2467, 1.2465, 1.2464, 1.2464, 1.2463, 0.0093491, 1.2205, 0.58657, 0.0074676, -0.56883, 0.90156, -0.00061244, -0.00062967, -0.00084765, -0.0037684, -0.0037281, -0.0038386, -0.72361, 20.038, 13.253, -0.70122, 5.0471, 11.298, -1.4998, -1.4998, -1.4998, -1.4996, -1.4996, -1.4997}, {-1.174e-05, -4.8024e-05, -7.8634e-05, 1.3969e-05, -8.845e-06, 6.0451e-05, -0.12523, -0.12518, -0.1251, -0.143, -0.143, -0.14306, 0.0022248, 0.001298, 0.0045374, 0.0022643, 0.0013038, 0.0041643, 1.3659, 1.3658, 1.3653, 1.372, 1.372, 1.3709, 0.023725, -0.19213, -0.45708, -0.0082041, -0.053811, -0.40943, 0.0086068, 0.0086993, 0.008698, -0.029679, -0.02968, -0.029982, -0.68309, 1.8638, 4.9611, -0.72805, 5.4443, 4.6645, -1.5048, -1.5049, -1.505, -1.4993, -1.4993, -1.4994}, {-1.242e-06, -2.6236e-05, -0.00045046, -7.365e-06, 1.9435e-05, 5.3773e-05, 0.022949, 0.022976, 0.023426, 0.020536, 0.020517, 0.020463, 0.0023944, 0.0013725, 0.0061816, 0.002343, 0.0012571, 0.0019811, 1.5156, 1.5155, 1.5146, 1.5149, 1.5149, 1.5146, 0.017687, -0.10931, -0.19915, 0.0079538, 0.16368, 0.27939, -0.004861, -0.0048455, -0.0058044, 0.014816, 0.01477, 0.014653, -0.67348, 2.3322, 6.5687, -0.70241, 1.336, 2.3958, -1.5035, -1.5035, -1.5031, -1.4916, -1.4916, -1.4915}, {7.223e-06, 2.4741e-05, 2.476e-06, 2.415e-06, -7.081e-06, -0.00027436, 0.021638, 0.021613, 0.021611, -0.036291, -0.036284, -0.036009, 0.0022045, 0.0012214, 0.0022145, 0.0022042, 0.001164, 0.003203, 1.2969, 1.2968, 1.2964, 1.3023, 1.3022, 1.3014, -0.025053, -0.0936, 0.1572, -0.01521, -0.01393, -0.33631, 0.00015445, 0.00011952, 0.0001963, 0.0029271, 0.002958, 0.0032311, -0.70968, 1.0684, 2.9143, -0.67002, -0.17455, 3.3995, -1.508, -1.508, -1.508, -1.4972, -1.4973, -1.4975}, {-2.981e-06, 2.875e-06, 4.6328e-05, 2.051e-06, 3.51e-05, 0.00033505, 0.0092745, 0.0092716, 0.0092253, 0.013425, 0.013389, 0.013054, 0.0021816, 0.0011609, 0.0033926, 0.0021607, 0.0011374, 0.0033218, 1.2262, 1.2262, 1.2257, 1.2312, 1.2312, 1.2304, -0.012384, 0.17069, 0.49801, 0.0024611, 0.43117, 0.38635, 0.0033262, 0.0033131, 0.0030381, -0.011971, -0.011979, -0.012511, -0.71314, 1.579, 7.4883, -0.73801, 2.8842, 3.2934, -1.5012, -1.5012, -1.5011, -1.4953, -1.4952, -1.4956}, {7.92e-07, -4.8134e-05, 0.00012994, -1.6927e-05, -7.6621e-05, 0.00012514, 0.034483, 0.034531, 0.034401, 0.029755, 0.029831, 0.029706, 0.0025901, 0.0015189, 0.0048561, 0.0026493, 0.0018632, 0.0073067, 1.874, 1.8738, 1.8734, 1.8674, 1.8673, 1.8663, -0.002781, -0.35246, -0.26778, 0.022817, -0.45689, -0.13262, 0.0096818, 0.0097499, 0.0094951, 0.0032747, 0.00334, 0.0030922, -0.64575, 1.4425, 6.7118, -0.63867, 13.305, 7.146, -1.4952, -1.4953, -1.4955, -1.5048, -1.5048, -1.5041}, {5.837e-06, -5.4562e-05, -0.00043925, -1.7875e-05, -5.0728e-05, -0.00024284, 0.022717, 0.022772, 0.023211, 0.058415, 0.058466, 0.058709, 0.0022679, 0.0011883, 0.0045759, 0.0022304, 0.0012509, 0.0044592, 1.3719, 1.3719, 1.3708, 1.3705, 1.3705, 1.3699, 0.013139, -0.16093, -0.61422, 0.033532, -0.5262, -0.72759, 0.0037385, 0.0037778, 0.0039576, 0.00077098, 0.00085839, 0.00028634, -0.70065, 0.15836, 4.1529, -0.71131, 4.0696, 6.8396, -1.5001, -1.5002, -1.5, -1.4967, -1.4967, -1.4959}, {1.9265e-05, 7.2395e-05, -0.00012198, 7.162e-06, -6.5e-07, 0.00030249, -0.025121, -0.025194, -0.025072, -0.01279, -0.012789, -0.013092, 0.0029103, 0.0017004, 0.0050279, 0.0029061, 0.0019922, 0.0080433, 2.2769, 2.2768, 2.2762, 2.2603, 2.2603, 2.2598, -0.033065, 0.11321, -1.1176, -0.0065798, 0.31803, -0.1168, 0.016481, 0.016428, 0.016741, 0.0065923, 0.0066368, 0.0064149, -0.55005, 1.1291, 7.5763, -0.55698, 6.9157, 9.0419, -1.4965, -1.4965, -1.4963, -1.5023, -1.5023, -1.5019}, {2.087e-06, 2.3685e-05, -0.00070368, 2.56e-06, -4.5349e-05, -5.5672e-05, 0.031726, 0.031702, 0.032406, -0.034063, -0.034017, -0.033962, 0.0022495, 0.0015381, 0.0075159, 0.0021784, 0.0013496, 0.0039137, 1.3252, 1.325, 1.3233, 1.3293, 1.3291, 1.3284, -0.02242, 0.0052898, -2.2165, 0.0034826, -0.43035, 0.079207, 0.010112, 0.010066, 0.010235, -0.01693, -0.01676, -0.016613, -0.69145, 4.7078, 13.768, -0.70269, 1.3458, 8.4107, -1.5041, -1.5043, -1.5039, -1.4929, -1.4931, -1.4929}, {-6.746e-06, -1.5689e-05, 2.2873e-05, -3.444e-06, -7.386e-06, 5.9844e-05, -0.021538, -0.021522, -0.021545, -0.028837, -0.028829, -0.028889, 0.001098, 0.00051224, 0.00071526, 0.0011464, 0.00046926, 0.00088996, 1.1939, 1.1939, 1.1938, 1.1962, 1.1962, 1.1961, 0.0061329, -0.042562, 0.2477, -0.004026, -0.016191, 0.29992, -0.0020417, -0.0020488, -0.0020732, -0.0015082, -0.0014872, -0.0013791, -0.62588, 1.0708, 4.0498, -0.73182, 0.38694, 5.9457, -1.4993, -1.4993, -1.4992, -1.4964, -1.4964, -1.4963}, {-2.7852e-05, -1.4749e-05, -0.00024481, 1.4244e-05, 1.5072e-05, -0.00031768, -0.064077, -0.064062, -0.063817, -0.18257, -0.18259, -0.18227, 0.0026666, 0.0016019, 0.0061949, 0.0026829, 0.0017003, 0.0071996, 1.9412, 1.9411, 1.9401, 1.9315, 1.9313, 1.93, 0.026059, -0.17406, -0.76184, -0.01614, 0.81044, -0.86203, -0.0072306, -0.007232, -0.0072058, -0.0044009, -0.0044602, -0.0043894, -0.51682, 1.6688, 11.578, -0.59909, 5.0978, 8.2249, -1.4995, -1.4995, -1.4993, -1.4957, -1.4957, -1.4953}, {-1.3276e-05, 4.0788e-05, -3.51e-07, -9.063e-06, -1.4394e-05, 5.997e-06, -0.02914, -0.02918, -0.02918, -0.041522, -0.041508, -0.041514, 0.0014387, 0.0011147, 0.0024359, 0.0014736, 0.00089943, 0.0019296, 2.1287, 2.1287, 2.1286, 2.1252, 2.1251, 2.125, 0.0032398, 1.7377, -2.3103, -0.021074, -0.51522, 0.46199, -0.0023905, -0.0024272, -0.0024113, -0.0010975, -0.0010942, -0.001126, -0.8193, 25.343, 28.053, -0.77544, 12.806, 11.946, -1.4993, -1.4992, -1.4992, -1.4985, -1.4985, -1.4985}};
int y[50] = {2.0, 10.0, 9.0, 9.0, 5.0, 3.0, 2.0, 11.0, 9.0, 7.0, 7.0, 3.0, 5.0, 1.0, 11.0, 6.0, 4.0, 2.0, 6.0, 10.0, 10.0, 3.0, 5.0, 7.0, 2.0, 4.0, 5.0, 5.0, 3.0, 11.0, 6.0, 4.0, 10.0, 4.0, 7.0, 7.0, 3.0, 5.0, 9.0, 11.0, 8.0, 1.0, 3.0, 8.0, 4.0, 10.0, 1.0, 2.0, 11.0, 2.0};