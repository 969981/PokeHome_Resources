/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00279610; name: FUN_.text__00279610
 */


bool FUN__text__00279610(long param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = (ulong)param_2;
  lVar4 = param_1 + (ulong)param_2 * 0x78b8 + (ulong)param_3 * 0x138;
  if (param_2 < 7) {
    uVar2 = *(uint *)(lVar4 + 0x30);
    if (param_2 == 5) {
      if (uVar2 != 0) {
        uVar3 = *(uint *)(param_1 + (ulong)param_3 * 0x138 + 0x25bec);
        uVar6 = FUN__text__00325c30(uVar2,uVar3);
        lVar4 = 0;
        do {
          if (((uint)*(ushort *)(lVar4 + 0x72d21a) == (uVar2 & 0xffff)) &&
             ((uint)*(ushort *)(lVar4 + 0x72d21c) == (uVar3 & 0xffff))) {
            if (((uint)uVar6 >> 8 & 1) == 0) {
              return false;
            }
            break;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != 0x180);
        uVar7 = 1L << ((ulong)uRam000000000072d3b0 & 0x3f);
        if ((uVar7 & uVar6) == 0) {
          return false;
        }
        uVar2 = *(uint *)(param_1 + (ulong)param_3 * 0x138 + 0x25bcc);
        if (uVar2 != 0) {
          uVar3 = *(uint *)(param_1 + (ulong)param_3 * 0x138 + 0x25bf0);
          uVar6 = FUN__text__00325c30(uVar2,uVar3);
          lVar4 = 0;
          do {
            if (((uint)*(ushort *)(lVar4 + 0x72d21a) == (uVar2 & 0xffff)) &&
               ((uint)*(ushort *)(lVar4 + 0x72d21c) == (uVar3 & 0xffff))) {
              if (((uint)uVar6 >> 8 & 1) == 0) {
                return false;
              }
              break;
            }
            lVar4 = lVar4 + 4;
          } while (lVar4 != 0x180);
          if ((uVar7 & uVar6) == 0) {
            return false;
          }
          uVar2 = *(uint *)(param_1 + (ulong)param_3 * 0x138 + 0x25bd0);
          if (uVar2 != 0) {
            uVar3 = *(uint *)(param_1 + (ulong)param_3 * 0x138 + 0x25bf4);
            uVar6 = FUN__text__00325c30(uVar2,uVar3);
            lVar4 = 0;
            do {
              if (((uint)*(ushort *)(lVar4 + 0x72d21a) == (uVar2 & 0xffff)) &&
                 ((uint)*(ushort *)(lVar4 + 0x72d21c) == (uVar3 & 0xffff))) {
                if (((uint)uVar6 >> 8 & 1) == 0) {
                  return false;
                }
                break;
              }
              lVar4 = lVar4 + 4;
            } while (lVar4 != 0x180);
            if ((uVar7 & uVar6) == 0) {
              return false;
            }
            uVar2 = *(uint *)(param_1 + (ulong)param_3 * 0x138 + 0x25bd4);
            if (uVar2 != 0) {
              uVar3 = *(uint *)(param_1 + (ulong)param_3 * 0x138 + 0x25bf8);
              uVar6 = FUN__text__00325c30(uVar2,uVar3);
              lVar4 = 0;
              do {
                if (((uint)*(ushort *)(lVar4 + 0x72d21a) == (uVar2 & 0xffff)) &&
                   ((uint)*(ushort *)(lVar4 + 0x72d21c) == (uVar3 & 0xffff))) {
                  if (((uint)uVar6 >> 8 & 1) == 0) {
                    return false;
                  }
                  break;
                }
                lVar4 = lVar4 + 4;
              } while (lVar4 != 0x180);
              if ((uVar7 & uVar6) == 0) {
                return false;
              }
              uVar2 = *(uint *)(param_1 + (ulong)param_3 * 0x138 + 0x25bd8);
              if (uVar2 != 0) {
                uVar3 = *(uint *)(param_1 + (ulong)param_3 * 0x138 + 0x25bfc);
                uVar6 = FUN__text__00325c30(uVar2,uVar3);
                lVar4 = 0;
                do {
                  if (((uint)*(ushort *)(lVar4 + 0x72d21a) == (uVar2 & 0xffff)) &&
                     ((uint)*(ushort *)(lVar4 + 0x72d21c) == (uVar3 & 0xffff))) {
                    if (((uint)uVar6 >> 8 & 1) == 0) {
                      return false;
                    }
                    break;
                  }
                  lVar4 = lVar4 + 4;
                } while (lVar4 != 0x180);
                if ((uVar7 & uVar6) == 0) {
                  return false;
                }
                uVar2 = *(uint *)(param_1 + (ulong)param_3 * 0x138 + 0x25bdc);
                if (uVar2 != 0) {
                  uVar3 = *(uint *)(param_1 + (ulong)param_3 * 0x138 + 0x25c00);
                  uVar6 = FUN__text__00325c30(uVar2,uVar3);
                  lVar4 = 0;
                  do {
                    if (((uint)*(ushort *)(lVar4 + 0x72d21a) == (uVar2 & 0xffff)) &&
                       ((uint)*(ushort *)(lVar4 + 0x72d21c) == (uVar3 & 0xffff))) {
                      if (((uint)uVar6 >> 8 & 1) == 0) {
                        return false;
                      }
                      break;
                    }
                    lVar4 = lVar4 + 4;
                  } while (lVar4 != 0x180);
                  if ((uVar7 & uVar6) == 0) {
                    return false;
                  }
                  uVar2 = *(uint *)(param_1 + (ulong)param_3 * 0x138 + 0x25be0);
                  if (uVar2 != 0) {
                    uVar3 = *(uint *)(param_1 + (ulong)param_3 * 0x138 + 0x25c04);
                    uVar6 = FUN__text__00325c30(uVar2,uVar3);
                    lVar4 = 0;
                    do {
                      if (((uint)*(ushort *)(lVar4 + 0x72d21a) == (uVar2 & 0xffff)) &&
                         ((uint)*(ushort *)(lVar4 + 0x72d21c) == (uVar3 & 0xffff))) {
                        if (((uint)uVar6 >> 8 & 1) == 0) {
                          return false;
                        }
                        break;
                      }
                      lVar4 = lVar4 + 4;
                    } while (lVar4 != 0x180);
                    if ((uVar7 & uVar6) == 0) {
                      return false;
                    }
                    uVar2 = *(uint *)(param_1 + (ulong)param_3 * 0x138 + 0x25be4);
                    if (uVar2 != 0) {
                      uVar3 = *(uint *)(param_1 + (ulong)param_3 * 0x138 + 0x25c08);
                      uVar6 = FUN__text__00325c30(uVar2,uVar3);
                      lVar4 = 0;
                      do {
                        if (((uint)*(ushort *)(lVar4 + 0x72d21a) == (uVar2 & 0xffff)) &&
                           ((uint)*(ushort *)(lVar4 + 0x72d21c) == (uVar3 & 0xffff))) {
                          if (((uint)uVar6 >> 8 & 1) == 0) {
                            return false;
                          }
                          break;
                        }
                        lVar4 = lVar4 + 4;
                      } while (lVar4 != 0x180);
                      if ((uVar7 & uVar6) == 0) {
                        return false;
                      }
                      uVar2 = *(uint *)(param_1 + (ulong)param_3 * 0x138 + 0x25be8);
                      if (uVar2 != 0) {
                        uVar3 = *(uint *)(param_1 + (ulong)param_3 * 0x138 + 0x25c0c);
                        uVar6 = FUN__text__00325c30(uVar2,uVar3);
                        lVar4 = 0;
                        do {
                          if (((uint)*(ushort *)(lVar4 + 0x72d21a) == (uVar2 & 0xffff)) &&
                             ((uint)*(ushort *)(lVar4 + 0x72d21c) == (uVar3 & 0xffff))) {
                            if (((uint)uVar6 >> 8 & 1) == 0) {
                              return false;
                            }
                            break;
                          }
                          lVar4 = lVar4 + 4;
                        } while (lVar4 != 0x180);
                        if ((uVar7 & uVar6) == 0) {
                          return false;
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
    else if (uVar2 != 0) {
      uVar7 = FUN__text__00325c30(uVar2,*(undefined4 *)
                                         (param_1 + uVar6 * 0x78b8 + (ulong)param_3 * 0x138 + 0x54))
      ;
      uVar5 = 1L << ((ulong)*(uint *)(uVar6 * 4 + 0x72d39c) & 0x3f);
      if ((uVar5 & uVar7) == 0) {
        return false;
      }
      iVar1 = *(int *)(param_1 + uVar6 * 0x78b8 + (ulong)param_3 * 0x138 + 0x34);
      if (iVar1 != 0) {
        uVar7 = FUN__text__00325c30(iVar1,*(undefined4 *)
                                           (param_1 + uVar6 * 0x78b8 + (ulong)param_3 * 0x138 + 0x58
                                           ));
        if ((uVar5 & uVar7) == 0) {
          return false;
        }
        iVar1 = *(int *)(param_1 + uVar6 * 0x78b8 + (ulong)param_3 * 0x138 + 0x38);
        if (iVar1 != 0) {
          uVar7 = FUN__text__00325c30(iVar1,*(undefined4 *)
                                             (param_1 + uVar6 * 0x78b8 + (ulong)param_3 * 0x138 +
                                             0x5c));
          if ((uVar5 & uVar7) == 0) {
            return false;
          }
          iVar1 = *(int *)(param_1 + uVar6 * 0x78b8 + (ulong)param_3 * 0x138 + 0x3c);
          if (iVar1 != 0) {
            uVar7 = FUN__text__00325c30(iVar1,*(undefined4 *)
                                               (param_1 + uVar6 * 0x78b8 + (ulong)param_3 * 0x138 +
                                               0x60));
            if ((uVar5 & uVar7) == 0) {
              return false;
            }
            iVar1 = *(int *)(param_1 + uVar6 * 0x78b8 + (ulong)param_3 * 0x138 + 0x40);
            if (iVar1 != 0) {
              uVar7 = FUN__text__00325c30(iVar1,*(undefined4 *)
                                                 (param_1 + uVar6 * 0x78b8 + (ulong)param_3 * 0x138
                                                 + 100));
              if ((uVar5 & uVar7) == 0) {
                return false;
              }
              iVar1 = *(int *)(param_1 + uVar6 * 0x78b8 + (ulong)param_3 * 0x138 + 0x44);
              if (iVar1 != 0) {
                uVar7 = FUN__text__00325c30(iVar1,*(undefined4 *)
                                                   (param_1 + uVar6 * 0x78b8 +
                                                    (ulong)param_3 * 0x138 + 0x68));
                if ((uVar5 & uVar7) == 0) {
                  return false;
                }
                iVar1 = *(int *)(param_1 + uVar6 * 0x78b8 + (ulong)param_3 * 0x138 + 0x48);
                if (iVar1 != 0) {
                  uVar7 = FUN__text__00325c30(iVar1,*(undefined4 *)
                                                     (param_1 + uVar6 * 0x78b8 +
                                                      (ulong)param_3 * 0x138 + 0x6c));
                  if ((uVar5 & uVar7) == 0) {
                    return false;
                  }
                  iVar1 = *(int *)(param_1 + uVar6 * 0x78b8 + (ulong)param_3 * 0x138 + 0x4c);
                  if (iVar1 != 0) {
                    uVar7 = FUN__text__00325c30(iVar1,*(undefined4 *)
                                                       (param_1 + uVar6 * 0x78b8 +
                                                        (ulong)param_3 * 0x138 + 0x70));
                    if ((uVar5 & uVar7) == 0) {
                      return false;
                    }
                    iVar1 = *(int *)(param_1 + uVar6 * 0x78b8 + (ulong)param_3 * 0x138 + 0x50);
                    if (iVar1 != 0) {
                      uVar6 = FUN__text__00325c30(iVar1,*(undefined4 *)
                                                         (param_1 + uVar6 * 0x78b8 +
                                                          (ulong)param_3 * 0x138 + 0x74));
                      return (uVar5 & uVar6) != 0;
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
  else {
    iVar1 = *(int *)(lVar4 + 0x30);
    if (iVar1 != 0) {
      FUN__text__00325c30(iVar1,*(undefined4 *)
                                 (param_1 + uVar6 * 0x78b8 + (ulong)param_3 * 0x138 + 0x54));
      return false;
    }
  }
  return true;
}


