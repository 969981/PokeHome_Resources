/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014aeb4; name: FUN_.text__0014aeb4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014aeb4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_240 [64];
  
  FUN__text__0014c920(local_240,param_2);
  if (*(long *)(param_1 + 0x130) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x130) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x130) = local_240[0];
  FUN__text__005ee4e0(local_240[0],*(undefined8 *)(param_1 + 0x60));
  (**(code **)(**(long **)(param_1 + 0x130) + 0x70))(*(long **)(param_1 + 0x130),1,0);
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  FUN__text__005a7908(local_240,*(undefined8 *)(*(long *)(param_1 + 0x108) + 0x130));
  FUN__text__005ee478(uVar2,local_240);
  FUN__text__0014821c(local_240);
  lVar3 = *(long *)(param_1 + 0x130);
  lVar4 = *(long *)(*(long *)(param_1 + 0xf0) + 0xb0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar3 + 0xb0);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(long *)(lVar3 + 0xb0) = lVar4;
  lVar3 = *(long *)(param_1 + 0x130);
  lVar4 = *(long *)(*(long *)(param_1 + 0x108) + 0x130);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar3 + 0x130);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(long *)(lVar3 + 0x130) = lVar4;
  *(undefined1 *)(*(long *)(param_1 + 0x130) + 0x208) = 1;
  FUN__text__00147cfc(local_240,param_2,_DAT_0089fcb0);
  if (*(long *)(param_1 + 0x138) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x138) + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0x138) = local_240[0];
  lVar3 = *(long *)(*(long *)(param_1 + 0xf0) + 0xb0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(local_240[0] + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(local_240[0] + 0xb0) + 0x48) + 0x18))();
  }
  *(long *)(local_240[0] + 0xb0) = lVar3;
  lVar3 = *(long *)(param_1 + 0x138);
  lVar4 = *(long *)(*(long *)(param_1 + 0xf0) + 0x130);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar1 = *(long *)(lVar3 + 0x130);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  *(long *)(lVar3 + 0x130) = lVar4;
  *(undefined1 *)(*(long *)(param_1 + 0x138) + 0x208) = 1;
  FUN__text__005c5e00(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x138));
  return;
}


