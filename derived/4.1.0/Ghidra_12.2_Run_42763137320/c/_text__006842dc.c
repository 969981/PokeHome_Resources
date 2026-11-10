/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006842dc; name: FUN_.text__006842dc
 */


undefined8 FUN__text__006842dc(long *param_1,ulong *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if ((ulong)(*(long *)(lVar3 + 0x10) - *(long *)(lVar3 + 0x20)) < *param_2) {
    uVar1 = 0xfffffdf6;
  }
  else {
    *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + -9;
    FUN__text__00683cb4();
    lVar2 = FUN__text__0068434c(*(undefined8 *)(lVar3 + 0x20),param_2[3],param_2[2]);
    uVar1 = 0;
    *(long *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) + lVar2;
  }
  return uVar1;
}


