/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00142264; name: FUN_.text__00142264
 */


void FUN__text__00142264(long *param_1,long param_2,long *param_3,undefined8 param_4,
                        undefined8 param_5)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  
  local_38 = param_4;
  if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_48 = *(undefined8 *)(param_2 + 0xa8);
  local_40 = param_2;
  FUN__text__001423ac(param_1,param_5,&local_40,&local_38,&local_48);
  lVar3 = *param_1;
  local_50 = *param_3;
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
  }
  FUN__text__00128598(lVar3,&local_50);
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    local_50 = 0;
  }
  local_40 = *param_1;
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x10))();
  }
  plVar1 = *(long **)(param_2 + 0x80);
  if (plVar1 < *(long **)(param_2 + 0x88)) {
    uVar2 = tpidr_el0;
    uVar2 = uVar2 & 0xffffffffffffe000;
    if (*(long *)(uVar2 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar2 + *(long *)(uVar2 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_2 + 0x90);
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + 1;
    *plVar1 = local_40;
    *(long *)(uVar2 + 0x98) = *(long *)(uVar2 + 0x98) + -1;
    *(long **)(param_2 + 0x80) = plVar1 + 1;
  }
  else {
    FUN__text__00130fb0(param_2 + 0x78,&local_40);
    if (local_40 != 0) {
      (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    }
  }
  *(undefined1 *)(param_2 + 0xc0) = 0;
  return;
}


