/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ec0e8; name: FUN_.text__003ec0e8
 */


undefined8 FUN__text__003ec0e8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long local_28;
  
  thunk_FUN__text__005cf500(&local_28,param_2);
  *param_1 = *(undefined8 *)(local_28 + 0xd0);
  plVar1 = *(long **)(param_3 + 0x548);
  if (plVar1 < *(long **)(param_3 + 0x550)) {
    uVar2 = tpidr_el0;
    uVar2 = uVar2 & 0xffffffffffffe000;
    if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_3 + 0x560);
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
    *plVar1 = local_28;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
    *(long **)(param_3 + 0x548) = plVar1 + 1;
  }
  else {
    FUN__text__003ec820(param_3 + 0x540,&local_28);
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return 1;
}


