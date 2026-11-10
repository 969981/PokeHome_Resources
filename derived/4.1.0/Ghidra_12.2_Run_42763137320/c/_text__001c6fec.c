/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c6fec; name: FUN_.text__001c6fec
 */


void FUN__text__001c6fec(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long local_48;
  
  *(undefined8 *)(param_1 + 0x38) = 0xee24745b0871f557;
  *(undefined8 *)(param_1 + 0xa8) = 0xd83118c2f68b2004;
  *(undefined8 *)(param_1 + 0x28) = 0x4ae972a16c4cd0b3;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x40) = 0xb3006af50b219cd3;
  *(undefined8 *)(param_1 + 0x48) = 0x6b183e7481ca1745;
  *(undefined8 *)(param_1 + 0xb0) = 0x9ec1672371e2e9cd;
  *(undefined8 *)(param_1 + 0xb8) = 0xdfa0ca95cf0886b7;
  *(undefined8 *)(param_1 + 0x118) = 0x8c41bd0b40e37f3f;
  *(undefined8 *)(param_1 + 0x120) = 0xd3f3fcd461ff81b;
  *(undefined8 *)(param_1 + 0x128) = 0x7ea6bec51d8698a8;
  *(undefined8 *)(param_1 + 0x130) = 0x43f3bd16c47b6a65;
  *(undefined8 *)(param_1 + 0x138) = 0xf3b15125fd4addcf;
  *(undefined8 *)(param_1 + 0x140) = 0xe457f6352c0f3a67;
  *(undefined8 *)(param_1 + 0x148) = 0x380cefce6b7092d4;
  *(undefined8 *)(param_1 + 0x150) = 0x43f74316c47e83ee;
  *(undefined8 *)(param_1 + 0x158) = 0xf08df902bc74ccff;
  *(undefined8 *)(param_1 + 0x160) = 0xf04c03f0f66e9867;
  *(undefined8 *)(param_1 + 0x168) = 0x54f95007744ec0d4;
  *(undefined8 *)(param_1 + 0x170) = 0x43fac916c4819d77;
  lVar2 = *(long *)(param_1 + 8) + 0x110;
  lVar1 = FUN__text__0012cb14(lVar2,(undefined8 *)(param_1 + 0x38));
  local_60 = 0xec4626aa1919c517;
  uStack_58 = 0x710422;
  local_50 = 0x15;
  local_48 = 0;
  FUN__text__003a1de4(lVar1,&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  *(undefined8 *)(lVar1 + 0x108) = 0x10000000000000;
  *(undefined1 *)(lVar1 + 0x110) = 1;
  lVar2 = FUN__text__0012cb14(lVar2,(undefined8 *)(param_1 + 0xa8));
  local_60 = 0xec4626aa1919c517;
  uStack_58 = 0x710422;
  local_50 = 0x15;
  local_48 = 0;
  FUN__text__003a1de4(lVar2,&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  *(undefined1 *)(lVar2 + 0x110) = 1;
  *(undefined8 *)(lVar2 + 0x108) = 0x20000000000000;
  return;
}


