/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ce750; name: FUN_.text__002ce750
 */


void FUN__text__002ce750(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [96];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  FUN__text__002ce770();
  lVar1 = DAT_008e52f0;
  lVar3 = FUN__text__002ced90(&uStack_c0,*(undefined8 *)(DAT_008e52f0 + 8));
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar1 + 0x50);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  *(long *)(lVar1 + 0x50) = lVar3;
  FUN__text__005e927c(auStack_40,0x87b0d0);
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_c0 = 0;
  pcStack_b8 = (code *)0x0;
  uVar5 = FUN__text__002ce1c4(lVar3,auStack_40,&uStack_c0);
  pcVar2 = pcStack_b8;
  if ((uVar5 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  if (pcStack_b8 != (code *)0x0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    pcStack_b8 = (code *)0x0;
    (*pcVar2)(auStack_a0);
  }
  if (lStack_28 != 0) {
    (**(code **)(*(long *)(lStack_28 + 0x48) + 0x18))();
  }
  return;
}


