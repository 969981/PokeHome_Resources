/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002f3adc; name: FUN_.text__002f3adc
 */


void FUN__text__002f3adc(long param_1,long *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x88) != 0) && (uVar1 = FUN__text__002fea18(), (uVar1 & 1) == 0)) {
    return;
  }
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  if (*(long *)(uVar1 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x3e0,0x10);
  if (lVar2 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN__text__002fe7ec(lVar2,param_1,param_3);
  *(long **)(lVar2 + 8) = param_2;
  *(long *)(lVar2 + 0x10) = lVar2;
  *(undefined8 *)(lVar2 + 0x18) = 0x3e0;
  *(undefined8 *)(lVar2 + 0x20) = 0x10;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x88) = lVar2;
  FUN__text__005e896c(lVar2,0x71c2e4,0xffffffff,0x10);
  return;
}


