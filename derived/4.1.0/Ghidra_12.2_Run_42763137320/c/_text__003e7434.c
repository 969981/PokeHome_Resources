/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e7434; name: FUN_.text__003e7434
 */


void FUN__text__003e7434(long param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long local_18;
  
  lVar2 = FUN__text__0069c590(*(undefined8 *)(param_1 + 0x58),param_3);
  *(undefined8 *)(lVar2 + 8) = 0xffffffffffffffff;
  (**(code **)(*param_2 + 0x38))(param_2);
  thunk_FUN__text__005d6bd0(&local_18);
  *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(local_18 + 0x58);
  plVar1 = *(long **)(param_1 + 0x178);
  if (plVar1 < *(long **)(param_1 + 0x180)) {
    uVar3 = tpidr_el0;
    uVar3 = uVar3 & 0xffffffffffffe000;
    if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 0x188);
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
    *plVar1 = local_18;
    *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
    *(long **)(param_1 + 0x178) = plVar1 + 1;
  }
  else {
    FUN__text__003e7530(param_1 + 0x170,&local_18);
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    }
  }
  return;
}


