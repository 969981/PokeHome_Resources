/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004480b0; name: FUN_.text__004480b0
 */


void FUN__text__004480b0(undefined8 param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_2 + 8);
  if (lVar4 != 0) {
    if (*(long *)(param_2 + 0x18) != 0) {
      *(undefined2 *)(*(long *)(param_2 + 0x18) + 0x48) = 0;
    }
    if (DAT_00aea600 != 0) {
      uVar3 = (uint)lVar4;
      uVar3 = (uVar3 ^ uVar3 >> 0x10) * -0x7a143595;
      uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
      uVar3 = uVar3 ^ uVar3 >> 0x10;
      uVar2 = 0;
      if (DAT_00aea600 != 0) {
        uVar2 = uVar3 / DAT_00aea600;
      }
      plVar1 = (long *)(DAT_00aea5f8 + (ulong)(uVar3 - uVar2 * DAT_00aea600) * 8);
      lVar4 = *plVar1;
      if (lVar4 != 0) {
        uVar2 = ((uint)lVar4 ^ (uint)lVar4 >> 0x10) * -0x7a143595;
        uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
        if ((uVar2 ^ uVar2 >> 0x10) == uVar3) {
          lVar5 = 0;
        }
        else {
          do {
            lVar5 = lVar4;
            lVar4 = *(long *)(lVar5 + 0x70);
            if (lVar4 == 0) {
              return;
            }
            uVar2 = ((uint)lVar4 ^ (uint)lVar4 >> 0x10) * -0x7a143595;
            uVar2 = (uVar2 ^ uVar2 >> 0xd) * -0x3d4d51cb;
          } while ((uVar2 ^ uVar2 >> 0x10) != uVar3);
        }
        if (lVar5 != 0) {
          plVar1 = (long *)(lVar5 + 0x70);
        }
        *plVar1 = *(long *)(lVar4 + 0x70);
        DAT_00aea608 = DAT_00aea608 + -1;
      }
    }
  }
  return;
}


