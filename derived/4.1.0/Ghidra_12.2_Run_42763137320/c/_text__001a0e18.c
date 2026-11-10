/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a0e18; name: FUN_.text__001a0e18
 */


bool FUN__text__001a0e18(long param_1,long *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  ulong uVar2;
  long local_38;
  
  uVar2 = FUN__text__001c6704(*(undefined8 *)(param_1 + 0x168));
  if ((uVar2 & 1) != 0) {
    uVar2 = FUN__text__001c6d68(*(undefined8 *)(param_1 + 0x168));
    iVar1 = 5;
    if ((uVar2 & 1) == 0) {
      iVar1 = 6;
    }
    *param_4 = iVar1;
    return false;
  }
  local_38 = *param_2;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  iVar1 = FUN__text__001a0ee0(param_1,&local_38,param_3);
  *param_4 = iVar1;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))((long *)(local_38 + 0x48));
    iVar1 = *param_4;
  }
  return iVar1 == 8;
}


