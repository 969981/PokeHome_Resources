/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00323500; name: FUN_.text__00323500
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00323500(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  lVar2 = *(long *)(DAT_00ae8070 + 0x50);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(DAT_00ae8070 + 0x68);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  uVar6 = 0;
  iVar5 = 0;
  uVar4 = *(undefined8 *)(*_DAT_0089f3d8 + 0x2a8);
  do {
    iVar1 = FUN__text__003024ac(lVar2,iVar5,uVar4,1);
    iVar5 = iVar5 + 1;
    if (iVar1 == 0) {
      uVar6 = uVar6 + 1;
    }
  } while (iVar5 != 300);
  iVar5 = 0;
  uVar7 = 0;
  do {
    iVar1 = FUN__text__003024ac(lVar3,iVar5,uVar4,1);
    iVar5 = iVar5 + 1;
    if (iVar1 != 0) {
      uVar7 = uVar7 + 1;
    }
  } while (iVar5 != 300);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  iVar5 = 0;
  if (uVar6 <= uVar7) {
    iVar5 = uVar7 - uVar6;
  }
  return iVar5;
}


