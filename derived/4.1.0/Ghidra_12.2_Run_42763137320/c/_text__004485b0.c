/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004485b0; name: FUN_.text__004485b0
 */


void FUN__text__004485b0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  
  if ((*(int *)(param_2 + 0x18) == 0) || (uVar1 = *(uint *)(param_1 + 0x38), uVar1 == 0)) {
    return;
  }
  plVar6 = *(long **)(param_2 + 0x10);
  do {
    if (uVar1 != 0) {
      uVar2 = 0;
      uVar5 = (uint)*plVar6;
      if (uVar1 != 0) {
        uVar2 = uVar5 / uVar1;
      }
      plVar4 = (long *)(*(long *)(param_1 + 0x30) + (ulong)(uVar5 - uVar2 * uVar1) * 8);
      do {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB__text__00448624;
      } while (plVar4[1] != *plVar6);
      lVar7 = plVar4[2];
      if ((*(long *)(lVar7 + 0x20) == 0) &&
         (plVar4 = (long *)FUN__text__00400f80(4,0xa0), plVar4 != (long *)0x0)) {
        FUN__text__0047d448();
        *(long **)(lVar7 + 0x20) = plVar4;
        plVar4[1] = lVar7;
        iVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined8 *)(lVar7 + 0x58));
        if (iVar3 != 1) {
          (**(code **)*plVar4)(plVar4);
          FUN__text__00400fc0(4,plVar4);
          *(undefined8 *)(lVar7 + 0x20) = 0;
        }
      }
    }
LAB__text__00448624:
    plVar6 = plVar6 + 1;
    if (plVar6 == (long *)(*(long *)(param_2 + 0x10) + (ulong)*(uint *)(param_2 + 0x18) * 8)) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x38);
  } while( true );
}


