/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00239e70; name: FUN_.text__00239e70
 */


void FUN__text__00239e70(long param_1,long param_2,int param_3,int param_4,ulong param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int local_54;
  short local_50;
  undefined4 local_4c;
  undefined2 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  local_38 = *(undefined8 *)((long)param_3 * 0x540 + (long)param_4 * 0x10 + 0x72ad90);
  lVar3 = param_2 + (ulong)*(uint *)(param_1 + 0x764) * 24000 + (param_5 & 0xffffffff) * 0x50;
  iVar1 = *(int *)(lVar3 + 0x84);
  if (iVar1 != 0) {
    local_4c = *(undefined4 *)(lVar3 + 0x8c);
    local_48 = *(undefined2 *)(lVar3 + 0x90);
    local_44 = *(undefined4 *)(lVar3 + 0x94);
    local_40 = *(undefined4 *)(lVar3 + 0x98);
    local_50 = *(short *)(lVar3 + 0x88);
    local_3c = 0xffffffff;
    if (iVar1 == 0x365) {
      local_3c = *(undefined4 *)(lVar3 + 0x9c);
    }
    else if (iVar1 == 0x37a && local_50 == 1) {
      local_50 = 0;
      local_40 = 2;
    }
    lVar3 = *(long *)(DAT_008e15a0 + 0x80);
    local_54 = iVar1;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(lVar3 + 0x2e8);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
    uVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_38);
    FUN__text__003c3378(lVar4,&local_54,0,uVar2,0,0);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  lVar3 = *(long *)(param_1 + 0x2d0);
  if (lVar3 != 0) {
    plVar5 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  FUN__text__003c7c60(lVar3,&local_38,iVar1 != 0);
  return;
}


