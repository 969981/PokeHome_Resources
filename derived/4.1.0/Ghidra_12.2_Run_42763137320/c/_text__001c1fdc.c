/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c1fdc; name: FUN_.text__001c1fdc
 */


undefined8
FUN__text__001c1fdc(long param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint3 uStack_54;
  
  *param_2 = 0;
  *(undefined1 *)param_3 = 0;
  *(ulong *)((long)param_3 + 1) = (ulong)uStack_54;
  *(undefined8 *)((long)param_3 + 9) = 0;
  *(undefined4 *)(param_3 + 2) = 0;
  *param_4 = 0;
  iVar1 = FUN__text__001c1e90(param_1,0);
  iVar2 = FUN__text__001c1e90(param_1,1);
  if (iVar2 + iVar1 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    if (*(char *)(param_1 + 0x38) != '\0') {
      uVar6 = 0;
      lVar3 = 0;
      uVar4 = 0;
      uVar5 = 0;
      goto LAB__text__001c2420;
    }
    if (*(char *)(param_1 + 0x3d) != '\0') {
      uVar6 = 0;
      lVar3 = 0;
      uVar4 = 0;
      uVar5 = 1;
      goto LAB__text__001c2420;
    }
    if (*(char *)(param_1 + 0x42) != '\0') {
      uVar6 = 0;
      lVar3 = 0;
      uVar4 = 0;
      uVar5 = 2;
      goto LAB__text__001c2420;
    }
    if (*(char *)(param_1 + 0x47) != '\0') {
      uVar6 = 0;
      lVar3 = 0;
      uVar4 = 0;
      uVar5 = 3;
      goto LAB__text__001c2420;
    }
    if (*(char *)(param_1 + 0x4c) != '\0') {
      uVar6 = 0;
      lVar3 = 0;
      uVar4 = 0;
      uVar5 = 4;
      goto LAB__text__001c2420;
    }
    if (*(char *)(param_1 + 0x51) != '\0') {
      uVar6 = 0;
      lVar3 = 0;
      uVar4 = 0;
      uVar5 = 5;
      goto LAB__text__001c2420;
    }
    if (*(char *)(param_1 + 0x39) != '\0') {
      uVar6 = 0;
      lVar3 = 0;
      uVar5 = 0;
      uVar4 = 1;
      goto LAB__text__001c2420;
    }
    if (*(char *)(param_1 + 0x3e) == '\0') {
      if (*(char *)(param_1 + 0x43) != '\0') {
        uVar6 = 0;
        lVar3 = 0;
        uVar5 = 2;
        uVar4 = 1;
        goto LAB__text__001c2420;
      }
      if (*(char *)(param_1 + 0x48) != '\0') {
        uVar6 = 0;
        lVar3 = 0;
        uVar5 = 3;
        uVar4 = 1;
        goto LAB__text__001c2420;
      }
      if (*(char *)(param_1 + 0x4d) != '\0') {
        uVar6 = 0;
        lVar3 = 0;
        uVar5 = 4;
        uVar4 = 1;
        goto LAB__text__001c2420;
      }
      if (*(char *)(param_1 + 0x52) != '\0') {
        uVar6 = 0;
        lVar3 = 0;
        uVar5 = 5;
        uVar4 = 1;
        goto LAB__text__001c2420;
      }
      if (*(char *)(param_1 + 0x3a) != '\0') {
        uVar6 = 0;
        lVar3 = 0;
        uVar5 = 0;
        uVar4 = 2;
        goto LAB__text__001c2420;
      }
      if (*(char *)(param_1 + 0x3f) != '\0') {
        uVar6 = 0;
        lVar3 = 0;
        uVar5 = 1;
        uVar4 = 2;
        goto LAB__text__001c2420;
      }
      if (*(char *)(param_1 + 0x44) != '\0') {
        uVar6 = 0;
        lVar3 = 0;
        uVar4 = 2;
        uVar5 = 2;
        goto LAB__text__001c2420;
      }
      if (*(char *)(param_1 + 0x49) != '\0') {
        uVar6 = 0;
        lVar3 = 0;
        uVar5 = 3;
        uVar4 = 2;
        goto LAB__text__001c2420;
      }
      if (*(char *)(param_1 + 0x4e) != '\0') {
        uVar6 = 0;
        lVar3 = 0;
        uVar5 = 4;
        uVar4 = 2;
        goto LAB__text__001c2420;
      }
      if (*(char *)(param_1 + 0x53) != '\0') {
        uVar6 = 0;
        lVar3 = 0;
        uVar5 = 5;
        uVar4 = 2;
        goto LAB__text__001c2420;
      }
      if (*(char *)(param_1 + 0x3b) != '\0') {
        uVar6 = 0;
        lVar3 = 0;
        uVar5 = 0;
        uVar4 = 3;
        goto LAB__text__001c2420;
      }
      if (*(char *)(param_1 + 0x40) != '\0') {
        uVar6 = 0;
        lVar3 = 0;
        uVar5 = 1;
        uVar4 = 3;
        goto LAB__text__001c2420;
      }
      if (*(char *)(param_1 + 0x45) != '\0') {
        uVar6 = 0;
        lVar3 = 0;
        uVar5 = 2;
        uVar4 = 3;
        goto LAB__text__001c2420;
      }
      if (*(char *)(param_1 + 0x4a) != '\0') {
        uVar6 = 0;
        lVar3 = 0;
        uVar4 = 3;
        uVar5 = 3;
        goto LAB__text__001c2420;
      }
      if (*(char *)(param_1 + 0x4f) != '\0') {
        uVar6 = 0;
        lVar3 = 0;
        uVar5 = 4;
        uVar4 = 3;
        goto LAB__text__001c2420;
      }
      if (*(char *)(param_1 + 0x54) != '\0') {
        uVar6 = 0;
        lVar3 = 0;
        uVar5 = 5;
        uVar4 = 3;
        goto LAB__text__001c2420;
      }
      if (*(char *)(param_1 + 0x3c) == '\0') {
        if (*(char *)(param_1 + 0x41) == '\0') {
          if (*(char *)(param_1 + 0x46) == '\0') {
            if (*(char *)(param_1 + 0x4b) == '\0') {
              if (*(char *)(param_1 + 0x50) != '\0') {
                uVar6 = 0;
                lVar3 = 0;
                uVar4 = 4;
                uVar5 = 4;
                goto LAB__text__001c2420;
              }
              if (*(char *)(param_1 + 0x55) == '\0') goto LAB__text__001c2390;
              uVar5 = 5;
            }
            else {
              uVar5 = 3;
            }
          }
          else {
            uVar5 = 2;
          }
        }
        else {
          uVar5 = 1;
        }
      }
      else {
        uVar5 = 0;
      }
      uVar6 = 0;
      lVar3 = 0;
      uVar4 = 4;
      goto LAB__text__001c2420;
    }
    uVar6 = 0;
    lVar3 = 0;
LAB__text__001c2488:
    uVar4 = 1;
    uVar5 = 1;
    goto LAB__text__001c2420;
  }
LAB__text__001c2390:
  if (*(char *)(param_1 + 0x58) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x70) != '\0') {
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 1;
    lVar3 = 1;
    goto LAB__text__001c2420;
  }
  if (*(char *)(param_1 + 0x75) != '\0') {
    uVar4 = 0;
    goto LAB__text__001c23c0;
  }
  if (*(char *)(param_1 + 0x7a) == '\0') {
    if (*(char *)(param_1 + 0x7f) == '\0') {
      if (*(char *)(param_1 + 0x84) == '\0') {
        if (*(char *)(param_1 + 0x89) == '\0') {
          if (*(char *)(param_1 + 0x71) == '\0') {
            if (*(char *)(param_1 + 0x76) != '\0') {
              lVar3 = 1;
              uVar6 = 1;
              goto LAB__text__001c2488;
            }
            if (*(char *)(param_1 + 0x7b) == '\0') {
              if (*(char *)(param_1 + 0x80) == '\0') {
                if (*(char *)(param_1 + 0x85) == '\0') {
                  if (*(char *)(param_1 + 0x8a) == '\0') {
                    if (*(char *)(param_1 + 0x72) == '\0') {
                      if (*(char *)(param_1 + 0x77) == '\0') {
                        if (*(char *)(param_1 + 0x7c) == '\0') {
                          if (*(char *)(param_1 + 0x81) == '\0') {
                            if (*(char *)(param_1 + 0x86) == '\0') {
                              if (*(char *)(param_1 + 0x8b) == '\0') {
                                if (*(char *)(param_1 + 0x73) == '\0') {
                                  if (*(char *)(param_1 + 0x78) != '\0') {
                                    uVar4 = 3;
                                    goto LAB__text__001c23c0;
                                  }
                                  if (*(char *)(param_1 + 0x7d) == '\0') {
                                    if (*(char *)(param_1 + 0x82) == '\0') {
                                      if (*(char *)(param_1 + 0x87) == '\0') {
                                        if (*(char *)(param_1 + 0x8c) == '\0') {
                                          if (*(char *)(param_1 + 0x74) == '\0') {
                                            if (*(char *)(param_1 + 0x79) != '\0') {
                                              uVar4 = 4;
                                              goto LAB__text__001c23c0;
                                            }
                                            if (*(char *)(param_1 + 0x7e) == '\0') {
                                              if (*(char *)(param_1 + 0x83) == '\0') {
                                                if (*(char *)(param_1 + 0x88) == '\0') {
                                                  if (*(char *)(param_1 + 0x8d) == '\0') {
                                                    return 0;
                                                  }
                                                  uVar5 = 5;
                                                  uVar4 = 4;
                                                }
                                                else {
                                                  uVar4 = 4;
                                                  uVar5 = 4;
                                                }
                                              }
                                              else {
                                                uVar5 = 3;
                                                uVar4 = 4;
                                              }
                                            }
                                            else {
                                              uVar5 = 2;
                                              uVar4 = 4;
                                            }
                                          }
                                          else {
                                            uVar5 = 0;
                                            uVar4 = 4;
                                          }
                                        }
                                        else {
                                          uVar5 = 5;
                                          uVar4 = 3;
                                        }
                                      }
                                      else {
                                        uVar5 = 4;
                                        uVar4 = 3;
                                      }
                                    }
                                    else {
                                      uVar4 = 3;
                                      uVar5 = 3;
                                    }
                                  }
                                  else {
                                    uVar5 = 2;
                                    uVar4 = 3;
                                  }
                                }
                                else {
                                  uVar5 = 0;
                                  uVar4 = 3;
                                }
                                goto LAB__text__001c241c;
                              }
                              uVar5 = 5;
                            }
                            else {
                              uVar5 = 4;
                            }
                          }
                          else {
                            uVar5 = 3;
                          }
                          goto LAB__text__001c24e0;
                        }
                        uVar4 = 2;
                        uVar5 = 2;
                      }
                      else {
                        uVar4 = 2;
LAB__text__001c23c0:
                        uVar5 = 1;
                      }
                    }
                    else {
                      uVar5 = 0;
LAB__text__001c24e0:
                      uVar4 = 2;
                    }
                    goto LAB__text__001c241c;
                  }
                  uVar5 = 5;
                }
                else {
                  uVar5 = 4;
                }
              }
              else {
                uVar5 = 3;
              }
            }
            else {
              uVar5 = 2;
            }
          }
          else {
            uVar5 = 0;
          }
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
          uVar5 = 5;
        }
      }
      else {
        uVar4 = 0;
        uVar5 = 4;
      }
    }
    else {
      uVar4 = 0;
      uVar5 = 3;
    }
  }
  else {
    uVar4 = 0;
    uVar5 = 2;
  }
LAB__text__001c241c:
  lVar3 = 1;
  uVar6 = 1;
LAB__text__001c2420:
  *param_2 = uVar6;
  param_1 = param_1 + lVar3 * 0x38;
  uVar7 = *(undefined8 *)(param_1 + 0x24);
  uVar8 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_1 + 0x34);
  *param_3 = uVar7;
  param_3[1] = uVar8;
  *(undefined4 *)param_4 = uVar5;
  *(undefined4 *)((long)param_4 + 4) = uVar4;
  return 1;
}


