/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00235818; name: FUN_.text__00235818
 */


void FUN__text__00235818(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_58;
  
  lVar4 = *(long *)(param_1 + 0x2d0);
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  FUN__text__001156d0(&local_58,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar6 = *(long *)(local_58 + 0x60);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    if (local_58 == 0) goto LAB__text__002358b0;
  }
  (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
LAB__text__002358b0:
  lVar8 = *(long *)(param_1 + 0x790);
  FUN__text__003c7c60(lVar4,0x72ad78,1);
  FUN__text__0012c8d0((float)(param_2 % 0xc),param_1 + 0x110,0x71315c);
  lVar7 = *(long *)(lVar4 + 0x2e8);
  if (lVar7 == 0) {
    FUN__text__005f2d98(lVar6,0x72ad80,0);
  }
  else {
    plVar5 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN__text__005f2d98(lVar6,0x72ad80,lVar7);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  uVar2 = *(uint *)(param_1 + 0x764);
  FUN__text__0023211c(&local_58,*(undefined8 *)(param_1 + 8),0x72a8f1);
  FUN__text__005f32c4(local_58,lVar8 + (ulong)uVar2 * 24000 + (ulong)param_2 * 0x50 + 0xa8);
  lVar7 = *(long *)(lVar4 + 0x2e0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = lVar8 + 0x84;
  lVar1 = lVar8 + (ulong)uVar2 * 24000 + (ulong)param_2 * 0x50;
  FUN__text__00165990(lVar7,0,local_58,*(undefined4 *)(lVar1 + 8),*(undefined1 *)(lVar1 + 0x1c));
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  lVar7 = *(long *)(lVar4 + 0x2e0);
  uVar3 = *(undefined4 *)(lVar8 + (ulong)*(uint *)(param_1 + 0x764) * 24000 + (ulong)param_2 * 0x50)
  ;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__00165904(lVar7,1,uVar3);
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  FUN__text__003c8c20(lVar4,0x72ad78,0xb);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  return;
}


