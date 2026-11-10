/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d8f78; name: FUN_.text__001d8f78
 */


void FUN__text__001d8f78(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8) + 0x110;
  uVar2 = FUN__text__0012cb14(lVar1,param_1 + 0x3c8);
  uVar3 = FUN__text__0012cb14(lVar1,param_1 + 0x438);
  FUN__text__003a14c4(uVar2,param_2);
  FUN__text__003a14c4(uVar3,param_2);
  return;
}


