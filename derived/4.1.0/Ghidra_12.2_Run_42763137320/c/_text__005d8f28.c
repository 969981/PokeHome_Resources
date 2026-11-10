/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d8f28; name: FUN_.text__005d8f28
 */


undefined4 FUN__text__005d8f28(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  long local_28;
  
  lVar1 = param_1 + 0x160;
  FUN__text__005d9900(&local_28,lVar1);
  if (local_28 != 0) {
    puVar2 = (undefined8 *)(param_1 + 0x60);
    if (*(long *)(param_1 + 0x78) != 0) {
      puVar2 = (undefined8 *)(param_1 + 0x68);
    }
    uVar5 = *puVar2;
    lVar4 = FUN__text__005d9760(lVar1,uVar5);
    if (lVar4 != 0) {
      FUN__text__005d97b0(lVar1,uVar5,param_2);
      uVar3 = 0;
      param_3 = *(long *)(param_1 + 0x188) + param_3;
      lVar1 = *(long *)(param_1 + 0x180);
      if (param_3 <= *(long *)(param_1 + 0x180)) {
        lVar1 = param_3;
      }
      *(long *)(param_1 + 0x188) = lVar1;
      goto joined_r0x005d8fdc;
    }
  }
  uVar3 = FUN__text__005dd0cc(param_1 + 0x90,param_2,param_3);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x98);
joined_r0x005d8fdc:
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return uVar3;
}


