/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00142784; name: FUN_.text__00142784
 */


void FUN__text__00142784(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [24];
  long local_38;
  
  FUN__text__00128ca0(param_1,0,1);
  FUN__text__00128db0(param_1,0,1);
  lVar1 = FUN__text__0012cb14(param_1 + 0x110,0x724578);
  *(long *)(param_1 + 0x648) = lVar1;
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x110) = 1;
    *(undefined8 *)(lVar1 + 0x108) = 0x4000080000000;
    uVar3 = *(undefined8 *)(param_1 + 0x648);
    FUN__text__005e927c(auStack_50,0x86a1a8);
    FUN__text__003a1de4(uVar3,auStack_50);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
    lVar1 = *(long *)(param_1 + 0x648);
    pcVar2 = *(code **)(lVar1 + 0x388);
    if (pcVar2 != (code *)0x0) {
      *(undefined8 *)(lVar1 + 0x390) = 0;
      *(undefined8 *)(lVar1 + 0x398) = 0;
      *(undefined8 *)(lVar1 + 0x380) = 0;
      *(undefined8 *)(lVar1 + 0x388) = 0;
      (*pcVar2)(lVar1 + 0x3a0);
    }
    *(long *)(lVar1 + 0x3a0) = param_1;
    *(undefined1 **)(lVar1 + 0x380) = &LAB__text__001435d4;
    *(undefined **)(lVar1 + 0x388) = &DAT__text__001435e0;
    *(undefined1 **)(lVar1 + 0x390) = &LAB__text__001435e4;
    *(undefined1 **)(lVar1 + 0x398) = &LAB__text__001435f0;
    lVar1 = *(long *)(param_1 + 0x648);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x15a) = 0;
      FUN__text__003a14e8(lVar1,0);
      lVar1 = FUN__text__0012cb14(param_1 + 0x110,0x724580);
      *(long *)(param_1 + 0x650) = lVar1;
      if (lVar1 != 0) {
        *(undefined8 *)(lVar1 + 0x108) = 0x8000020000000;
        *(undefined1 *)(lVar1 + 0x110) = 1;
        uVar3 = *(undefined8 *)(param_1 + 0x650);
        FUN__text__005e927c(auStack_50,0x86a1a8);
        FUN__text__003a1de4(uVar3,auStack_50);
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
        }
        lVar1 = *(long *)(param_1 + 0x650);
        pcVar2 = *(code **)(lVar1 + 0x388);
        if (pcVar2 != (code *)0x0) {
          *(undefined8 *)(lVar1 + 0x390) = 0;
          *(undefined8 *)(lVar1 + 0x398) = 0;
          *(undefined8 *)(lVar1 + 0x380) = 0;
          *(undefined8 *)(lVar1 + 0x388) = 0;
          (*pcVar2)(lVar1 + 0x3a0);
        }
        *(long *)(lVar1 + 0x3a0) = param_1;
        *(undefined1 **)(lVar1 + 0x380) = &LAB__text__001435fc;
        *(undefined **)(lVar1 + 0x388) = &DAT__text__00143608;
        *(undefined1 **)(lVar1 + 0x390) = &LAB__text__0014360c;
        *(undefined1 **)(lVar1 + 0x398) = &LAB__text__00143618;
        lVar1 = *(long *)(param_1 + 0x650);
        if (lVar1 != 0) {
          *(undefined1 *)(lVar1 + 0x15a) = 0;
          FUN__text__003a14e8(lVar1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


