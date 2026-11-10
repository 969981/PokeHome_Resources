/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00322470; name: FUN_.text__00322470
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00322470(void)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  long local_50;
  long local_48;
  long local_28;
  
  plVar1 = _DAT_008a2a00;
  uVar5 = *(undefined8 *)(*_DAT_0089f3d8 + 0x2a8);
  lVar3 = *_DAT_008a2a00;
  lVar4 = *(long *)(lVar3 + 0x50);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    lVar3 = *plVar1;
  }
  lVar3 = *(long *)(lVar3 + 0x58);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN__text__00300180(lVar4);
  iVar6 = 0;
  do {
    iVar7 = 0;
    do {
      FUN__text__00300448(&local_28,lVar3,iVar6,iVar7,uVar5);
      uVar2 = FUN__text__00306588(local_28);
      if ((uVar2 & 1) == 0) {
        local_48 = local_28;
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
        }
        FUN__text__00301ddc(lVar4,&local_48,uVar5,iVar6,iVar7);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
        FUN__text__00300448(&local_50,lVar4,iVar6,iVar7,uVar5);
        if (local_50 != 0) {
          (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        }
      }
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0x1e);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 300);
  FUN__text__00304b90();
  FUN__text__00305bd8();
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


