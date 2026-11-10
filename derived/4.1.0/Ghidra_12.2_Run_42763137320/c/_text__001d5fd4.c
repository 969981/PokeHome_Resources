/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001d5fd4; name: FUN_.text__001d5fd4
 */


void FUN__text__001d5fd4(long param_1,int param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  uVar1 = *(int *)(param_1 + 0x680) + param_2;
  lVar3 = *(long *)(param_1 + 0x648);
  uVar5 = *(int *)(param_1 + 0x684) - 1;
  if (uVar1 <= uVar5) {
    uVar5 = uVar1;
  }
  *(uint *)(param_1 + 0x680) = uVar5;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    uVar5 = *(uint *)(param_1 + 0x680);
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar3,param_1 + (ulong)uVar5 * 8 + 0x668,lVar4);
  uVar2 = FUN__text__005f3244(lVar4);
  FUN__text__0012c9f0(param_1 + 0x110,0x725ed8,uVar2,0xb);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  FUN__text__001d5a04(param_1);
  FUN__text__001d5f10(param_1);
  if (*(char *)(param_1 + 0x688) == '\0') {
    FUN__text__00128ca0(param_1,1,1);
    return;
  }
  return;
}


