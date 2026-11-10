/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f3840; name: FUN_.text__005f3840
 */


/* WARNING: Type propagation algorithm not settling */

long FUN__text__005f3840(long param_1,ulong param_2,char *param_3,ulong param_4)

{
  size_t sVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte local_68 [8];
  
  if ((*param_3 == -0x11) && (param_3[1] == -0x45)) {
    lVar6 = 3;
    if (param_3[2] != -0x41) {
      lVar6 = 0;
    }
    param_3 = param_3 + lVar6;
  }
  if (param_4 == 0) {
LAB__text__005f3aa4:
    lVar6 = 0;
  }
  else if (param_2 == 0) {
    uVar7 = 0;
    lVar6 = 0;
    do {
      uVar8 = param_4 - uVar7;
      sVar1 = uVar8;
      if (5 < uVar8) {
        sVar1 = 6;
      }
      memcpy(local_68,param_3 + uVar7,sVar1);
      if (uVar8 < 6) {
        memset(local_68 + sVar1,0,6 - sVar1);
      }
      uVar2 = ~(uint)local_68[0];
      if ((uVar2 >> 7 & 1) == 0) {
        if ((uVar2 >> 6 & 1) != 0) goto LAB__text__005f3aa4;
        if ((uVar2 >> 5 & 1) == 0) {
          if ((uVar2 >> 4 & 1) == 0) {
            if ((uVar2 >> 3 & 1) == 0) {
              if ((uVar2 >> 2 & 1) == 0) {
                if ((uVar2 >> 1 & 1) == 0) goto LAB__text__005f3aa4;
                lVar3 = 6;
              }
              else {
                lVar3 = 5;
              }
            }
            else {
              lVar3 = 4;
            }
          }
          else {
            lVar3 = 3;
          }
        }
        else {
          lVar3 = 2;
        }
      }
      else {
        lVar3 = 1;
      }
      uVar7 = lVar3 + uVar7;
      lVar6 = lVar6 + 1;
    } while (uVar7 < param_4);
  }
  else {
    uVar7 = 0;
    lVar3 = 0;
    do {
      uVar8 = param_4 - uVar7;
      sVar1 = uVar8;
      if (5 < uVar8) {
        sVar1 = 6;
      }
      memcpy(local_68,param_3 + uVar7,sVar1);
      if (uVar8 < 6) {
        memset(local_68 + sVar1,0,6 - sVar1);
      }
      uVar5 = (ushort)local_68[0];
      uVar2 = ~(uint)local_68[0];
      if ((uVar2 >> 7 & 1) == 0) {
        if ((uVar2 >> 6 & 1) != 0) goto LAB__text__005f3aa4;
        if ((uVar2 >> 5 & 1) == 0) {
          if ((uVar2 >> 4 & 1) == 0) {
            if ((uVar2 >> 3 & 1) == 0) {
              if ((uVar2 >> 2 & 1) == 0) {
                if ((uVar2 >> 1 & 1) == 0) goto LAB__text__005f3aa4;
                lVar4 = 6;
              }
              else {
                lVar4 = 5;
              }
            }
            else {
              lVar4 = 4;
            }
          }
          else {
            lVar4 = 3;
          }
        }
        else {
          lVar4 = 2;
        }
      }
      else {
        lVar4 = 1;
      }
      if (param_2 < lVar3 + 1U) {
        return lVar3;
      }
      lVar6 = lVar3 + 1;
      if (lVar4 != 1) {
        if (lVar4 == 2) {
          uVar5 = local_68[1] & 0xc03f | (ushort)((local_68[0] & 0x1f) << 6);
        }
        else {
          uVar5 = 0xff1f;
          if (lVar4 == 3) {
            uVar5 = (ushort)local_68[0] << 0xc | (local_68[1] & 0x3f) << 6 | local_68[2] & 0x3f;
          }
        }
      }
      uVar7 = uVar7 + lVar4;
      *(ushort *)(param_1 + lVar3 * 2) = uVar5;
      lVar3 = lVar6;
    } while (uVar7 < param_4);
  }
  return lVar6;
}


