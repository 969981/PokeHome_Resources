/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013ad00; name: FUN_.text__0013ad00
 */


void FUN__text__0013ad00(long *param_1,long param_2,long *param_3,undefined8 param_4,
                        undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined1 uStack_31;
  
  local_40 = param_4;
  if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  local_50 = *(undefined8 *)(param_2 + 0xa8);
  local_48 = param_2;
  lVar2 = FUN__text__0013ae5c(&uStack_31,param_5,&local_48,&local_40,&local_50);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  local_58 = *param_3;
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN__text__00128598(lVar2,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  local_48 = lVar2;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))((long *)(lVar2 + 0x48));
  plVar1 = *(long **)(param_2 + 0x80);
  if (plVar1 < *(long **)(param_2 + 0x88)) {
    uVar3 = tpidr_el0;
    uVar3 = uVar3 & 0xffffffffffffe000;
    if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_2 + 0x90);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    *plVar1 = local_48;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(long **)(param_2 + 0x80) = plVar1 + 1;
  }
  else {
    FUN__text__00130fb0(param_2 + 0x78,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  *(undefined1 *)(param_2 + 0xc0) = 0;
  return;
}


