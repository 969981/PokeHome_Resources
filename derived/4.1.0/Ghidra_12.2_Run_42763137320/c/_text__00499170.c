/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00499170; name: FUN_.text__00499170
 */


void FUN__text__00499170(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar4 = FUN__text__00400f80(0x10,0x68);
  if (lVar4 != 0) {
    FUN__text__00496950(lVar4,param_1,param_2);
    uVar2 = *(uint *)(param_1 + 0x80);
    uVar8 = (ulong)uVar2;
    uVar3 = *(uint *)(param_1 + 0x84);
    lVar7 = *(long *)(param_1 + 0x78);
    if (uVar2 < uVar3) {
      *(uint *)(param_1 + 0x80) = uVar2 + 1;
      if (lVar7 == 0) goto LAB__text__004992c4;
    }
    else {
      iVar1 = uVar3 + (uVar3 >> 1);
      if (uVar3 == 0) {
        iVar1 = 1;
      }
      uVar3 = iVar1 + uVar3;
      if (lVar7 == 0) {
        lVar7 = FUN__text__00400f80(0,(ulong)uVar3 << 3);
        if (lVar7 == 0) goto LAB__text__004992c4;
        lVar5 = *(long *)(param_1 + 0x78);
        if ((lVar5 != 0) && (lVar5 != lVar7)) {
          if (uVar2 != 0) {
            if (uVar2 == 1) {
              uVar6 = 0;
            }
            else {
              uVar6 = 0;
              do {
                lVar5 = uVar6 * 8;
                uVar6 = uVar6 + 2;
                *(undefined8 *)(lVar7 + lVar5) = *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar5);
                ((undefined8 *)(lVar7 + lVar5))[1] =
                     *(undefined8 *)(*(long *)(param_1 + 0x78) + lVar5 + 8);
              } while ((uVar8 & 0xfffffffe) != uVar6);
            }
            if ((uVar2 & 1) != 0) {
              *(undefined8 *)(lVar7 + uVar6 * 8) =
                   *(undefined8 *)(*(long *)(param_1 + 0x78) + uVar6 * 8);
            }
            lVar5 = *(long *)(param_1 + 0x78);
          }
          FUN__text__00400fc0(0,lVar5);
        }
      }
      else {
        lVar7 = FUN__text__00400fa0(0,lVar7);
        if (lVar7 == 0) goto LAB__text__004992c4;
      }
      *(long *)(param_1 + 0x78) = lVar7;
      *(uint *)(param_1 + 0x84) = uVar3;
      if (uVar3 <= uVar2) {
LAB__text__004992c4:
        FUN__text__00496ad0(lVar4);
        FUN__text__00400fc0(0x10,lVar4);
        return;
      }
      uVar8 = (ulong)*(uint *)(param_1 + 0x80);
      *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) + 1;
    }
    *(long *)(lVar7 + uVar8 * 8) = lVar4;
  }
  return;
}


