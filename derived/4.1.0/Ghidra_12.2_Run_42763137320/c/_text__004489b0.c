/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004489b0; name: FUN_.text__004489b0
 */


void FUN__text__004489b0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  uVar1 = *(uint *)(param_1 + 0x38);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = (uint)param_2 / uVar1;
    }
    plVar5 = (long *)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar2 * uVar1) * 8);
    do {
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        return;
      }
    } while (plVar5[1] != param_2);
    if ((plVar5[2] != 0) && (lVar4 = *(long *)(plVar5[2] + 0x10), lVar4 != 0)) {
      FUN__text__0044d734(lVar4);
      FUN__text__0041595c(0);
      lVar6 = plVar5[2];
      plVar5 = *(long **)(lVar6 + 8);
      if (plVar5 != (long *)0x0) {
LAB__text__00448a20:
        *(byte *)((long)plVar5 + 0x7c) = *(byte *)((long)plVar5 + 0x7c) | 1;
        FUN__text__004486c0(plVar5 + 4,lVar4 + 0xc0);
        return;
      }
      plVar5 = (long *)FUN__text__00400f80(4,0x80);
      if (plVar5 != (long *)0x0) {
        FUN__text__0044ad10();
        *(long **)(lVar6 + 8) = plVar5;
        plVar5[1] = lVar6;
        iVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,*(undefined8 *)(lVar6 + 0x58));
        if (iVar3 == 1) goto LAB__text__00448a20;
        (**(code **)*plVar5)(plVar5);
        FUN__text__00400fc0(4,plVar5);
        *(undefined8 *)(lVar6 + 8) = 0;
      }
    }
  }
  return;
}


