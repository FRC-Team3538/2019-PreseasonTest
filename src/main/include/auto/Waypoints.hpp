#pragma once

class Waypoints{
public:
  int kMotionProfileSz = 291;

	double kMotionProfile[291][3] = { { 0.0, 0.0, 10.0 }, { 0.000093756730112, 1.125080761344, 10.0 }, { 0.000421905285504,
			2.81270190336, 10.0 }, { 0.001078202396288, 5.062863426048, 10.0 }, { 0.002156404792576, 7.875565329408, 10.0 }, {
			0.00375026920448, 11.25080761344, 10.0 }, { 0.005953552362112, 15.188590278144, 10.0 }, { 0.008860010995584,
			19.68891332352, 10.0 }, { 0.012563401835008, 24.751776749568, 10.0 },
			{ 0.017157481610496, 30.377180556288, 10.0 }, { 0.02273600705216, 36.56512474368, 10.0 }, { 0.029345856525056,
					42.753068931072, 10.0 }, { 0.036987030029184, 48.941013118464, 10.0 }, { 0.045659527564544,
					55.128957305856, 10.0 }, { 0.055363349131136, 61.316901493248, 10.0 }, { 0.06609849472896,
					67.50484568064, 10.0 }, { 0.077864964358016, 73.692789868032, 10.0 }, { 0.090662758018304,
					79.880734055424, 10.0 }, { 0.104491875709824, 86.068678242816, 10.0 }, { 0.119352317432576,
					92.2566224302081, 10.0 }, { 0.13524408318656, 98.4445666176001, 10.0 }, { 0.152167172971776,
					104.632510804992, 10.0 }, { 0.170121586788224, 110.820454992384, 10.0 }, { 0.189107324635904,
					117.008399179776, 10.0 }, { 0.209124386514816, 123.196343367168, 10.0 }, { 0.23017277242496,
					129.38428755456, 10.0 }, { 0.252252482366336, 135.572231741952, 10.0 }, { 0.275363516338944,
					141.760175929344, 10.0 }, { 0.299505874342784, 147.948120116736, 10.0 }, { 0.324679556377856,
					154.136064304128, 10.0 }, { 0.35088456244416, 160.32400849152, 10.0 }, { 0.378120892541696,
					166.511952678912, 10.0 }, { 0.406388546670464, 172.699896866304, 10.0 }, { 0.435687524830464,
					178.887841053696, 10.0 }, { 0.466017827021696, 185.075785241088, 10.0 }, { 0.49737945324416,
					191.26372942848, 10.0 }, { 0.529772403497856, 197.451673615872, 10.0 }, { 0.563196677782784,
					203.639617803264, 10.0 }, { 0.597652276098944, 209.827561990656, 10.0 }, { 0.633139198446336,
					216.015506178048, 10.0 }, { 0.66965744482496, 222.20345036544, 10.0 }, { 0.707207015234817,
					228.391394552832, 10.0 }, { 0.745787909675905, 234.579338740224, 10.0 }, { 0.785400128148225,
					240.767282927616, 10.0 }, { 0.826043670651777, 246.955227115008, 10.0 }, { 0.867718537186561,
					253.1431713024, 10.0 }, { 0.910424727752577, 259.331115489792, 10.0 }, { 0.954162242349825,
					265.519059677184, 10.0 }, { 0.998931080978305, 271.707003864576, 10.0 }, { 1.04473124363802,
					277.894948051968, 10.0 }, { 1.09156273032896, 284.08289223936, 10.0 }, { 1.13942554105114,
					290.270836426752, 10.0 }, { 1.18831967580455, 296.458780614144, 10.0 }, { 1.23824513458919,
					302.646724801536, 10.0 }, { 1.28920191740506, 308.834668988928, 10.0 }, { 1.34119002425216,
					315.02261317632, 10.0 }, { 1.3942094551305, 321.210557363712, 10.0 }, { 1.44826021004007,
					327.398501551104, 10.0 }, { 1.50334228898087, 333.586445738496, 10.0 }, { 1.5594556919529,
					339.774389925888, 10.0 }, { 1.61660041895616, 345.96233411328, 10.0 }, { 1.67477646999066,
					352.150278300672, 10.0 }, { 1.73398384505639, 358.338222488064, 10.0 }, { 1.79422254415335,
					364.526166675456, 10.0 }, { 1.85549256728154, 370.714110862848, 10.0 }, { 1.91779391444096,
					376.90205505024, 10.0 }, { 1.98112658563162, 383.089999237632, 10.0 }, { 2.04549058085351,
					389.277943425024, 10.0 }, { 2.11088590010663, 395.465887612416, 10.0 }, { 2.17731254339098,
					401.653831799808, 10.0 }, { 2.24477051070656, 407.8417759872, 10.0 }, { 2.31325980205338,
					414.029720174592, 10.0 }, { 2.38278041743143, 420.217664361984, 10.0 }, { 2.45333235684071,
					426.405608549376, 10.0 }, { 2.52491562028122, 432.593552736768, 10.0 }, { 2.59753020775296,
					438.78149692416, 10.0 }, { 2.67117611925594, 444.969441111552, 10.0 }, { 2.74585335479015,
					451.157385298944, 10.0 }, { 2.82156191435559, 457.345329486336, 10.0 }, { 2.89830179795226,
					463.533273673728, 10.0 }, { 2.97607300558016, 469.72121786112, 10.0 }, { 3.0548755372393,
					475.909162048512, 10.0 }, { 3.13470939292967, 482.097106235904, 10.0 }, { 3.21557457265127,
					488.285050423296, 10.0 }, { 3.2974710764041, 494.472994610688, 10.0 }, { 3.38039890418816,
					500.660938798081, 10.0 }, { 3.46435805600346, 506.848882985472, 10.0 }, { 3.54934853184999,
					513.036827172865, 10.0 }, { 3.63537033172775, 519.224771360256, 10.0 }, { 3.72242345563674,
					525.412715547649, 10.0 }, { 3.81050790357696, 531.60065973504, 10.0 }, { 3.89962367554842,
					537.788603922432, 10.0 }, { 3.98977077155111, 543.976548109824, 10.0 }, { 4.08094919158503,
					550.164492297217, 10.0 }, { 4.17315893565018, 556.352436484609, 10.0 }, { 4.26640000374656,
					562.540380672, 10.0 }, { 4.36067239587418, 568.728324859393, 10.0 }, { 4.45597611203303,
					574.916269046785, 10.0 }, { 4.55231115222311, 581.104213234177, 10.0 }, { 4.64967751644442,
					587.292157421568, 10.0 }, { 4.74807520469696, 593.48010160896, 10.0 }, { 4.84750421698074,
					599.668045796352, 10.0 }, { 4.94796455329575, 605.855989983745, 10.0 }, { 5.04945621364199,
					612.043934171136, 10.0 }, { 5.15197919801946, 618.231878358529, 10.0 }, { 5.25553350642816,
					624.41982254592, 10.0 }, { 5.3601191388681, 630.607766733313, 10.0 }, { 5.46573609533927,
					636.795710920704, 10.0 }, { 5.57238437584167, 642.983655108097, 10.0 }, { 5.6800639803753,
					649.171599295488, 10.0 }, { 5.78877490894017, 655.359543482881, 10.0 }, { 5.89851716153626,
					661.547487670273, 10.0 }, { 6.00929073816359, 667.735431857664, 10.0 }, { 6.12109563882215,
					673.923376045056, 10.0 }, { 6.23393186351194, 680.111320232449, 10.0 }, { 6.34779941223297,
					686.299264419841, 10.0 }, { 6.46269828498522, 692.487208607232, 10.0 }, { 6.57862848176871,
					698.675152794625, 10.0 }, { 6.69559000258343, 704.863096982017, 10.0 }, { 6.81358284742938,
					711.051041169409, 10.0 }, { 6.93260701630657, 717.238985356801, 10.0 }, { 7.05266250921498,
					723.426929544193, 10.0 }, { 7.17374932615463, 729.614873731585, 10.0 }, { 7.29586746712551,
					735.802817918977, 10.0 }, { 7.41901693212762, 741.990762106368, 10.0 }, { 7.54319772116097,
					748.178706293761, 10.0 }, { 7.66831607749543, 753.241569719808, 10.0 }, { 7.79423136603585,
					757.741892765184, 10.0 }, { 7.9208498300521, 761.679675429888, 10.0 }, { 8.04807771281409,
					765.05491771392, 10.0 }, { 8.17582125759169, 767.86761961728, 10.0 }, { 8.30398670765479,
					770.117781139968, 10.0 }, { 8.43248030627329, 771.805402281984, 10.0 }, { 8.56120829671706,
					772.930483043328, 10.0 }, { 8.69007692225601, 773.493023424, 10.0 }, { 8.81899242616001, 773.493023424,
					10.0 }, { 8.94790793006401, 773.493023424, 10.0 }, { 9.07682343396801, 773.493023424, 10.0 }, {
					9.20573893787201, 773.493023424, 10.0 }, { 9.33465444177601, 773.493023424, 10.0 }, { 9.46356994568001,
					773.493023424, 10.0 }, { 9.59248544958401, 773.493023424, 10.0 },
			{ 9.72140095348801, 773.493023424, 10.0 }, { 9.85031645739201, 773.493023424, 10.0 }, { 9.97923196129601,
					773.493023424, 10.0 }, { 10.1081474652, 773.493023424, 10.0 }, { 10.237062969104, 773.493023424, 10.0 }, {
					10.365978473008, 773.493023424, 10.0 }, { 10.494893976912, 773.493023424, 10.0 }, { 10.623809480816,
					773.493023424, 10.0 }, { 10.75272498472, 773.493023424, 10.0 }, { 10.881640488624, 773.493023424, 10.0 },
			{ 11.010555992528, 773.493023424, 10.0 }, { 11.139471496432, 773.493023424, 10.0 }, { 11.268387000336,
					773.493023424, 10.0 }, { 11.39730250424, 773.493023424, 10.0 }, { 11.526218008144, 773.493023424, 10.0 },
			{ 11.6550397553179, 772.367942662656, 10.0 }, { 11.7836271106665, 770.68032152064, 10.0 }, { 11.9118863174597,
					768.430159997952, 10.0 }, { 12.0397236189674, 765.617458094592, 10.0 }, { 12.1670452584595,
					762.24221581056, 10.0 }, { 12.2937574792059, 758.304433145856, 10.0 }, { 12.4197665244764,
					753.80411010048, 10.0 }, { 12.544978637541, 748.741246674432, 10.0 }, { 12.6693000616695,
					743.115842867712, 10.0 }, { 12.7926370401319, 736.92789868032, 10.0 }, { 12.914942694563,
					730.739954492928, 10.0 }, { 13.0362170249628, 724.552010305536, 10.0 }, { 13.1564600313315,
					718.364066118144, 10.0 }, { 13.2756717136689, 712.176121930752, 10.0 }, { 13.3938520719751,
					705.98817774336, 10.0 }, { 13.51100110625, 699.800233555968, 10.0 }, { 13.6271188164937,
					693.612289368576, 10.0 }, { 13.7422052027062, 687.424345181184, 10.0 }, { 13.8562602648874,
					681.236400993792, 10.0 }, { 13.9692840030375, 675.0484568064, 10.0 }, { 14.0812764171562,
					668.860512619008, 10.0 }, { 14.1922375072438, 662.672568431616, 10.0 }, { 14.3021672733001,
					656.484624244224, 10.0 }, { 14.4110657153252, 650.296680056832, 10.0 }, { 14.5189328333191,
					644.10873586944, 10.0 }, { 14.6257686272817, 637.920791682048, 10.0 }, { 14.7315730972131,
					631.732847494656, 10.0 }, { 14.8363462431132, 625.544903307264, 10.0 }, { 14.9400880649822,
					619.356959119872, 10.0 }, { 15.0427985628199, 613.16901493248, 10.0 }, { 15.1444777366263,
					606.981070745088, 10.0 }, { 15.2451255864016, 600.793126557696, 10.0 }, { 15.3447421121456,
					594.605182370304, 10.0 }, { 15.4433273138583, 588.417238182912, 10.0 }, { 15.5408811915399,
					582.22929399552, 10.0 }, { 15.6374037451902, 576.041349808128, 10.0 }, { 15.7328949748092,
					569.853405620736, 10.0 }, { 15.8273548803971, 563.665461433344, 10.0 }, { 15.9207834619537,
					557.477517245952, 10.0 }, { 16.0131807194791, 551.28957305856, 10.0 }, { 16.1045466529732,
					545.101628871168, 10.0 }, { 16.1948812624361, 538.913684683776, 10.0 }, { 16.2841845478678,
					532.725740496384, 10.0 }, { 16.3724565092682, 526.537796308992, 10.0 }, { 16.4596971466375,
					520.3498521216, 10.0 }, { 16.5459064599754, 514.161907934208, 10.0 }, { 16.6310844492822,
					507.973963746816, 10.0 }, { 16.7152311145577, 501.786019559424, 10.0 }, { 16.798346455802,
					495.598075372032, 10.0 }, { 16.8804304730151, 489.41013118464, 10.0 }, { 16.9614831661969,
					483.222186997248, 10.0 }, { 17.0415045353475, 477.034242809856, 10.0 }, { 17.1204945804668,
					470.846298622464, 10.0 }, { 17.198453301555, 464.658354435072, 10.0 }, { 17.2753806986119,
					458.47041024768, 10.0 }, { 17.3512767716375, 452.282466060288, 10.0 }, { 17.426141520632,
					446.094521872896, 10.0 }, { 17.4999749455952, 439.906577685504, 10.0 }, { 17.5727770465271,
					433.718633498112, 10.0 }, { 17.6445478234279, 427.53068931072, 10.0 }, { 17.7152872762974,
					421.342745123328, 10.0 }, { 17.7849954051356, 415.154800935936, 10.0 }, { 17.8536722099427,
					408.966856748544, 10.0 }, { 17.9213176907185, 402.778912561152, 10.0 }, { 17.9879318474631,
					396.59096837376, 10.0 }, { 18.0535146801764, 390.403024186368, 10.0 }, { 18.1180661888585,
					384.215079998976, 10.0 }, { 18.1815863735094, 378.027135811584, 10.0 }, { 18.244075234129,
					371.839191624192, 10.0 }, { 18.3055327707175, 365.6512474368, 10.0 }, { 18.3659589832746,
					359.463303249408, 10.0 }, { 18.4253538718006, 353.275359062016, 10.0 }, { 18.4837174362953,
					347.087414874624, 10.0 }, { 18.5410496767588, 340.899470687232, 10.0 }, { 18.5973505931911,
					334.71152649984, 10.0 }, { 18.6526201855921, 328.523582312448, 10.0 }, { 18.7068584539619,
					322.335638125056, 10.0 }, { 18.7600653983004, 316.147693937664, 10.0 }, { 18.8122410186078,
					309.959749750272, 10.0 }, { 18.8633853148839, 303.77180556288, 10.0 }, { 18.9134982871287,
					297.583861375488, 10.0 }, { 18.9625799353424, 291.395917188096, 10.0 }, { 19.0106302595248,
					285.207973000704, 10.0 }, { 19.0576492596759, 279.020028813312, 10.0 }, { 19.1036369357959,
					272.83208462592, 10.0 }, { 19.1485932878846, 266.644140438528, 10.0 }, { 19.192518315942,
					260.456196251136, 10.0 }, { 19.2354120199683, 254.268252063744, 10.0 }, { 19.2772743999633,
					248.080307876352, 10.0 }, { 19.3181054559271, 241.89236368896, 10.0 }, { 19.3579051878596,
					235.704419501568, 10.0 }, { 19.3966735957609, 229.516475314176, 10.0 }, { 19.434410679631,
					223.328531126784, 10.0 }, { 19.4711164394698, 217.140586939392, 10.0 }, { 19.5067908752775,
					210.952642752, 10.0 }, { 19.5414339870538, 204.764698564607, 10.0 }, { 19.575045774799,
					198.576754377216, 10.0 }, { 19.6076262385129, 192.388810189823, 10.0 }, { 19.6391753781956,
					186.200866002431, 10.0 }, { 19.6696931938471, 180.012921815039, 10.0 }, { 19.6991796854673,
					173.824977627647, 10.0 }, { 19.7276348530563, 167.637033440255, 10.0 }, { 19.755058696614,
					161.449089252863, 10.0 }, { 19.7814512161406, 155.261145065471, 10.0 }, { 19.8068124116359,
					149.073200878079, 10.0 }, { 19.8311422830999, 142.885256690687, 10.0 }, { 19.8544408305327,
					136.697312503295, 10.0 }, { 19.8767080539343, 130.509368315903, 10.0 }, { 19.8979439533047,
					124.321424128511, 10.0 }, { 19.9181485286438, 118.133479941119, 10.0 }, { 19.9373217799518,
					111.945535753727, 10.0 }, { 19.9554637072284, 105.757591566335, 10.0 }, { 19.9725743104739,
					99.5696473789434, 10.0 }, { 19.9886535896881, 93.3817031915514, 10.0 }, { 20.003701544871,
					87.1937590041594, 10.0 }, { 20.0177181760228, 81.0058148167674, 10.0 }, { 20.0307034831433,
					74.8178706293754, 10.0 }, { 20.0426574662326, 68.6299264419834, 10.0 }, { 20.0535801252906,
					62.4419822545914, 10.0 }, { 20.0634714603174, 56.2540380671994, 10.0 }, { 20.072331471313,
					50.0660938798074, 10.0 }, { 20.0801601582774, 43.8781496924154, 10.0 }, { 20.0869575212105,
					37.6902055050234, 10.0 }, { 20.0927235601124, 31.5022613176314, 10.0 }, { 20.097458274983,
					25.3143171302395, 10.0 }, { 20.1012554225526, 20.2514537041915, 10.0 }, { 20.1042556379162,
					15.7511306588156, 10.0 }, { 20.1065526778039, 11.8133479941117, 10.0 }, { 20.1082402989459,
					8.43810571007971, 10.0 }, { 20.1094122580723, 5.62540380671977, 10.0 }, { 20.1101623119132,
					3.37524228403182, 10.0 }, { 20.1105842171987, 1.68762114201588, 10.0 }, { 20.1107717306589,
					0.562540380671941, 10.0 }, { 20.110818609024, 0, 10.0 } };  
};