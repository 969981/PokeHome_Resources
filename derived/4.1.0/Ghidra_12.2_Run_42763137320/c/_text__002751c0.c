/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002751c0; name: FUN_.text__002751c0
 */


void FUN__text__002751c0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long local_18;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  local_18 = lVar2;
  uVar3 = FUN__text__0012cbe0(lVar1 + 0x110,0x71e3b1);
  uVar4 = FUN__text__003a85a0();
  if ((int)lVar2 != (int)uVar4 || (int)((ulong)lVar2 >> 0x20) != (int)((ulong)uVar4 >> 0x20)) {
    FUN__text__003a8304(uVar3,&local_18,1,0);
  }
  FUN__text__00128ca0(lVar1,1,1);
  return;
}


