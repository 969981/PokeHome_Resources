/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00244da0; name: FUN_.text__00244da0
 */


void FUN__text__00244da0(long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  uVar1 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x640) + 0xe0) + (param_2 & 0xffffffff) * 8)
  ;
  *(undefined4 *)(param_1 + 0x708) = 0;
  local_28 = 0x431e769ffc1ad350;
  uVar2 = FUN__text__0012ce7c(param_1 + 0x110,&local_28);
  FUN__text__003a14e8(uVar2,1);
  FUN__text__00244e30(param_1,uVar1);
  return;
}


