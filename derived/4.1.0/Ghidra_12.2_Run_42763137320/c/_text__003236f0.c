/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003236f0; name: FUN_.text__003236f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003236f0(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long local_58;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar3 = *(long *)(DAT_00ae8070 + 0x50);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(DAT_00ae8070 + 0x68);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  iVar5 = 0;
  uVar6 = *(undefined8 *)(*_DAT_0089f3d8 + 0x2a8);
  do {
    iVar1 = FUN__text__003024ac(lVar4,iVar5,uVar6,1);
    if (iVar1 != 0) {
      iVar1 = 0;
      do {
        FUN__text__00300448(&local_48,lVar4,iVar5,iVar1,uVar6);
        uVar2 = FUN__text__00306588(local_48);
        if ((uVar2 & 1) == 0) {
          local_4c = 0;
          local_50 = 0;
          local_58 = local_48;
          if (local_48 != 0) {
            (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
          }
          FUN__text__003019dc(lVar3,&local_58,uVar6,&local_4c,&local_50);
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            local_58 = 0;
          }
          DAT_008ef05c = DAT_008ef05c + 1;
        }
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0x1e);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 300);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


