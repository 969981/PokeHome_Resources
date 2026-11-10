/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00635e38; name: FUN_.text__00635e38
 */


undefined8 FUN__text__00635e38(long param_1,undefined4 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN__text__006455bc();
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  iVar1 = FUN__text__00645570(param_2);
  if (iVar1 < 0) {
    return 0;
  }
  uVar3 = FUN__text__0061b780(*(undefined8 *)(param_1 + 0x2f0),iVar1);
  return uVar3;
}


