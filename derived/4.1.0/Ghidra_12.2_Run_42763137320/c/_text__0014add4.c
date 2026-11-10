/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014add4; name: FUN_.text__0014add4
 */


void FUN__text__0014add4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 local_18;
  undefined1 uStack_11;
  
  local_18 = 2;
  lVar1 = FUN__text__0014c800(&uStack_11,param_2,0x714e50,&local_18);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x128) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x128) = lVar1;
  if (*(long *)(lVar1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar1 + 0xb0) + 0x48) + 0x18))();
  }
  *(undefined8 *)(lVar1 + 0xb0) = 0;
  lVar1 = *(long *)(param_1 + 0x128);
  lVar3 = *(long *)(*(long *)(param_1 + 0xf0) + 0x130);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar1 + 0x130);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  *(long *)(lVar1 + 0x130) = lVar3;
  *(undefined1 *)(*(long *)(param_1 + 0x128) + 0x1ac) = 1;
  *(undefined1 *)(*(long *)(param_1 + 0x128) + 0x208) = 1;
  FUN__text__005c5e00(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x128));
  return;
}


