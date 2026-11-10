/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001a3ae0; name: FUN_.text__001a3ae0
 */


void FUN__text__001a3ae0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 local_128;
  undefined1 auStack_120 [192];
  undefined8 local_48;
  
  lVar4 = *(long *)(param_1 + 0x20);
  lVar5 = *(long *)(lVar4 + 0xe8);
  uVar2 = *(uint *)(lVar5 + 0x2c);
  uVar3 = *(uint *)(lVar5 + 0x30);
  lVar5 = *(long *)(lVar4 + (ulong)(*(int *)(lVar4 + 0x1b0) != *(int *)(lVar5 + 0x24) &&
                                   *(int *)(lVar4 + 0x1b4) == *(int *)(lVar5 + 0x24)) * 0x20 + 0x68)
  ;
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_128 = 0;
  FUN__text__003c7960(lVar4,param_1 + 0x88,&local_128);
  lVar1 = param_1 + 0x188;
  local_128 = 0;
  FUN__text__003c7960(lVar4,lVar1,&local_128);
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar7 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(lVar7 + 0x2d0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  memcpy(&local_128,(void *)(lVar5 + (ulong)uVar2 * 1000 + (ulong)uVar3 * 200 + 0x42d0),200);
  FUN__text__003c8320(lVar4,auStack_120);
  FUN__text__003c81e0(lVar4,param_1 + 0x90,auStack_120);
  local_48 = 0;
  FUN__text__003c7960(lVar4,auStack_120,&local_48);
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x2d0);
  if (lVar5 == 0) {
    FUN__text__003c7c60(0,param_1 + 0x80,1);
    FUN__text__003c7c60(0,lVar1,0);
  }
  else {
    plVar6 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN__text__003c7c60(lVar5,param_1 + 0x80,1);
    FUN__text__003c7c60(lVar5,lVar1,0);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  FUN__text__0012c378(lVar7 + 0x110,param_1 + 0x200);
  *(undefined1 *)(param_1 + 0x284) = 1;
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


