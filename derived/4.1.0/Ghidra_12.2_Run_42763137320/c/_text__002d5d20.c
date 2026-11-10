/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d5d20; name: FUN_.text__002d5d20
 */


bool FUN__text__002d5d20(undefined8 param_1,undefined2 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  long local_48;
  
  FUN__text__002f0c20();
  FUN__text__002d63f8(&local_48);
  puVar3 = (ulong *)FUN__text__002d636c(local_48 + 0x60,param_2);
  uVar9 = *puVar3;
  uVar7 = puVar3[1];
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  uVar8 = (uint)(uVar9 >> 0x20);
  uVar1 = uVar8 + param_3;
  uVar4 = FUN__text__002f0ef0();
  uVar2 = FUN__text__002ceafc(uVar4,param_2);
  if (uVar2 <= uVar1) {
    uVar1 = uVar2;
  }
  uVar5 = FUN__text__002ceab8(uVar4,param_2);
  if (((uint)uVar7 >> 2 & 1) == 0) {
    uVar9 = uVar9 & 0xffffffff;
  }
  else {
    uVar9 = uVar5 & 0xffffffff;
    FUN__text__002d63f8(&local_48);
    uVar5 = FUN__text__002d63bc(local_48 + 0x60,uVar9);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
    if ((uVar5 & 1) == 0) {
      FUN__text__002d63f8(&local_48);
      FUN__text__002d63d0(local_48 + 0x60,uVar9,1);
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      }
    }
    uVar6 = FUN__text__002ceb40(uVar4,param_2);
    uVar5 = 0xfffffffffffffff3;
    if ((uVar6 & 1) == 0) {
      uVar5 = 0xfffffffffffffffb;
    }
    uVar7 = uVar7 & uVar5;
  }
  FUN__text__002d63f8(&local_48);
  FUN__text__002d63a4(local_48 + 0x60,param_2,(ulong)uVar1 << 0x20 | uVar9,uVar7);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return uVar8 < uVar1;
}


