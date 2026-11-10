/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0028a2a8; name: FUN_.text__0028a2a8
 */


void FUN__text__0028a2a8(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  *(undefined1 *)(param_1 + 0x868) = 0;
  local_28 = 0x918e9ae3c487032f;
  plVar1 = (long *)FUN__text__0012cdb0(param_1 + 0x110,&local_28);
  (**(code **)(*plVar1 + 0x50))();
  local_28 = 0x431e769ffc1ad350;
  uVar2 = FUN__text__0012ce7c(param_1 + 0x110,&local_28);
  FUN__text__003a14e8(uVar2,1);
  FUN__text__00128ec0(param_1,0);
  FUN__text__00128ca0(param_1,1,1);
  return;
}


