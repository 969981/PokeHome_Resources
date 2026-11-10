/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045c7b0; name: FUN_.text__0045c7b0
 */


ulong FUN__text__0045c7b0(long param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(param_1 + 0x118);
  uVar2 = *(uint *)(param_1 + 0x120);
  if (*param_2 < (lVar1 + (ulong)uVar2 * 0x118) - 0x118) {
    FUN__text__0045ba54();
    lVar1 = *(long *)(param_1 + 0x118);
    uVar2 = *(uint *)(param_1 + 0x120);
  }
  lVar1 = lVar1 + (ulong)uVar2 * 0x118;
  FUN__text__0045cc00(lVar1 + -0x30);
  FUN__text__00451d7c(lVar1 + -0x58);
  FUN__text__00451cdc(lVar1 + -0x58);
  if (*(long *)(lVar1 + -0x98) != 0) {
    *(undefined4 *)(lVar1 + -0x90) = 0;
    (**(code **)(**(long **)(lVar1 + -0xa0) + 0x18))();
    *(undefined8 *)(lVar1 + -0x98) = 0;
    *(undefined4 *)(lVar1 + -0x8c) = 0;
  }
  if ((*(long *)(lVar1 + -0x78) != 0) && (*(char *)(lVar1 + -0x70) != '\0')) {
    (**(code **)(**(long **)(lVar1 + -0x80) + 0x18))();
    *(undefined1 *)(lVar1 + -0x70) = 0;
  }
  *(undefined8 *)(lVar1 + -0x78) = 0;
  *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -1;
  return *param_2;
}


