/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006664d0; name: FUN_.text__006664d0
 */


void FUN__text__006664d0(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  *(undefined4 *)(param_1 + 0x10f8) = 0;
  auVar2 = FUN__text__0066c6a8();
  *(undefined8 *)(param_1 + 0x1038) = 0;
  *(undefined4 *)(param_1 + 0x1040) = 0;
  *(undefined8 *)(param_1 + 0x1050) = 0;
  *(undefined4 *)(param_1 + 0x1058) = 0;
  *(undefined1 (*) [16])(param_1 + 0xff8) = auVar2;
  *(byte *)(param_1 + 0x10fc) = *(byte *)(param_1 + 0x10fc) & 0xfd;
  *(uint *)(param_1 + 0xfac) = *(uint *)(param_1 + 0xfac) & 0x90;
  if ((0 < *(long *)(param_1 + 0x7f8)) &&
     (iVar1 = FUN__text__0066c6d8(auVar2._0_8_,auVar2._8_8_,*(undefined8 *)(param_1 + 0x1050),
                                  *(undefined8 *)(param_1 + 0x1058)), 2999 < iVar1)) {
    *(undefined1 (*) [16])(param_1 + 0x1050) = auVar2;
    *(undefined8 *)(param_1 + 0x1060) = *(undefined8 *)(param_1 + 0xf90);
  }
  if ((0 < *(long *)(param_1 + 0x7f0)) &&
     (iVar1 = FUN__text__0066c6d8(auVar2._0_8_,auVar2._8_8_,*(undefined8 *)(param_1 + 0x1038),
                                  *(undefined8 *)(param_1 + 0x1040)), 2999 < iVar1)) {
    *(undefined1 (*) [16])(param_1 + 0x1038) = auVar2;
    *(undefined8 *)(param_1 + 0x1048) = *(undefined8 *)(param_1 + 0xf98);
  }
  return;
}


