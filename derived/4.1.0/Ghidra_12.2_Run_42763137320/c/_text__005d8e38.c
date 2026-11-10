/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d8e38; name: FUN_.text__005d8e38
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__005d8e38(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  long lVar4;
  long local_28;
  
  FUN__text__005d9900(&local_28,param_1 + 0x160);
  if (local_28 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x60);
    if (*(long *)(param_1 + 0x78) != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x68);
    }
    lVar4 = FUN__text__005d9760(param_1 + 0x160,*puVar1);
    *(long *)(param_1 + 0x180) = lVar4;
    if (lVar4 != 0) {
      uVar3 = 0;
      *(undefined1 *)(param_1 + 0x171) = 1;
      goto joined_r0x005d8ef0;
    }
    *(undefined1 *)(param_1 + 0x171) = 0;
  }
  puVar1 = _DAT_0089f5d0;
  if (*(long *)(param_1 + 0x60) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x60) + 0x60);
  }
  puVar2 = (undefined8 *)(param_1 + 0x70);
  if (*(long *)(param_1 + 0x78) != 0) {
    puVar2 = puVar1;
  }
  uVar3 = FUN__text__005dd084(param_1 + 0x90,*puVar2,1);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x90);
joined_r0x005d8ef0:
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return uVar3;
}


