/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00511cf0; name: FUN_.text__00511cf0
 */


undefined8 FUN__text__00511cf0(long param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)FUN__text__00400f80(10,0x10);
    if (plVar5 == (long *)0x0) {
      *(undefined8 *)(param_1 + 8) = 0;
      return 0;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(long **)(param_1 + 8) = plVar5;
    uVar8 = (ulong)*(uint *)(plVar5 + 1);
    uVar2 = *(uint *)((long)plVar5 + 0xc);
    lVar6 = *plVar5;
    if (uVar2 <= *(uint *)(plVar5 + 1)) goto LAB__text__00511d74;
  }
  else {
    uVar8 = (ulong)*(uint *)(plVar5 + 1);
    uVar2 = *(uint *)((long)plVar5 + 0xc);
    lVar6 = *plVar5;
    if (uVar2 <= *(uint *)(plVar5 + 1)) {
LAB__text__00511d74:
      iVar1 = uVar2 + (uVar2 >> 1);
      if (uVar2 == 0) {
        iVar1 = 1;
      }
      uVar2 = iVar1 + uVar2;
      uVar7 = (uint)uVar8;
      if (lVar6 == 0) {
        lVar6 = FUN__text__00400f80(10,(ulong)uVar2 << 3);
        if (lVar6 == 0) {
          return 0;
        }
        lVar3 = *plVar5;
        if ((lVar3 != 0) && (lVar3 != lVar6)) {
          if (uVar7 != 0) {
            if (uVar7 == 1) {
              uVar4 = 0;
            }
            else {
              uVar4 = 0;
              do {
                lVar3 = uVar4 * 8;
                uVar4 = uVar4 + 2;
                *(undefined8 *)(lVar6 + lVar3) = *(undefined8 *)(*plVar5 + lVar3);
                ((undefined8 *)(lVar6 + lVar3))[1] = *(undefined8 *)(*plVar5 + lVar3 + 8);
              } while ((uVar8 & 0xfffffffe) != uVar4);
            }
            if ((uVar8 & 1) != 0) {
              *(undefined8 *)(lVar6 + uVar4 * 8) = *(undefined8 *)(*plVar5 + uVar4 * 8);
            }
            lVar3 = *plVar5;
          }
          FUN__text__00400fc0(10,lVar3);
        }
      }
      else {
        lVar6 = FUN__text__00400fa0(10,lVar6);
        if (lVar6 == 0) {
          return 0;
        }
      }
      *plVar5 = lVar6;
      *(uint *)((long)plVar5 + 0xc) = uVar2;
      if (uVar2 <= uVar7) {
        return 0;
      }
      uVar8 = (ulong)*(uint *)(plVar5 + 1);
      *(uint *)(plVar5 + 1) = *(uint *)(plVar5 + 1) + 1;
      goto LAB__text__00511e6c;
    }
  }
  *(int *)(plVar5 + 1) = (int)uVar8 + 1;
  if (lVar6 == 0) {
    return 0;
  }
LAB__text__00511e6c:
  *(undefined8 *)(lVar6 + uVar8 * 8) = param_2;
  return 1;
}


