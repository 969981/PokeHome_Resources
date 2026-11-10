/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00657470; name: FUN_.text__00657470
 */


undefined8 FUN__text__00657470(long param_1,long param_2,int param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  uVar1 = *(uint *)(param_1 + 0x80);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 0x58) != param_2) {
      FUN__text__0066bd88();
      uVar1 = *(uint *)(param_1 + 0x80);
    }
    uVar1 = uVar1 & 0xfffffffe;
    *(uint *)(param_1 + 0x80) = uVar1;
  }
  *(long *)(param_1 + 0x58) = param_2;
  if ((param_2 != 0) && (param_3 != 0)) {
    *(uint *)(param_1 + 0x80) = uVar1 | 1;
  }
  return 0;
}


