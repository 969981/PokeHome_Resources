/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00127e00; name: FUN_.text__00127e00
 */


void FUN__text__00127e00(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_168 [4];
  undefined8 *local_148;
  long *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 *local_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 *local_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  
  FUN__text__001199b0(local_168);
  FUN__text__00129720(*(undefined8 *)(param_1 + 0x60),param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = FUN__text__00129570(*(undefined8 *)(param_1 + 0x60));
  puVar1 = local_168;
  if ((uVar3 & 1) == 0) {
    puVar1 = param_2;
  }
  FUN__text__00129720(uVar2,puVar1);
  FUN__text__00129720(*(undefined8 *)(param_1 + 0x70),local_168);
  puVar1 = local_108;
  local_108 = (undefined8 *)0x0;
  local_168[0] = 0x8677e8;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*local_100 + 0x18))(local_100,puVar1,uStack_f8,local_f0);
  }
  puVar1 = local_128;
  local_128 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*local_120 + 0x18))(local_120,puVar1,uStack_118,local_110);
  }
  puVar1 = local_148;
  local_148 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    (**(code **)(*local_140 + 0x18))(local_140,puVar1,uStack_138,local_130);
  }
  return;
}


