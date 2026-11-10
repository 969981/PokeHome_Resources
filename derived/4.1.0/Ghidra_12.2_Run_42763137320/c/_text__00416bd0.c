/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00416bd0; name: FUN_.text__00416bd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00416bd0(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  uVar3 = DAT_00aea228;
  if ((*(long *)(param_1 + 0x30) == 0) &&
     ((*(long *)(param_1 + 0x68) == 0 || (*(long *)(*(long *)(param_1 + 0x68) + 0x80) == 0)))) {
    plVar5 = (long *)FUN__text__00419d20(_DAT_008a4d80,0);
  }
  else {
    uVar8 = (ulong)DAT_00aea228;
    if (DAT_00aea22c <= DAT_00aea228) {
      iVar1 = DAT_00aea22c + (DAT_00aea22c >> 1);
      if (DAT_00aea22c == 0) {
        iVar1 = 1;
      }
      uVar2 = iVar1 + DAT_00aea22c;
      if (DAT_00aea220 == 0) {
        lVar4 = FUN__text__00400f80(5,(ulong)uVar2 << 3);
        if (lVar4 == 0) {
          return 2;
        }
        if ((DAT_00aea220 != 0) && (DAT_00aea220 != lVar4)) {
          if (uVar3 != 0) {
            if (uVar3 == 1) {
              uVar6 = 0;
            }
            else {
              uVar6 = 0;
              do {
                lVar7 = uVar6 * 8;
                uVar6 = uVar6 + 2;
                *(undefined8 *)(lVar4 + lVar7) = *(undefined8 *)(DAT_00aea220 + lVar7);
                ((undefined8 *)(lVar4 + lVar7))[1] = *(undefined8 *)(DAT_00aea220 + lVar7 + 8);
              } while ((uVar8 & 0xfffffffe) != uVar6);
            }
            if ((uVar3 & 1) != 0) {
              *(undefined8 *)(lVar4 + uVar6 * 8) = *(undefined8 *)(DAT_00aea220 + uVar6 * 8);
            }
          }
          FUN__text__00400fc0(5,DAT_00aea220);
        }
      }
      else {
        lVar4 = FUN__text__00400fa0(5,DAT_00aea220);
        if (lVar4 == 0) {
          return 2;
        }
      }
      if (uVar2 <= uVar3) {
        DAT_00aea220 = lVar4;
        DAT_00aea22c = uVar2;
        return 2;
      }
      uVar8 = (ulong)DAT_00aea228;
      DAT_00aea220 = lVar4;
      DAT_00aea22c = uVar2;
    }
    plVar5 = (long *)(DAT_00aea220 + uVar8 * 8);
    DAT_00aea228 = (int)uVar8 + 1;
  }
  if (plVar5 == (long *)0x0) {
    return 2;
  }
  *plVar5 = param_1;
  DAT_00aea241 = 1;
  return 1;
}


