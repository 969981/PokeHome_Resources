/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00323610; name: FUN_.text__00323610
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__00323610(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(DAT_00ae8070 + 0x50);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(DAT_00ae8070 + 0x68);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  iVar3 = 0;
  iVar5 = 0;
  uVar6 = *(undefined8 *)(*_DAT_0089f3d8 + 0x2a8);
  do {
    iVar1 = FUN__text__003024ac(lVar4,iVar5,uVar6,1);
    iVar5 = iVar5 + 1;
    if (iVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
  } while (iVar5 != 300);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return iVar3;
}


