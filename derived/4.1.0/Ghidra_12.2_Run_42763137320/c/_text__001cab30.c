/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001cab30; name: FUN_.text__001cab30
 */


void FUN__text__001cab30(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long local_38;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar2 = FUN__text__00195844(*(undefined8 *)(lVar4 + 0x10),*(undefined4 *)(param_1 + 0x34));
  lVar5 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(lVar4 + 0xe0);
  uVar1 = *(undefined4 *)((long)*(int *)(lVar2 + 0xc) * 4 + 0x725e90);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(param_1 + 0x300);
  uVar3 = 0;
  if ((lVar2 != -0x340d631b7bddd9bb) && (lVar2 != 0)) {
    local_38 = lVar2;
    uVar3 = FUN__text__00155100(*(undefined8 *)(lVar5 + 0x2d0),&local_38,0);
  }
  FUN__text__003d5154(lVar4,uVar1,uVar3,0,0);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


