/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003238a0; name: FUN_.text__003238a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__003238a0(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  lVar2 = *(long *)(DAT_00ae8070 + 0x50);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  iVar3 = 0;
  iVar4 = 0;
  uVar5 = *(undefined8 *)(*_DAT_0089f3d8 + 0x2a8);
  do {
    iVar1 = FUN__text__003024ac(lVar2,iVar4,uVar5,1);
    iVar4 = iVar4 + 1;
    if (iVar1 == 0) {
      iVar3 = iVar3 + 1;
    }
  } while (iVar4 != 300);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return iVar3;
}


