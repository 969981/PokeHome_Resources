/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005088c0; name: FUN_.text__005088c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__005088c0(long *param_1,uint param_2)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  
  uVar3 = *(uint *)(param_1 + 1);
  if (param_2 < uVar3) {
    iVar8 = uVar3 - param_2;
    lVar7 = (ulong)param_2 * 0x118;
    do {
      lVar1 = *param_1 + lVar7;
      FUN__text__005099b0(lVar1);
      FUN__text__00507b30(lVar1 + 0x78);
      if (*(long *)(lVar1 + 0xa8) != 0) {
        *(undefined4 *)(lVar1 + 0xb0) = 0;
        FUN__text__00400fc0(0xb);
        *(undefined8 *)(lVar1 + 0xa8) = 0;
        *(undefined4 *)(lVar1 + 0xb4) = 0;
      }
      FUN__text__0051cae0(lVar1 + 0x88);
      lVar7 = lVar7 + 0x118;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  else {
    iVar8 = param_2 - *(uint *)((long)param_1 + 0xc);
    if ((*(uint *)((long)param_1 + 0xc) <= param_2 && iVar8 != 0) &&
       (uVar4 = FUN__text__00509b20(param_1,iVar8), (uVar4 & 1) == 0)) {
      return 0;
    }
    if ((uVar3 < param_2) && (lVar7 = *param_1, lVar7 != 0)) {
      lVar5 = (ulong)uVar3 * 0x118;
      lVar6 = ~(ulong)uVar3 + (ulong)param_2;
      lVar1 = _DAT_008a4038 + 0x10;
      while( true ) {
        if (lVar7 != 0) {
          plVar2 = (long *)(lVar7 + lVar5);
          plVar2[6] = 0;
          plVar2[7] = 0;
          plVar2[4] = 0;
          *(undefined4 *)(plVar2 + 5) = 0;
          *(undefined4 *)(plVar2 + 0xe) = 0;
          *(undefined4 *)(plVar2 + 0x17) = 0;
          *(undefined4 *)(plVar2 + 0x13) = 0;
          plVar2[0x22] = 0;
          plVar2[2] = 0;
          plVar2[3] = 0;
          *plVar2 = lVar1;
          plVar2[1] = 0;
          plVar2[8] = 0;
          plVar2[9] = 0;
          plVar2[10] = 0;
          plVar2[0xb] = 0;
          plVar2[0xc] = -1;
          plVar2[0xd] = -1;
          plVar2[0x15] = 0;
          plVar2[0x16] = 0;
          plVar2[0x11] = 0;
          plVar2[0x12] = 0;
          plVar2[0xf] = 0;
          plVar2[0x10] = 0;
          plVar2[0x18] = 0;
          plVar2[0x19] = 1;
          plVar2[0x1a] = 3;
          plVar2[0x1b] = 5;
          plVar2[0x1c] = 7;
          plVar2[0x1d] = 1;
          plVar2[0x1e] = 3;
          plVar2[0x1f] = 5;
          plVar2[0x20] = 7;
          plVar2[0x21] = 0;
        }
        if (lVar6 == 0) break;
        lVar7 = *param_1;
        lVar6 = lVar6 + -1;
        lVar5 = lVar5 + 0x118;
      }
    }
  }
  *(uint *)(param_1 + 1) = param_2;
  return 1;
}


