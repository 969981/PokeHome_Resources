/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00416900; name: FUN_.text__00416900
 */


long FUN__text__00416900(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auStack_60 [28];
  char local_44 [4];
  
  if (param_2 == 0) {
    lVar5 = FUN__text__0040a740(param_1);
    if (lVar5 == 0) {
      return 0;
    }
    uVar7 = *(uint *)(lVar5 + 0x60) >> 8 & 0xf;
    if (3 < uVar7) {
      return 0;
    }
    if (uVar7 != 3 && (*(uint *)(lVar5 + 0x60) & 0xff) == 0) {
      return 0;
    }
    local_44[0] = '\0';
    param_2 = FUN__text__004069b8(lVar5,local_44);
    if (local_44[0] != '\0') {
      if (param_2 == 0) {
        return 0;
      }
      iVar1 = FUN__text__00416bd0(param_2);
      if (iVar1 != 1) {
        FUN__text__00406b74(lVar5);
        return 0;
      }
      uVar6 = (ulong)DAT_00aea228;
      if (DAT_00aea228 == 0) goto LAB__text__00416924;
      uVar8 = 0;
      plVar4 = DAT_00aea220;
      do {
        lVar3 = plVar4[uVar8];
        if (((lVar3 != param_2) && (*(long *)(lVar3 + 0x30) == 0)) &&
           ((*(long *)(lVar3 + 0x68) == 0 || (*(long *)(*(long *)(lVar3 + 0x68) + 0x80) == 0)))) {
          lVar2 = FUN__text__0040a740();
          if (lVar2 == lVar5) {
            iVar1 = FUN__text__0045b1a0(lVar3,param_2,0);
            if (iVar1 != 1) {
              FUN__text__00406b74(lVar5);
              plVar4 = DAT_00aea220;
              if (DAT_00aea228 != 0) {
                lVar5 = (ulong)DAT_00aea228 << 3;
                while (*plVar4 != param_2) {
                  plVar4 = plVar4 + 1;
                  lVar5 = lVar5 + -8;
                  if (lVar5 == 0) {
                    return 0;
                  }
                }
              }
              if (plVar4 == DAT_00aea220 + DAT_00aea228) {
                return 0;
              }
              uVar7 = DAT_00aea228 - 1;
              if (plVar4 < DAT_00aea220 + uVar7) {
                memmove(plVar4,plVar4 + 1,
                        (ulong)(uint)((int)(DAT_00aea220 + uVar7) - (int)plVar4) & 0xfffffff8);
                uVar7 = DAT_00aea228 - 1;
              }
              DAT_00aea228 = uVar7;
              return 0;
            }
            break;
          }
          uVar6 = (ulong)DAT_00aea228;
          plVar4 = DAT_00aea220;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar6);
    }
    if (param_2 != 0) goto LAB__text__00416924;
    lVar5 = *param_1;
    if (lVar5 != 0) goto LAB__text__00416930;
LAB__text__00416a5c:
    lVar5 = FUN__text__00400f80(5,0x1c0);
    if (lVar5 == 0) {
      return 0;
    }
    FUN__text__004d3e64(lVar5);
    *(undefined4 *)(lVar5 + 0x1b8) = 0xffffffff;
    *(byte *)(lVar5 + 0x1bc) = *(byte *)(lVar5 + 0x1bc) & 0xe8;
  }
  else {
LAB__text__00416924:
    lVar5 = *param_1;
    if (lVar5 == 0) {
      return param_2;
    }
LAB__text__00416930:
    if ((*(byte *)(lVar5 + 0x9a) & 0xe) == 0) goto LAB__text__00416a5c;
    lVar5 = FUN__text__00400f80(5,0x1d8);
    if (lVar5 == 0) {
      return 0;
    }
    FUN__text__00418430(lVar5,*param_1);
  }
  FUN__text__0045cc84(auStack_60,param_1);
  iVar1 = FUN__text__00416d54(lVar5,auStack_60,param_2);
  FUN__text__0045cca8(auStack_60);
  if ((iVar1 == 1) && (iVar1 = FUN__text__00416bd0(lVar5), iVar1 == 1)) {
    return lVar5;
  }
  if (*(long *)(lVar5 + 0x30) == 0) {
    if (*(long *)(lVar5 + 0x68) == 0) {
      if (*(long *)(lVar5 + 0x70) == 0) goto LAB__text__00416ad8;
    }
    else if (*(long *)(*(long *)(lVar5 + 0x68) + 0x80) != 0) goto LAB__text__00416ad8;
    lVar3 = FUN__text__0040a740();
    if ((lVar3 != 0) && ((*(long *)(lVar3 + 0x548) == lVar5 || (*(long *)(lVar3 + 0x548) == 0)))) {
      FUN__text__00406c04();
    }
  }
LAB__text__00416ad8:
  FUN__text__004d3fb0(lVar5);
  FUN__text__00400fc0(5,lVar5);
  return 0;
}


