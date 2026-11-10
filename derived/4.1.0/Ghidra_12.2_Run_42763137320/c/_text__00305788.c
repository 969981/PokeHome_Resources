/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00305788; name: FUN_.text__00305788
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN__text__00305788(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_50 [16];
  undefined8 local_40;
  ushort local_38 [8];
  void *local_28;
  
  iVar2 = FUN__text__00305840(param_1 + 0x50);
  uVar1 = DAT_008e1640;
  if (iVar2 == 0) {
    local_38[0] = 0;
    local_50 = FUN__text__0011b95c(DAT_008e15f0);
    local_40 = 0x10015f008c54000;
    std::string::assign((char *)local_38);
    uVar3 = FUN__text__00308dec(uVar1,local_50);
    if ((local_38[0] & 1) != 0) {
      operator_delete(local_28);
      return uVar3 & 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}


