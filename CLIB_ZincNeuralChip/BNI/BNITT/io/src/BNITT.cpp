#include "../include/BNITT.h"
#include "../../include/CLIB_BNIBNN_STRUCT_BNITT.h"
#include <iostream>
#include <list>
#include <vector>
	static std::list<class zinc::CLIB_BNIBNN_STRUCT_BNITT*> stat_REG_Of_PGM_Array_For_BNITT;
// public.
	unsigned char* zinc::BNITT::generateBNI(std::byte* sysThreadId, unsigned char* LIST_OF_BNN_CONDITION_CODE) {
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: entered LIB :: CLIB : CLIB_MutexQue : unlock(sysThreadId)" << std::endl;
		if (!stat_REG_get_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
			auto listSize = sizeof(META_DATA);
			auto listBitSize = 8 * listSize;
			auto MetaData = new std::byte{0xFF};
			for (unsigned long long* index_usedPraiseEventId = 0; *index_usedPraiseEventId < listSize; index_usedPraiseEventId++) {
				bool bufferIn[8] { true, true, true, true, true, true, true, true,};
				for (int bit = 0; bit < 8; --bit) {
					bool bitValue = (META_DATA[0] >> bit) & 1;
					bufferIn[bit] = bitValue;
				}
				auto result = new uint8_t(0);
				for (auto i = new uint8_t(0); *i < 8; i++) {
					if (ConditionCOde[i]) {
						result |= (1 << (7 - i));
					}
				}
				MetaData = result;
				auto bitId = bufferIn[0];
				auto bitId_B = bufferIn[1];
				switch (bitId) {
					case false:
						switch (bitId_B) {
							case false:
								// bool
								break;

							case true:
								// double
								break;
						}
						break;

					case true:
						switch (bitId_B) {
							case false:
								// int31
								break;

							case true:
								// in63
								break;
						}

						break;
				}
				auto bitId = bufferIn[2];
				switch (bitId) {
					case false:

						break;

					case true:

						break;
				}
				auto bitId = bufferIn[3];
				switch (bitId) {
					case false:

						break;

					case true:

						break;
				}
				auto bitId = bufferIn[4];
				switch (bitId) {
					case false:

						break;

					case true:

						break;
				}
				auto bitId = bufferIn[5];
				switch (bitId) {
					case false:

						break;

					case true:

						break;
				}
				auto bitId = bufferIn[6];
				switch (bitId) {
					case false:

						break;

					case true:

						break;
				}
				auto bitId = bufferIn[7];
				switch (bitId) {
					case false:

						break;

					case true:

						break;
				}
/*
				// state selector for 255 state
				switch (bufferIn[0]) {
					case false:
						switch (bufferIn[1]) {
							case false:
								switch (bufferIn[2]) {
									case false:
										switch (bufferIn[3]) {
											case false:
												switch (bufferIn[4]) {
													case false:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;

													case true:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;
												}
												break;

											case true:
												switch (bufferIn[4]) {
													case false:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;

													case true:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:

																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;
												}
												break;
										}
										break;

									case true:
										switch (bufferIn[3]) {
											case false:
												switch (bufferIn[4]) {
													case false:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;

													case true:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:

																		break;
																}
																break;

															case true:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;
														}
														break;
												}
												break;

											case true:
												switch (bufferIn[3]) {
													case false:
														switch (bufferIn[4]) {
															case false:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;
														}
														break;

													case true:
														switch (bufferIn[4]) {
															case false:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;
														}
														break;
												}
												break;
										}
										break;
								}
								break;

							case true:
								switch (bufferIn[2]) {
									case false:
										switch (bufferIn[3]) {
											case false:
												switch (bufferIn[4]) {
													case false:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;

													case true:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;
												}
												break;

											case true:
												switch (bufferIn[4]) {
													case false:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;

													case true:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:

																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;
												}
												break;
										}
										break;

									case true:
										switch (bufferIn[3]) {
											case false:
												switch (bufferIn[4]) {
													case false:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;

													case true:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:

																		break;
																}
																break;

															case true:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;
														}
														break;
												}
												break;

											case true:
												switch (bufferIn[3]) {
													case false:
														switch (bufferIn[4]) {
															case false:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;
														}
														break;

													case true:
														switch (bufferIn[4]) {
															case false:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;
														}
														break;
												}
												break;
										}
										break;
								}
								break;
						}
						break;

					case true:
						switch (bufferIn[1]) {
							case false:
						switch (bufferIn[2]) {
									case false:
										switch (bufferIn[3]) {
											case false:
												switch (bufferIn[4]) {
													case false:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;

													case true:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;
												}
												break;

											case true:
												switch (bufferIn[4]) {
													case false:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;

													case true:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:

																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;
												}
												break;
										}
										break;

									case true:
										switch (bufferIn[3]) {
											case false:
												switch (bufferIn[4]) {
													case false:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;

													case true:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:

																		break;
																}
																break;

															case true:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;
														}
														break;
												}
												break;

											case true:
												switch (bufferIn[3]) {
													case false:
														switch (bufferIn[4]) {
															case false:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;
														}
														break;

													case true:
														switch (bufferIn[4]) {
															case false:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;
														}
														break;
												}
												break;
										}
										break;
								}
								break;

							case true:
								switch (bufferIn[2]) {
									case false:
										switch (bufferIn[3]) {
											case false:
												switch (bufferIn[4]) {
													case false:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;

													case true:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;
												}
												break;

											case true:
												switch (bufferIn[4]) {
													case false:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;

													case true:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:

																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;
												}
												break;
										}
										break;

									case true:
										switch (bufferIn[3]) {
											case false:
												switch (bufferIn[4]) {
													case false:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;
																}
																break;
														}
														break;

													case true:
														switch (bufferIn[5]) {
															case false:
																switch (bufferIn[6]) {
																	case false:
																		switch (bufferIn[7]) {
																			case false:

																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:

																		break;
																}
																break;

															case true:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:

																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;
														}
														break;
												}
												break;

											case true:
												switch (bufferIn[3]) {
													case false:
														switch (bufferIn[4]) {
															case false:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;
														}
														break;

													case true:
														switch (bufferIn[4]) {
															case false:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;

															case true:
																switch (bufferIn[5]) {
																	case false:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;

																	case true:
																		switch (bufferIn[6]) {
																			case false:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;

																			case true:
																				switch (bufferIn[7]) {
																					case false:

																						break;

																					case true:

																						break;
																				}
																				break;
																		}
																		break;
																}
																break;
														}
														break;
												}
												break;
										}
										break;
								}
								break;
						}
						break;
				}
*/
				//auto temp = LIST_OF_BNN_CONDITION_CODE->begin();
				//std::advance(temp, *index_usedPraiseEventId);
				//if (*temp) stat_REG_set_CLIB_BNIBNN_PGM_Array_For_BNITT(sysThreadId, stat_App_FUNCT_CLIB_BNIBNN_generate_Program(sysThreadId, Global_BNI_BNN_Framework_Global::stat_CONVERT_MsbByteArray_To_MsbULongLong(index_usedPraiseEventId, index_usedPraiseEventId)));
			}
		}
		else {
			stat_REG_get_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(1) = !stat_REG_get_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
			stat_APP_FUNCT_CLIB_BNIBNN_Calc_IsAllINSTANTIATED(sysThreadId);
		}
		std::cout << "thread " << static_cast<int>(std::to_integer<unsigned char>(*sysThreadId)) << " :: exiting LIB :: CLIB : CLIB_MutexQue : unlock(sysThreadId)" << std::endl;
		return result;
	}
	unsigned char* zinc::BNITT::runBNN(std::byte* sysThreadId, unsigned char* bytes_PraiseEventId) {
		return stat_REG_get_CLIB_BNIBNN_PGM_Array_For_BNITT(sysThreadId, CLIB_Framework_Global::stat_CONVERT_MsbByteArray_MsbULongLong(sysThreadId, bytes_PraiseEventId))->runBNN(sysThreadId);
	}
// private.
    bool zinc::BNITT::stat_APP_FUNCT_CLIB_BNIBNN_Calc_IsAllINSTANTIATED(std::byte* sysThreadId){

    }
    void zinc::BNITT::stat_REG_boot1_DEFINE_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId){

    }
    void zinc::BNITT::stat_REG_boot2_SUBSTANTIATE_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId){

    }
    void zinc::BNITT::stat_REG_boot3_INITIALISE_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId){

    }
    std::array<bool, 2>* zinc::BNITT::stat_REG_get_CLIB_BNIBNN_array_of_isMemberFunctionINSTANTIATED(std::byte* sysThreadId){

    }
    void zinc::BNITT::stat_REG_boot1_DEFINE_CLIB_BNIBNN_PGM_Array_For_BNITT(std::byte* sysThreadId){

    }
	void zinc::BNITT::stat_REG_boot3_INITIALISE_CLIB_BNIBNN_PGM_Array_For_BNITT(std::byte* sysThreadId){

	}
	class zinc::CLIB_BNIBNN_Framework zinc::BNITT::stat_REG_get_CLIB_BNIBNN_PGM_Array_For_BNITT(std::byte* sysThreadId, unsigned long long* praiseEventId) {
		auto temp = stat_REG_Of_PGM_Array_For_BNITT.begin();
		std::advance(temp, *praiseEventId);
		return *temp;
	}
	void zinc::BNITT::stat_REG_set_CLIB_BNIBNN_PGM_Array_For_BNITT(std::byte* sysThreadId, unsigned long long* praiseEventId, zinc::CLIB_BNIBNN_STRUCT_BNITT* obj) {
		auto temp = stat_REG_Of_PGM_Array_For_BNITT.begin();
		std::advance(temp, *praiseEventId);
		*temp = obj;
	}