/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00322870; name: FUN_.text__00322870
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__00322870(void)

{
  long *plVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long local_68;
  long local_48;
  
  plVar1 = _DAT_008a2a00;
  uVar9 = *(undefined8 *)(*_DAT_0089f3d8 + 0x2a8);
  lVar7 = *_DAT_008a2a00;
  lVar8 = *(long *)(lVar7 + 0x50);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    lVar7 = *plVar1;
  }
  lVar7 = *(long *)(lVar7 + 0x58);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  iVar10 = 0;
  iVar12 = 0;
  do {
    iVar11 = 0;
    do {
      FUN__text__00300448(&local_48,lVar8,iVar10,iVar11,uVar9);
      FUN__text__00300448(&local_68,lVar7,iVar10,iVar11,uVar9);
      uVar3 = FUN__text__00306588(local_48);
      uVar4 = FUN__text__00306588(local_48);
      if (((uVar4 & 1) == 0) && (uVar4 = FUN__text__00306588(local_68), (uVar4 & 1) == 0)) {
        lVar5 = FUN__text__00637404(*(undefined8 *)(local_48 + 0x58));
        lVar6 = FUN__text__00637404(*(undefined8 *)(local_68 + 0x58));
        if (lVar5 != lVar6) {
LAB__text__003229f0:
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          }
          if (local_48 != 0) {
            (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          }
          bVar2 = true;
          goto LAB__text__00322a1c;
        }
      }
      else {
        uVar4 = FUN__text__00306588(local_48);
        if (((uVar4 & 1) == 0) || (uVar4 = FUN__text__00306588(local_68), (uVar4 & 1) == 0))
        goto LAB__text__003229f0;
      }
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      }
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      }
      iVar11 = iVar11 + 1;
      iVar12 = iVar12 + ((uVar3 ^ 0xffffffff) & 1);
    } while (iVar11 != 0x1e);
    iVar10 = iVar10 + 1;
  } while (iVar10 != 300);
  bVar2 = DAT_008ef05c != iVar12;
LAB__text__00322a1c:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return bVar2;
}


