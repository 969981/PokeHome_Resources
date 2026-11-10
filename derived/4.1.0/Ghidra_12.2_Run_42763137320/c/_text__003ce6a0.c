/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ce6a0; name: FUN_.text__003ce6a0
 */


undefined8 FUN__text__003ce6a0(long *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = (**(code **)(*param_1 + 0xd8))();
  if ((uVar2 & 1) == 0) {
    lVar4 = param_1[0x18];
    uVar1 = (**(code **)(*param_1 + 0xc0))(param_1,1);
    uVar3 = FUN__text__003e9fb0(lVar4,uVar1);
    return uVar3;
  }
  return 0;
}


