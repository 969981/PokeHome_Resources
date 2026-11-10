/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00138d04; name: FUN_.text__00138d04
 */


void FUN__text__00138d04(long param_1,uint param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long local_70;
  uint local_68;
  uint local_64;
  
  lVar7 = *(long *)(param_1 + 0xa68);
  lVar8 = *(long *)(param_1 + 0xa70);
  lVar1 = (ulong)param_4 * 8 + 0x721dc8;
  lVar2 = (ulong)param_4 * 8 + 0x721e20;
  lVar4 = lVar1;
  if (*(int *)(param_1 + 0x64c) != 0) {
    lVar4 = lVar2;
  }
  lVar4 = FUN__text__003c79c0(*(undefined8 *)(param_1 + 0x2d0),lVar4);
  *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe | (lVar7 != 0 || lVar8 != 0);
  lVar4 = *(long *)(param_1 + 0xa68);
  if (lVar4 == 0) goto LAB__text__00138ed0;
  lVar7 = *(long *)(param_1 + 0xa50);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    lVar4 = *(long *)(param_1 + 0xa68);
  }
  local_70 = *(long *)(lVar4 + (ulong)param_2 * 8);
  lVar8 = lVar7;
  lVar4 = lVar1;
  if (*(long *)(param_1 + 0xa58) == 0) {
LAB__text__00138e14:
    lVar7 = *(long *)(lVar7 + 0x60);
    if (*(int *)(param_1 + 0x64c) != 0) {
      lVar4 = lVar2;
    }
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0xa58) + 0x188);
    if (lVar5 == 0) {
LAB__text__00138e34:
      lVar7 = *(long *)(lVar8 + 0x60);
      if (*(int *)(param_1 + 0x64c) != 0) {
        lVar4 = lVar2;
      }
    }
    else {
      iVar3 = FUN__text__005dc7a0(lVar5,&local_70);
      if (iVar3 < 0) goto LAB__text__00138e14;
      lVar8 = *(long *)(param_1 + 0xa58);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      if (lVar7 == 0) goto LAB__text__00138e34;
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      lVar7 = *(long *)(lVar8 + 0x60);
      if (*(int *)(param_1 + 0x64c) != 0) {
        lVar4 = lVar2;
      }
    }
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x2d0) + 0x2e8);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__005f2d98(lVar7,&local_70,lVar5);
  uVar6 = FUN__text__005f3244(lVar5);
  FUN__text__0012c9f0(param_1 + 0x110,lVar4,uVar6,0xb);
  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
LAB__text__00138ed0:
  if (*(long *)(param_1 + 0xa70) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0xa70) + (ulong)param_2 * 8);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    if (*(int *)(param_1 + 0x64c) != 0) {
      lVar1 = lVar2;
    }
    uVar6 = FUN__text__005f3244(lVar4);
    FUN__text__0012c9f0(param_1 + 0x110,lVar1,uVar6,0xb);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (((*(int *)(param_1 + 0x64c) == 1) || (*(int *)(param_1 + 0x64c) == 0)) &&
     (*(code **)(param_1 + 0xa80) != (code *)0x0)) {
    local_70 = param_1;
    local_68 = param_4;
    local_64 = param_2;
    (**(code **)(param_1 + 0xa80))(param_1 + 0xaa0,&local_64,&local_68,&local_70);
  }
  return;
}


