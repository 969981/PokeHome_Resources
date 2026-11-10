/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e4e04; name: FUN_.text__004e4e04
 */


int FUN__text__004e4e04(long param_1)

{
  long lVar1;
  int iVar2;
  undefined4 *in_x4;
  long *in_x5;
  char *pcVar3;
  long lVar4;
  
  pcVar3 = (char *)(param_1 + 8);
  if (*pcVar3 == '\0') {
    lVar4 = 0;
  }
  else {
    pcVar3 = (char *)(param_1 + 9);
    if (*pcVar3 == '\0') {
      lVar4 = 1;
    }
    else {
      pcVar3 = (char *)(param_1 + 10);
      if (*pcVar3 == '\0') {
        lVar4 = 2;
      }
      else {
        pcVar3 = (char *)(param_1 + 0xb);
        if (*pcVar3 == '\0') {
          lVar4 = 3;
        }
        else {
          pcVar3 = (char *)(param_1 + 0xc);
          if (*pcVar3 == '\0') {
            lVar4 = 4;
          }
          else {
            pcVar3 = (char *)(param_1 + 0xd);
            if (*pcVar3 == '\0') {
              lVar4 = 5;
            }
            else {
              pcVar3 = (char *)(param_1 + 0xe);
              if (*pcVar3 == '\0') {
                lVar4 = 6;
              }
              else {
                pcVar3 = (char *)(param_1 + 0xf);
                if (*pcVar3 == '\0') {
                  lVar4 = 7;
                }
                else {
                  pcVar3 = (char *)(param_1 + 0x10);
                  if (*pcVar3 == '\0') {
                    lVar4 = 8;
                  }
                  else {
                    pcVar3 = (char *)(param_1 + 0x11);
                    if (*pcVar3 == '\0') {
                      lVar4 = 9;
                    }
                    else {
                      pcVar3 = (char *)(param_1 + 0x12);
                      if (*pcVar3 == '\0') {
                        lVar4 = 10;
                      }
                      else {
                        pcVar3 = (char *)(param_1 + 0x13);
                        if (*pcVar3 == '\0') {
                          lVar4 = 0xb;
                        }
                        else {
                          pcVar3 = (char *)(param_1 + 0x14);
                          if (*pcVar3 == '\0') {
                            lVar4 = 0xc;
                          }
                          else {
                            pcVar3 = (char *)(param_1 + 0x15);
                            if (*pcVar3 == '\0') {
                              lVar4 = 0xd;
                            }
                            else {
                              pcVar3 = (char *)(param_1 + 0x16);
                              if (*pcVar3 == '\0') {
                                lVar4 = 0xe;
                              }
                              else {
                                pcVar3 = (char *)(param_1 + 0x17);
                                if (*pcVar3 == '\0') {
                                  lVar4 = 0xf;
                                }
                                else {
                                  pcVar3 = (char *)(param_1 + 0x18);
                                  if (*pcVar3 == '\0') {
                                    lVar4 = 0x10;
                                  }
                                  else {
                                    pcVar3 = (char *)(param_1 + 0x19);
                                    if (*pcVar3 == '\0') {
                                      lVar4 = 0x11;
                                    }
                                    else {
                                      pcVar3 = (char *)(param_1 + 0x1a);
                                      if (*pcVar3 == '\0') {
                                        lVar4 = 0x12;
                                      }
                                      else {
                                        pcVar3 = (char *)(param_1 + 0x1b);
                                        if (*pcVar3 == '\0') {
                                          lVar4 = 0x13;
                                        }
                                        else {
                                          pcVar3 = (char *)(param_1 + 0x1c);
                                          if (*pcVar3 == '\0') {
                                            lVar4 = 0x14;
                                          }
                                          else {
                                            pcVar3 = (char *)(param_1 + 0x1d);
                                            if (*pcVar3 == '\0') {
                                              lVar4 = 0x15;
                                            }
                                            else {
                                              pcVar3 = (char *)(param_1 + 0x1e);
                                              if (*pcVar3 == '\0') {
                                                lVar4 = 0x16;
                                              }
                                              else {
                                                pcVar3 = (char *)(param_1 + 0x1f);
                                                if (*pcVar3 != '\0') {
                                                  return 2;
                                                }
                                                lVar4 = 0x17;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  lVar1 = param_1 + lVar4 * 0x58 + 0x20;
  iVar2 = FUN__text__004e4414(lVar1);
  if (iVar2 == 1) {
    *in_x4 = (int)lVar4;
    *in_x5 = param_1 + lVar4 * 0x58 + 0x20;
    *pcVar3 = '\x01';
  }
  else {
    FUN__text__004e4564(lVar1);
  }
  return iVar2;
}


