/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00274884; name: FUN_.text__00274884
 */


void FUN__text__00274884(long param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = FUN__text__0012cbe0(param_1 + 0x110,0x71e3b1);
  if (*(char *)(param_1 + 0x73d) != '\0') {
    FUN__text__003a1630(uVar1);
    *(undefined1 *)(param_1 + 0x73d) = 0;
  }
  local_18 = FUN__text__003a85a0(uVar1);
  FUN__text__003a8304(uVar1,&local_18,1,1);
  local_18 = 0x431e769ffc1ad350;
  uVar1 = FUN__text__0012ce7c(param_1 + 0x110,&local_18);
  FUN__text__003a14e8(uVar1,1);
  FUN__text__00128ec0(param_1,0);
  FUN__text__00128ca0(param_1,1,1);
  *(undefined1 *)(param_1 + 0x73c) = 0;
  return;
}


