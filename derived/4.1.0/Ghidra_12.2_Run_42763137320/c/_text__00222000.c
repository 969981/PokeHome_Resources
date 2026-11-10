/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00222000; name: FUN_.text__00222000
 */


void FUN__text__00222000(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  *(undefined2 *)(param_1 + 0x6c8) = 0;
  *(undefined1 *)(param_1 + 0x6ca) = 0;
  FUN__text__00128ca0(param_1,1,1);
  lVar1 = param_1 + 0x110;
  if ((param_2 & 1) != 0) {
    uVar2 = FUN__text__0012cbe0(lVar1,0x70ee35);
    FUN__text__003a1630();
    local_18 = FUN__text__003a85a0(uVar2);
    FUN__text__003a8304(uVar2,&local_18,1,1);
  }
  FUN__text__0012bca0(lVar1,1);
  FUN__text__00128ec0(param_1,0);
  local_18 = 0x431e769ffc1ad350;
  uVar2 = FUN__text__0012ce7c(lVar1,&local_18);
  FUN__text__003a14e8(uVar2,1);
  return;
}


