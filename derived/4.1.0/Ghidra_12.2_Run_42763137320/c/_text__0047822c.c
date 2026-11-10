/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047822c; name: FUN_.text__0047822c
 */


void FUN__text__0047822c(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 local_28;
  
  lVar2 = *(long *)(param_1[0x3a] + 0x70);
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x10) == 0) {
      *(long **)(lVar2 + 0x10) = param_1;
      param_1[0xe] = 0;
    }
    else {
      param_1[0xe] = *(long *)(lVar2 + 0x10);
      *(long **)(lVar2 + 0x10) = param_1;
    }
  }
  lVar2 = param_1[0x3a];
  local_28 = (**(code **)(*param_1 + 0x38))(param_1);
  uVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  FUN__text__0046c238(param_1,lVar2,&local_28,uVar1 & 1);
  FUN__text__004782c0(param_1);
  return;
}


