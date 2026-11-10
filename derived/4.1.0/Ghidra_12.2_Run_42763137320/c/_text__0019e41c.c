/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019e41c; name: FUN_.text__0019e41c
 */


void FUN__text__0019e41c(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x18);
  if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  lVar1 = puVar3[1];
  FUN__text__001b99d8(*(undefined8 *)(param_1 + 0x68));
  FUN__text__001b99d8(*(undefined8 *)(param_1 + 0x88));
  FUN__text__001cf5fc(*(undefined8 *)(param_1 + 0xa8));
  FUN__text__001cf5fc(*(undefined8 *)(param_1 + 200));
  FUN__text__001ad460(*(undefined8 *)(param_1 + 0x48));
  FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x68),0);
  FUN__text__001b1b44(*(undefined8 *)(param_1 + 0x88),0);
  FUN__text__001b1b44(*(undefined8 *)(param_1 + 0xa8),0);
  FUN__text__001b1b44(*(undefined8 *)(param_1 + 200),0);
  uVar2 = *(int *)(lVar1 + 4) - 1;
  if (uVar2 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x0019e4d0 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0019e4dc + (ulong)*(byte *)((ulong)uVar2 + 0x725c70) * 4))();
    return;
  }
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  uVar2 = *(int *)(lVar1 + 8) - 1;
  if (uVar2 < 4) {
                    /* WARNING: Could not emulate address calculation at 0x0019e5ec */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK__text__0019e5f8 + (ulong)*(byte *)((ulong)uVar2 + 0x725c74) * 4))();
    return;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  uVar2 = FUN__text__00323940();
  uVar2 = uVar2 & 0xff;
  *(uint *)(param_1 + 0x1e4) = uVar2;
  FUN__text__001a39b4(*(undefined8 *)(param_1 + 0x28),uVar2);
  FUN__text__001c722c(*(undefined8 *)(param_1 + 0x20),uVar2,*(undefined4 *)(param_1 + 0x1e4));
  FUN__text__00323960(*(undefined4 *)(param_1 + 0x1e4));
  FUN__text__0019e874(param_1);
  FUN__text__001a507c(*(undefined8 *)(param_1 + 0x28),0);
  if (*(int *)*puVar3 == 2) {
    FUN__text__001a39b4(*(undefined8 *)(param_1 + 0x28),0);
  }
  return;
}


