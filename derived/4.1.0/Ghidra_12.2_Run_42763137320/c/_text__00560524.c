/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00560524; name: FUN_.text__00560524
 */


bool FUN__text__00560524(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  if (*(uint *)(param_1 + 0x28) < 4) {
    *(undefined8 *)(param_1 + 0x20) =
         *(undefined8 *)((long)(int)*(uint *)(param_1 + 0x28) * 8 + 0x892648);
  }
  if (*(uint *)(param_1 + 0x68) < 4) {
    *(undefined8 *)(param_1 + 0x60) =
         *(undefined8 *)((long)(int)*(uint *)(param_1 + 0x68) * 8 + 0x892648);
    bVar1 = *(long *)(param_1 + 0x20) != 0;
    if (!bVar1) {
      return bVar1;
    }
  }
  else {
    bVar2 = *(long *)(param_1 + 0x60) != 0;
    bVar3 = *(long *)(param_1 + 0x20) != 0;
    bVar1 = bVar3 && bVar2;
    if (!bVar3 || !bVar2) {
      return bVar1;
    }
  }
  FUN__text__00560e80(param_1,param_2,param_3,param_4);
  FUN__text__005614c0(param_1,param_2,param_3,param_4);
  return bVar1;
}


