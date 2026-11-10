/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d5ac0; name: FUN_.text__005d5ac0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__005d5ac0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long local_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  
  plVar2 = *(long **)(param_2 + 8);
  if (*(long **)(param_2 + 0x178) != (long *)0x0) {
    plVar2 = *(long **)(param_2 + 0x178);
  }
  uVar5 = tpidr_el0;
  uVar5 = uVar5 & 0xffffffffffffe000;
  if (*(long *)(uVar5 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar5 + *(long *)(uVar5 + 0x98) * 8 + 0x18) = plVar2;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + 1;
  plVar1 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,0x80,8);
  if (plVar1 == (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0xb8))(plVar2);
    uStack_58 = 0x5d5be8;
    local_60 = (undefined1 *)((long)register0x00000008 + -0x40);
    local_50 = param_2;
    uStack_48 = param_1;
    (**(code **)(*plVar2 + 0x48))(&local_68);
    if (plVar2[0x32] != 0) {
      (**(code **)(*(long *)(plVar2[0x32] + 0x48) + 0x18))();
    }
    plVar2[0x32] = local_68;
    FUN__text__005d8e38(plVar2);
    uVar5 = (**(code **)(*plVar2 + 0x40))(plVar2);
    FUN__text__005d8f14(plVar2);
    FUN__text__005d5c70(plVar2[0x33]);
    return uVar5 & 0xffffffff;
  }
  plVar1[7] = 0;
  lVar3 = _DAT_008a59c0;
  *(undefined4 *)(plVar1 + 8) = 0;
  *(undefined4 *)(plVar1 + 6) = 0;
  *(undefined4 *)(plVar1 + 10) = 0;
  plVar1[0xb] = 0;
  plVar1[0xc] = 0;
  plVar1[0xf] = 0;
  plVar1[0xd] = 0;
  plVar1[0xe] = 0;
  plVar4 = plVar1 + 9;
  *plVar4 = lVar3 + 0x50;
  *plVar1 = lVar3 + 0x10;
  plVar1[1] = (long)plVar2;
  plVar1[2] = (long)plVar1;
  plVar1[3] = 0x80;
  plVar1[4] = 8;
  plVar1[5] = 0;
  *(long *)(uVar5 + 0x98) = *(long *)(uVar5 + 0x98) + -1;
  (**(code **)(*plVar4 + 0x10))(plVar4);
  if (*(long *)(param_2 + 0x198) != 0) {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x198) + 0x48) + 0x18))();
  }
  *(long **)(param_2 + 0x198) = plVar1;
  lVar3 = plVar1[9];
  *param_1 = plVar1;
                    /* WARNING: Could not recover jumptable at 0x005d5bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(lVar3 + 0x10))(plVar4);
  return uVar5;
}


