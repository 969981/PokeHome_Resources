/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00115f24; name: FUN_.text__00115f24
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__00115f24(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long local_40;
  undefined1 uStack_31;
  
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x278,8);
  if (plVar2 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
    plVar2 = (long *)FUN__text__005e6444(0);
    lVar1 = _DAT_0089fdb0 + 0x68;
    lVar3 = _DAT_0089fdb0 + 0xa8;
    *plVar2 = _DAT_0089fdb0 + 0x10;
    plVar2[9] = lVar1;
    plVar2[10] = lVar3;
    if (plVar2[0x4c] != 0) {
      (**(code **)(*(long *)(plVar2[0x4c] + 0x48) + 0x18))();
      plVar2[0x4c] = 0;
    }
    plVar2 = (long *)FUN__text__005e66f0(plVar2);
    return plVar2;
  }
  lVar3 = *param_3;
  FUN__text__005e6444();
  lVar1 = _DAT_0089fd30;
  *(undefined4 *)(plVar2 + 0x4d) = 1;
  plVar2[0x4c] = 0;
  *(undefined1 *)((long)plVar2 + 0x26c) = 0;
  plVar2[0x4e] = lVar3;
  *plVar2 = lVar1 + 0x10;
  plVar2[9] = lVar1 + 0x68;
  plVar2[10] = lVar1 + 0xa8;
  local_40 = FUN__text__0010feac(&uStack_31,plVar2[1]);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
  }
  FUN__text__005e7474(plVar2,&local_40);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  plVar2[1] = (long)param_2;
  plVar2[2] = (long)plVar2;
  plVar2[3] = 0x278;
  plVar2[4] = 8;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  return plVar2;
}


