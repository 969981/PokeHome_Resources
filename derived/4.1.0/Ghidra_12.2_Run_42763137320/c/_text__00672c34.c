/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00672c34; name: FUN_.text__00672c34
 */


void FUN__text__00672c34(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  long local_40;
  undefined8 local_38;
  
  auVar3 = FUN__text__0066c6a8();
  iVar1 = FUN__text__0066c6d8(auVar3._0_8_,auVar3._8_8_,
                              *(undefined8 *)(*(long *)(param_1 + 0x1100) + 0x40),
                              *(undefined8 *)(*(long *)(param_1 + 0x1100) + 0x48));
  if (999 < iVar1) {
    local_38 = 0;
    local_40 = param_1;
    uVar2 = FUN__text__00651324(param_1,*(undefined8 *)(param_1 + 0x1100),&local_40,
                                FUN__text__00673c5c);
    while ((uVar2 & 1) != 0) {
      FUN__text__00670414(param_1,local_38,1);
      uVar2 = FUN__text__00651324(param_1,*(undefined8 *)(param_1 + 0x1100),&local_40,
                                  FUN__text__00673c5c);
    }
    *(undefined1 (*) [16])(*(long *)(param_1 + 0x1100) + 0x40) = auVar3;
  }
  return;
}


