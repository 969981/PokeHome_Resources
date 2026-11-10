/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c84d0; name: FUN_.text__003c84d0
 */


void FUN__text__003c84d0(long param_1,undefined8 *param_2,long *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 local_28;
  long local_20;
  undefined1 auStack_18 [8];
  
  local_28 = *param_2;
  local_20 = *param_3;
  *param_3 = 0;
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x180) + *(long *)(param_1 + 0x188) * 0x10);
  if (*(long *)(param_1 + 0x188) == *(long *)(param_1 + 400)) {
    FUN__text__003c8dc0(auStack_18,param_1 + 0x140,puVar1,1,&local_28);
    if (local_20 != 0) {
      (**(code **)(*(long *)(local_20 + 0x48) + 0x18))();
    }
  }
  else {
    uVar2 = tpidr_el0;
    uVar2 = uVar2 & 0xffffffffffffe000;
    if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x140);
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
    *puVar1 = local_28;
    puVar1[1] = local_20;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
    *(long *)(param_1 + 0x188) = *(long *)(param_1 + 0x188) + 1;
  }
  return;
}


