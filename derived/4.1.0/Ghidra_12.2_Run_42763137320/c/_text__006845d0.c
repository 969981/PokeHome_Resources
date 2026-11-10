/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006845d0; name: FUN_.text__006845d0
 */


undefined8 FUN__text__006845d0(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + -9;
  FUN__text__00683cb4();
  FUN__text__0067999c(*(undefined8 *)(lVar3 + 0x20),*(undefined4 *)(param_2 + 0x10));
  lVar1 = *(long *)(lVar3 + 0x20) + 4;
  *(long *)(lVar3 + 0x20) = lVar1;
  FUN__text__0067999c(lVar1,*(undefined4 *)(param_2 + 0x14));
  *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) + 4;
  uVar2 = FUN__text__006834ec(param_1,*(undefined8 *)(param_2 + 0x18),
                              *(undefined8 *)(param_2 + 0x20));
  if ((int)uVar2 == -0x1f6) {
    uVar2 = 0xfffffdf6;
  }
  return uVar2;
}


