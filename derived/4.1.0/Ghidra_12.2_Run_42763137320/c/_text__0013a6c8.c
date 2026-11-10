/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013a6c8; name: FUN_.text__0013a6c8
 */


void FUN__text__0013a6c8(long param_1,ulong param_2,undefined8 *param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (param_2 & 0xffffffff) * 8;
  lVar1 = lVar2 + 0x7237a0;
  if (*(int *)(param_1 + 0x64c) != 0) {
    lVar1 = lVar2 + 0x7237f8;
  }
  uVar3 = FUN__text__005f3244(*param_3);
  FUN__text__0012c9f0(param_1 + 0x110,lVar1,uVar3,param_4);
  return;
}


