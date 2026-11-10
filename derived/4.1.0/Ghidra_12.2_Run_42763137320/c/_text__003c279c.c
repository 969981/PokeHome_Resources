/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c279c; name: FUN_.text__003c279c
 */


void FUN__text__003c279c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x58);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *param_2;
  lVar1 = *(long *)(lVar3 + 0x78);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(long *)(lVar3 + 0x78) = lVar2;
  *(undefined4 *)(*param_2 + 0x70) =
       *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x68) + 0x60) + 0x70);
  lVar2 = *param_2;
  lVar1 = *(long *)(*(long *)(param_1 + 0x68) + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x60);
  *(long *)(lVar2 + 0x60) = lVar1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar2 = *param_2;
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x68);
  *(long *)(lVar2 + 0x68) = lVar1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar1 = *param_2;
  lVar2 = *(long *)(*(long *)(param_1 + 0x68) + 0x60);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar2 + 0x68);
  *(long *)(lVar2 + 0x68) = lVar1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  lVar1 = *(long *)(param_1 + 0x68);
  lVar2 = *param_2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar1 + 0x60);
  *(long *)(lVar1 + 0x60) = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}


