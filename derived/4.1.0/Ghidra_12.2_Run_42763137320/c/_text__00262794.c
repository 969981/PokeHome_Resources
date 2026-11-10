/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00262794; name: FUN_.text__00262794
 */


void FUN__text__00262794(long *param_1,long param_2,long *param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long local_68;
  long local_48;
  
  if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
LAB__text__0026295c:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar2 = *(long **)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0xa8);
  *(long **)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = plVar2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  lVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,0xc620,0x10);
  if (lVar1 == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
  }
  FUN__text__00262964(lVar1,param_2,param_4,uVar3);
  *param_1 = lVar1;
  *(long **)(lVar1 + 8) = plVar2;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(lVar1 + 0x18) = 0xc620;
  *(undefined8 *)(lVar1 + 0x20) = 0x10;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  plVar2 = (long *)(lVar1 + 0x48);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  local_48 = *param_3;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN__text__00128598(lVar1,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  local_68 = lVar1;
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))(plVar2);
  plVar2 = *(long **)(param_2 + 0x80);
  if (plVar2 < *(long **)(param_2 + 0x88)) {
    if (*(long *)(uVar4 + 0x98) == 0x10) goto LAB__text__0026295c;
    *(undefined8 *)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = *(undefined8 *)(param_2 + 0x90);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *plVar2 = local_68;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *(long **)(param_2 + 0x80) = plVar2 + 1;
  }
  else {
    FUN__text__00130fb0(param_2 + 0x78,&local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    }
  }
  *(undefined1 *)(param_2 + 0xc0) = 0;
  return;
}


