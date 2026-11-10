/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00161070; name: FUN_.text__00161070
 */


void FUN__text__00161070(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 0x260) != 0) {
    FUN__text__00162cbc();
  }
  if (*(long *)(param_1 + 0x268) != 0) {
    FUN__text__00162cbc();
  }
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x1c0));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x1c8));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x1d0));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x1d8));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x1e0));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x1e8));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x1f0));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x1f8));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x200));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x208));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x210));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x218));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x220));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x228));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x230));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x238));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x240));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x248));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 0x250));
  FUN__text__0068d884();
  FUN__text__001625ac(*(undefined8 *)(param_1 + 600));
  FUN__text__0068d884();
  uVar2 = *(ulong *)(*(long *)(param_1 + 0xaf0) + 0x48);
  if (uVar2 != 0) {
    plVar3 = *(long **)(*(long *)(param_1 + 0xaf0) + 0x40);
    plVar1 = plVar3;
    if ((uVar2 & 1) != 0) {
      lVar4 = *plVar3;
      if (lVar4 != 0) {
        *(ushort *)(lVar4 + 0x114) = *(ushort *)(lVar4 + 0x114) | 4;
      }
      plVar1 = plVar3 + 2;
    }
    if ((uVar2 - 1 & 0xfffffffffffffff) != 0) {
      do {
        lVar4 = *plVar1;
        if (lVar4 != 0) {
          *(ushort *)(lVar4 + 0x114) = *(ushort *)(lVar4 + 0x114) | 4;
        }
        lVar4 = plVar1[2];
        if (lVar4 != 0) {
          *(ushort *)(lVar4 + 0x114) = *(ushort *)(lVar4 + 0x114) | 4;
        }
        plVar1 = plVar1 + 4;
      } while (plVar1 != plVar3 + uVar2 * 2);
    }
  }
  return;
}


