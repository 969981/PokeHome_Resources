/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005a082c; name: FUN_.text__005a082c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005a082c(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long local_50;
  long *local_48;
  long local_40;
  long local_38;
  
  lVar2 = *(long *)(param_1 + 0x110);
  uVar3 = (ulong)*(int *)(param_1 + 0x15c);
  if ((ulong)(*(long *)(param_1 + 0x118) - lVar2 >> 5) <= uVar3) {
    plVar4 = *(long **)(param_1 + 0x140);
    lVar5 = (long)*(int *)(param_1 + 0x154);
    lVar2 = FUN__text__006ec6d4(_DAT_008a0448);
    local_50 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar5,lVar2);
    plVar1 = *(long **)(param_1 + 0x118);
    local_48 = plVar4;
    local_40 = lVar5;
    local_38 = lVar2;
    if (plVar1 < *(long **)(param_1 + 0x120)) {
      uVar3 = tpidr_el0;
      uVar3 = uVar3 & 0xffffffffffffe000;
      if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
        FUN__text__00102c10();
      }
      *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x128)
      ;
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
      *plVar1 = local_50;
      plVar1[1] = (long)plVar4;
      plVar1[2] = lVar5;
      plVar1[3] = lVar2;
      *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
      *(long **)(param_1 + 0x118) = plVar1 + 4;
      local_50 = 0;
    }
    else {
      FUN__text__005a0c10(param_1 + 0x110,&local_50);
      lVar2 = local_50;
      local_50 = 0;
      if (lVar2 != 0) {
        local_50 = 0;
        (**(code **)(*local_48 + 0x18))(local_48,lVar2,local_40,local_38);
      }
    }
    uVar3 = (ulong)*(int *)(param_1 + 0x15c);
    lVar2 = *(long *)(param_1 + 0x110);
  }
  FUN__text__006ec8b8(param_1,*(undefined8 *)(lVar2 + uVar3 * 0x20),(long)*(int *)(param_1 + 0x154))
  ;
  *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
  return;
}


