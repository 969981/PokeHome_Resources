/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c38ec; name: FUN_.text__001c38ec
 */


undefined8 FUN__text__001c38ec(long param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 uVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  float local_80;
  float fStack_7c;
  long local_68;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  byte local_59;
  int local_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  
  uVar10 = *(undefined8 *)(param_2 + 0x120);
  bVar2 = FUN__text__0011b4d8(uVar10);
  local_5c = bVar2 & 1;
  local_5b = FUN__text__0011b4e0(uVar10);
  local_5b = local_5b & 1;
  local_5a = FUN__text__0011b4f8(uVar10);
  local_5a = local_5a & 1;
  local_59 = FUN__text__0011b510(uVar10);
  local_59 = local_59 & 1;
  iVar4 = FUN__text__0011b528(uVar10);
  iStack_54 = FUN__text__0011b530(uVar10);
  local_58 = iVar4 + -0x280;
  iStack_54 = 0x168 - iStack_54;
  iVar4 = FUN__text__0011b548(uVar10);
  iStack_4c = FUN__text__0011b550(uVar10);
  local_50 = iVar4 + -0x280;
  iStack_4c = 0x168 - iStack_4c;
  iVar4 = FUN__text__0011b538(uVar10);
  iStack_44 = FUN__text__0011b540(uVar10);
  local_48 = iVar4 + -0x280;
  iStack_44 = 0x168 - iStack_44;
  if (**(char **)(*(long *)(param_1 + 0x640) + 0xc0) == '\0') {
    if (((((*(long *)(param_1 + 0x4e0) != 0) && (uVar6 = FUN__text__003c069c(), (uVar6 & 1) != 0))
         || (bVar3 = FUN__text__0012c2c4(param_1 + 0x110), (bVar3 & bVar2 & 1) == 0)) ||
        ((uVar6 = FUN__text__0019f564(*(undefined8 *)(param_1 + 0x6f8)), (uVar6 & 1) == 0 ||
         (uVar6 = FUN__text__0019f5d4(*(undefined8 *)(param_1 + 0x6f8)), (uVar6 & 1) != 0)))) ||
       (uVar6 = FUN__text__0019f860(*(undefined8 *)(param_1 + 0x6f8)), (uVar6 & 1) != 0)) {
      uVar10 = 0;
      goto LAB__text__001c3c64;
    }
    **(undefined1 **)(*(long *)(param_1 + 0x640) + 0xc0) = 1;
    **(undefined1 **)(*(long *)(param_1 + 0x640) + 200) = 0;
    FUN__text__00128ca0(param_1,0,1);
    local_80 = ((float)local_58 * 1920.0) / 1280.0;
    fStack_7c = ((float)iStack_54 * 1080.0) / 720.0;
    FUN__text__001a0114(*(undefined8 *)(param_1 + 0x6f8),&local_80);
    FUN__text__005e927c(&local_80,0x86ddd8);
    FUN__text__003c1e4c(&local_80);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
  }
  else {
    if ((bVar2 & 1) == 0) {
      **(undefined1 **)(*(long *)(param_1 + 0x640) + 200) = 1;
    }
    uVar6 = FUN__text__0019f90c(*(undefined8 *)(param_1 + 0x6f8));
    if (((((uVar6 & 1) == 0) &&
         (uVar6 = FUN__text__001a1ac0(*(undefined8 *)(param_1 + 0x6f8)), (uVar6 & 1) == 0)) &&
        ((uVar6 = FUN__text__0019f6f4(*(undefined8 *)(param_1 + 0x6f8)), (uVar6 & 1) == 0 &&
         (uVar6 = FUN__text__0019f780(*(undefined8 *)(param_1 + 0x6f8)), (uVar6 & 1) == 0)))) &&
       ((*(long *)(param_1 + 0x4e0) == 0 || (uVar6 = FUN__text__003c069c(), (uVar6 & 1) == 0)))) {
      uVar9 = 1;
      cVar1 = **(char **)(*(long *)(param_1 + 0x640) + 0xd0);
      uVar6 = FUN__text__0019f90c(*(undefined8 *)(param_1 + 0x6f8));
      if (cVar1 != '\0') goto LAB__text__001c3a30;
LAB__text__001c3ac4:
      if (((uVar6 & 1) != 0) ||
         (uVar6 = FUN__text__001a1ac0(*(undefined8 *)(param_1 + 0x6f8)), (uVar6 & 1) != 0)) {
        **(undefined1 **)(*(long *)(param_1 + 0x640) + 0xd0) = 1;
      }
    }
    else {
      uVar9 = 0;
      cVar1 = **(char **)(*(long *)(param_1 + 0x640) + 0xd0);
      uVar6 = FUN__text__0019f90c(*(undefined8 *)(param_1 + 0x6f8));
      if (cVar1 == '\0') goto LAB__text__001c3ac4;
LAB__text__001c3a30:
      if (((uVar6 & 1) == 0) &&
         (uVar6 = FUN__text__001a1ac0(*(undefined8 *)(param_1 + 0x6f8)), (uVar6 & 1) == 0)) {
        **(undefined1 **)(*(long *)(param_1 + 0x640) + 0xd0) = 0;
        FUN__text__001a1b08(*(undefined8 *)(param_1 + 0x6f8),&local_5c);
      }
    }
    FUN__text__001a1b50(*(undefined8 *)(param_1 + 0x6f8),&local_5c);
    uVar5 = FUN__text__001a1b98(*(undefined8 *)(param_1 + 0x6f8),uVar9 ^ 1,&local_5c);
    uVar6 = FUN__text__0019f90c(*(undefined8 *)(param_1 + 0x6f8));
    if (((((uVar6 & 1) != 0) ||
         (uVar6 = FUN__text__001a1ac0(*(undefined8 *)(param_1 + 0x6f8)), (uVar6 & 1) != 0)) ||
        (uVar6 = FUN__text__0019f6f4(*(undefined8 *)(param_1 + 0x6f8)), (uVar6 & 1) != 0)) ||
       ((uVar6 = FUN__text__0019f780(*(undefined8 *)(param_1 + 0x6f8)), (uVar6 & 1) != 0 ||
        ((uVar9 = uVar9 & (uVar5 ^ 1), *(long *)(param_1 + 0x4e0) != 0 &&
         (uVar6 = FUN__text__003c069c(), (uVar6 & 1) != 0)))))) {
      uVar9 = 0;
    }
    lVar8 = *(long *)(param_1 + 0x640);
    if ((**(char **)(lVar8 + 0xc0) == '\0') || (**(char **)(lVar8 + 200) != '\0')) {
      uVar9 = uVar9 ^ 1;
      if (**(char **)(lVar8 + 200) == '\0') {
        uVar9 = 1;
      }
    }
    else {
      local_80 = ((float)local_58 * 1920.0) / 1280.0;
      fStack_7c = ((float)iStack_54 * 1080.0) / 720.0;
      FUN__text__001a0114(*(undefined8 *)(param_1 + 0x6f8),&local_80);
      uVar9 = uVar9 ^ 1;
      if (**(char **)(*(long *)(param_1 + 0x640) + 200) == '\0') {
        uVar9 = 1;
      }
    }
    if (uVar9 == 0) {
      uVar6 = FUN__text__0019f5b0(*(undefined8 *)(param_1 + 0x6f8));
      if ((uVar6 & 1) == 0) {
        uVar6 = FUN__text__0019f5c8(*(undefined8 *)(param_1 + 0x6f8));
        if ((uVar6 & 1) != 0) {
          FUN__text__001a08a8();
          uVar7 = 4;
          goto LAB__text__001c3c44;
        }
        uVar6 = FUN__text__0019f5bc(*(undefined8 *)(param_1 + 0x6f8));
        if ((uVar6 & 1) != 0) {
          FUN__text__001a15d8();
          uVar7 = 5;
          goto LAB__text__001c3c44;
        }
        uVar6 = FUN__text__0019f580(*(undefined8 *)(param_1 + 0x6f8));
        if ((uVar6 & 1) != 0) {
          FUN__text__001a05c8(*(undefined8 *)(param_1 + 0x6f8));
          **(undefined1 **)(*(long *)(param_1 + 0x640) + 0xc0) = 0;
          **(undefined1 **)(*(long *)(param_1 + 0x640) + 200) = 0;
          if (**(char **)(*(long *)(param_1 + 0x640) + 0xc0) == '\0') {
            uVar10 = 1;
            FUN__text__00128ca0(param_1,1,1);
            goto LAB__text__001c3c64;
          }
          goto LAB__text__001c3c60;
        }
      }
      else {
        FUN__text__001a03ec();
        uVar7 = 4;
LAB__text__001c3c44:
        *(undefined4 *)(param_1 + 0x64c) = uVar7;
      }
      **(undefined1 **)(*(long *)(param_1 + 0x640) + 0xc0) = 0;
      **(undefined1 **)(*(long *)(param_1 + 0x640) + 200) = 0;
    }
  }
LAB__text__001c3c60:
  uVar10 = 1;
LAB__text__001c3c64:
  FUN__text__001a192c(*(undefined8 *)(param_1 + 0x6f8),
                      **(char **)(*(long *)(param_1 + 0x640) + 0xc0) == '\0');
  FUN__text__001c340c(param_1);
  FUN__text__0019ebdc(*(undefined8 *)(param_1 + 0x6f8));
  if ((**(char **)(*(long *)(param_1 + 0x640) + 0xc0) == '\0') ||
     (**(char **)(*(long *)(param_1 + 0x640) + 200) != '\0')) {
    uVar6 = FUN__text__0019f90c(*(undefined8 *)(param_1 + 0x6f8));
  }
  else {
    local_80 = ((float)local_58 * 1920.0) / 1280.0;
    fStack_7c = ((float)iStack_54 * 1080.0) / 720.0;
    FUN__text__001a0114(*(undefined8 *)(param_1 + 0x6f8),&local_80);
    uVar6 = FUN__text__0019f90c(*(undefined8 *)(param_1 + 0x6f8));
  }
  if ((uVar6 & 1) == 0) {
    uVar6 = FUN__text__0019f6f4(*(undefined8 *)(param_1 + 0x6f8));
    if (((uVar6 & 1) == 0) &&
       (uVar6 = FUN__text__0019f7d4(*(undefined8 *)(param_1 + 0x6f8)), (uVar6 & 1) == 0)) {
      uVar6 = FUN__text__0019f780(*(undefined8 *)(param_1 + 0x6f8));
      if ((uVar6 & 1) == 0) {
        uVar6 = FUN__text__001a1ac0(*(undefined8 *)(param_1 + 0x6f8));
        if ((uVar6 & 1) == 0) {
          uVar6 = FUN__text__0019f988(*(undefined8 *)(param_1 + 0x6f8));
          if ((uVar6 & 1) == 0) {
            uVar6 = FUN__text__0019f9dc(*(undefined8 *)(param_1 + 0x6f8));
            if ((uVar6 & 1) == 0) {
              uVar6 = FUN__text__0019fa30(*(undefined8 *)(param_1 + 0x6f8));
              if ((uVar6 & 1) == 0) {
                uVar6 = FUN__text__0019fa84(*(undefined8 *)(param_1 + 0x6f8));
                if ((uVar6 & 1) == 0) {
                  uVar6 = FUN__text__0019fad8(*(undefined8 *)(param_1 + 0x6f8));
                  if ((uVar6 & 1) == 0) {
                    uVar6 = FUN__text__0019fb64(*(undefined8 *)(param_1 + 0x6f8));
                    if ((uVar6 & 1) == 0) {
                      if ((DAT_008e2080 == 0) || (*(long *)(DAT_008e2080 + 0x68) == 0)) {
                    /* WARNING: Subroutine does not return */
                        nn::diag::detail::AbortImpl();
                      }
                      if ((*(byte *)(*(long *)(DAT_008e2080 + 0x68) + 0x2ac) >> 1 & 1) == 0) {
                        uVar6 = FUN__text__0019fbf0(*(undefined8 *)(param_1 + 0x6f8));
                        if ((uVar6 & 1) == 0) {
                          uVar6 = FUN__text__0019fc7c(*(undefined8 *)(param_1 + 0x6f8));
                          if ((uVar6 & 1) == 0) {
                            uVar6 = FUN__text__0019fd08(*(undefined8 *)(param_1 + 0x6f8));
                            if ((uVar6 & 1) == 0) {
                              return uVar10;
                            }
                            uVar7 = 0x1a;
                          }
                          else {
                            uVar7 = 0xf;
                          }
                        }
                        else {
                          uVar7 = 0xe;
                        }
                      }
                      else {
                        uVar7 = 0xd;
                      }
                    }
                    else {
                      uVar7 = 0xc;
                    }
                  }
                  else {
                    uVar7 = 0xb;
                  }
                }
                else {
                  uVar7 = 10;
                }
              }
              else {
                uVar7 = 9;
              }
            }
            else {
              uVar7 = 8;
            }
          }
          else {
            FUN__text__0019efec();
            FUN__text__0019f1b0(*(undefined8 *)(param_1 + 0x6f8));
            uVar7 = 7;
          }
        }
        else {
          uVar7 = 6;
        }
      }
      else {
        uVar7 = 3;
      }
    }
    else {
      uVar7 = 2;
    }
  }
  else {
    uVar7 = 1;
  }
  *(undefined4 *)(param_1 + 0x64c) = uVar7;
  return 1;
}


